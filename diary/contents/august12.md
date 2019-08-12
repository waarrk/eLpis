# August 12
Witer : [waarrk](https://twitter.com/waarrk)

## Install Lider's driver on ROS in PC for test
We use lider in maze competition for slam.  
So I bought lider.  
Its name is [LDS-01](http://www.robotis.us/360-laser-distance-sensor-lds-01-lidar/) which made by Hitachi-LG Data Storage.  
For test, I installed driver on ROS in PC's virtual Ubuntu.  

### How to
Premise complete of install ROS melodic.  
I worked in ~/Home/  

First, get tools.
```
sudo apt install python-catkin-tools
```
Second, make ROS workspace.
```
mkdir lider/src -p
cd lider/src
mkdir src
catkin_init_workspace
```
Third, get driver's repository from Github.
```
git clone -b melodic-devel https://github.com/ROBOTIS-GIT/hls_lfcd_lds_driver.git
```
Fourth, install System Dependencies.
```
cd ..
rosdep init
rosdep install -y -r -i --from-paths src
```
Fifth, build!!
```
catkin build
```

Please connect path before using on /lider  
This is necessary to run.
```
source devel/setup.bash
```

That's all thank you.
