#ifndef CYLINDER_HEADER
#define CYLINDER_HEADER


#include "constants.h"
class Cylinder{
    
    public :
        std::string type = "Cylinder";
        // functions ->  constructor type 1
        Cylinder();
        
        Cylinder(double height, double base_radius);
        // functions ->  method
        double volume();
           
        double get_height_();

        //member variables
        double base_radius = 0.0;
        double height = 0.0;
    
    private:
        double  get_height();
};


#endif