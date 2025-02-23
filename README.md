SLAM-Based IoT Rover
An autonomous IoT rover built to perform Simultaneous Localization and Mapping (SLAM) using GMapping and ROS Nav2. This project integrates real-time 2D mapping, autonomous navigation, obstacle avoidance, and motor control.

Features
Real-time 2D mapping with LD24 LiDAR and GMapping SLAM.
Autonomous navigation and path planning using ROS Nav2.
Obstacle detection and avoidance using sensor inputs.
Modular motor control with N20 Encoder Motor and SmartElex L298N Motor Driver.
Data logging and remote communication via ESP32.
Tools and Technologies
Hardware: Raspberry Pi 4, LD24 LiDAR, N20 Encoder Motor, SmartElex L298N Motor Driver.
Software: ROS (Nav2), GMapping, Python, ESP32, Altium Designer.
Programming Languages: Python, C++.
System Architecture
Components:
Raspberry Pi 4: Acts as the main controller for the system, running ROS.
LD24 LiDAR: Provides real-time 2D mapping data for GMapping SLAM.
N20 Encoder Motor: Tracks odometry and controls wheel movement.
ESP32: Handles data logging and communication.
SmartElex L298N Motor Driver: Controls the motors for navigation.
Installation and Setup
Prerequisites
Install Ubuntu 20.04 on Raspberry Pi 4.
Set up ROS Noetic and install the Nav2 and GMapping packages.
Steps
Clone the repository:
bash
Copy code
git clone https://github.com/[your-repo-link](https://github.com/sandeep-1901/AUTONOMOUS-NAVIGATION-SYSTEM-BASED-ON-2D-LiDAR-SLAM)
cd slam-iot-rover
Install dependencies:
bash
Copy code
sudo apt-get install ros-noetic-slam-gmapping ros-noetic-navigation python3-rosdep
Launch the ROS nodes for SLAM:
bash
Copy code
roslaunch slam_project_mapping mapping.launch
Future Improvements
Upgrade to 3D SLAM using additional sensors.
Enhance obstacle avoidance algorithms.
Add machine learning for advanced decision-making and autonomous behaviors.
