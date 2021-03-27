# alexsm_world

ROS package including a simple world with a one-floor building and a collection of custom SDF models:

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
