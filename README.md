# 🚀 SLAM-Based IoT Rover

An **autonomous IoT rover** designed to perform **Simultaneous Localization and Mapping (SLAM)** using **GMapping** and **ROS Nav2**. This project integrates **real-time 2D mapping, autonomous navigation, obstacle avoidance, and motor control** to create a self-navigating rover.

---

🌟 Features

✅ Real-time 2D mapping with LD24 LiDAR and GMapping SLAM
✅ Autonomous navigation and path planning using ROS Nav2
✅ Obstacle detection & avoidance using sensor inputs
✅ Modular motor control with N20 Encoder Motor and SmartElex L298N Motor Driver
✅ Data logging & remote communication via ESP32
✅ Visualization with RViz for real-time SLAM data and navigation insights
✅ Implementation on real hardware for practical testing and deployment

## 🚀 SLAM-Based IoT Rover

An autonomous IoT rover designed to perform Simultaneous Localization and Mapping (SLAM) using GMapping and ROS Nav2. This project integrates real-time 2D mapping, autonomous navigation, obstacle avoidance, and motor control to create a self-navigating rover.

---

## 🔧 Tools & Technologies

### 🛠 Hardware

🔹 **Raspberry Pi 4** (Main controller running ROS)
🔹 **LD24 LiDAR** (Real-time 2D mapping)
🔹 **N20 Encoder Motor** (Odometry tracking and wheel control)
🔹 **SmartElex L298N Motor Driver** (Motor control)
🔹 **ESP32** (Data logging & remote communication)

🔧 Tools & Technologies

🛠 Hardware

🔹Raspberry Pi 4 (Main controller running ROS)

🔹LD24 LiDAR (Real-time 2D mapping)

🔹N20 Encoder Motor (Odometry tracking and wheel control)

🔹SmartElex L298N Motor Driver (Motor control)

🔹ESP32 (Data logging & remote communication)

💻 Software

🔹ROS2 (Nav2, GMapping, RViz)

🔹Python, C++


---

## 🏗️ Installation & Setup

### 📌 Prerequisites

🔹 Install **Ubuntu 20.04** on **Raspberry Pi 4**\
🔹 Set up **ROS Jazzy** and install **Nav2 & SLAM Tool box** packages

### 📥 Steps

1️⃣ **Clone the repository**

```bash
git clone https://github.com/sandeep-1901/AUTONOMOUS-NAVIGATION-SYSTEM-BASED-ON-2D-LiDAR-SLAM
cd slam-iot-rover
```

2️⃣ **Install dependencies**

```bash
sudo apt-get install ros-jazzy-slam-gmapping ros-jazzy-navigation python3-rosdep
```

3️⃣ **Launch the ROS nodes for SLAM**

```bash
ros2 launch bumperbot_ws bumperbot_bringup  simulated_robot.launch.py use_slam:=true //for mapping the enviornment 
ros2 launch bumperbot_ws bumperbot_bringup  simulated_robot.launch.py // for AMCl based localization  
```

🎉 **You’re all set!** The rover is now ready for SLAM-based autonomous navigation.

---

## 🚀 Future Improvements

🔹 Upgrade to **3D SLAM** using additional sensors\
🔹 Enhance **obstacle avoidance algorithms**\
🔹 Add **machine learning** for advanced decision-making & autonomous behaviors

---

## 📢 Contribute & Support

💡 Found a bug? Have suggestions? Open an **issue** or submit a **pull request**!\
🌟 If you like this project, **give it a star on GitHub!** ⭐

---

Happy coding & exploring! 🚀🤖

