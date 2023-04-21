#!/bin/bash
echo "\nGeneral update\n"
sudo apt update && sudo apt upgrade -y


echo "\nInstall ROS-noetic\n"

####
echo "\nSetup sources.list and Keys\n"
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -

####
echo "\nInstallation\n"
sudo apt update
sudo apt install ros-noetic-desktop-full
sudo apt install ros-noetic-slam-gmapping

####
echo "\nEnvironment setup\n"
source /opt/ros/noetic/setup.bash
echo "source /opt/ros/noetic/setup.bash" >> ~/.bashrc
source ~/.bashrc

####
echo "\nDependencies for building packages\n"
sudo apt install python3-rosdep python3-rosinstall python3-rosinstall-generator python3-wstool build-essential
sudo apt install python3-rosdep
sudo rosdep init
rosdep update

####
echo "\nSetup own workspace\n"
cd
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/
catkin_make
source devel/setup.bash
echo "source /home/$USER/catkin_ws/devel/setup.bash" >> ~/.bashrc
source ~/.bashrc

echo $ROS_PACKAGE_PATH

####
echo "\nROS-noetic is now ready to go\n"
echo -e "\n\nEnd of script\n"