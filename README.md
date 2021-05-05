# my_robot_world

A ROS package with a simple world containing one-floor building and two variants of a mobile robot. 

## Launching

Launch Gazebo world with the robot in it:

```bash
roslaunch my_robot_world world.launch
```

## Robot types

Robot with Kinect RGBD sensor and LIDAR:

```bash
roslaunch my_robot_world world.launch robot_type:=kinect_robot
```

```bash
roslaunch my_robot_world world.launch 
# assumes robot_type:=kinect_robot (default)
```

Robot with RGB camera and LIDAR:

```bash
roslaunch my_robot_world world.launch robot_type:=simple_robot
```

## World

A simple world with a one-floor building and a collection of custom SDF models:

 - `buidling`
 - `small_table`
 - `white_ball`

The world (`my.world`) loads a simple Gazebo plugin `gzwelcome`. To enable the plugin, the environment variable `GAZEBO_PLUGIN_PATH` has to be set. This is done by sourcing the `gzpath.sh` script. The full launching sequence is as follows:

```bash
$ catkin_make
$ source src/alexsm_world/scrips/gzpath.sh
$ gazebo src/alexsm_world/worlds/my.world
```

The package is cloned to `catkin_ws/src` as follows:

```bash
$ git clone https://github.com/semeniuta/RoboND-alexsm_world.git alexsm_world
```
