#include "cylinder.h"


Cylinder::Cylinder(){
    this->height = 0.000;
    this->base_radius= 0.000;
}


Cylinder::Cylinder(double height, double base_radius){
    this->height = height;
    this->base_radius=base_radius;
} 

double Cylinder::volume(){
    return PI*base_radius*base_radius*height;
}

double Cylinder::get_height_(){
    return get_height();
}

double Cylinder::get_height(){
    return height;
}