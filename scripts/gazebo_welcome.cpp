#include <gazebo/gazebo.hh>

namespace gazebo {
  
  class MyWorldPlugin : public WorldPlugin {
	  
  public:
  
	  MyWorldPlugin() : WorldPlugin() {
        printf("Welcome to Oleksandr's world!\n");
      }
      
      void Load(physics::WorldPtr world, sdf::ElementPtr sdf) {}
      
  };

  GZ_REGISTER_WORLD_PLUGIN(MyWorldPlugin)
}