#include <iostream>
#include "cylinder.h"

int main(){
    // pointer mode    
    Cylinder *cylinder1 = new Cylinder(10.5,20.5);
    std::cout << cylinder1->base_radius << std::endl;
    std::cout << cylinder1->volume() << std::endl ;
    std::cout << (*cylinder1).volume() << std::endl;
    std::cout << cylinder1->type << std::endl;

    //normal 
    Cylinder cylinder2 =  Cylinder(10.5,20.5);
    std::cout << cylinder2.base_radius << std::endl;
    std::cout << cylinder2.volume() << std::endl ;


    Cylinder cylinder3  = Cylinder(15.5 ,2.0);
    std::cout <<  cylinder3.get_height_() << "\n";


}
