import os
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution


def generate_launch_description():
    use_sim_time = LaunchConfiguration("use_sim_time")
    lifecycle_nodes = ["slam_toolbox"]  # Removed map_saver_server from lifecycle nodes

    use_sim_time_arg = DeclareLaunchArgument(
        "use_sim_time",
        default_value="false"  # Changed to false for real robot operation
    )

    slam_config_arg = DeclareLaunchArgument(
        "slam_config",
        default_value=PathJoinSubstitution([
            get_package_share_directory('bumperbot_mapping'),
            'config',
            'slam_toolbox_optimized.yaml'  # Updated to optimized config
        ]),
        description="Full path to slam yaml file to load"
    )

    slam_toolbox = Node(
        package="slam_toolbox",
        executable="sync_slam_toolbox_node",
        name="slam_toolbox",
        output="screen",
        parameters=[
            LaunchConfiguration("slam_config"),
            {"use_sim_time": use_sim_time},
            # Add any additional parameters here
        ],
        remappings=[
            ('/scan', '/scan'),
            ('/tf', 'tf'),
            ('/tf_static', 'tf_static')
        ]
    )

    nav2_lifecycle_manager = Node(
        package="nav2_lifecycle_manager",
        executable="lifecycle_manager",
        name="lifecycle_manager_slam",
        output="screen",
        parameters=[
            {"node_names": lifecycle_nodes},
            {"use_sim_time": use_sim_time},
            {"autostart": True},
            {"bond_timeout": 10.0}  # Increased bond timeout
        ],
    )

    return LaunchDescription([
        use_sim_time_arg,
        slam_config_arg,
        slam_toolbox,
        nav2_lifecycle_manager,
    ])