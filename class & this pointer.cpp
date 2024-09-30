#include <iostream>

const double PI{22/7};

class Cylinder{
   
    public :
       
        // functions ->  constructor type 1
        Cylinder(){
            std::cout << "Cylinder Constructor Called...! @ " << this << std::endl ;
            this->height = 0.000;
            this->base_radius= 0.000;
        }
        
        Cylinder(double height, double base_radius){
            std::cout << "Cylinder Constructor Called...! @ " << this << std::endl ;
            this->height = height;
            this->base_radius=base_radius; 
        }
        
        // functions ->  method
        double volume(){
            *volume_pointer = PI*base_radius*base_radius*height;
            return PI*base_radius*base_radius*height;
        }

        double get_height_(){
            return get_height();
        }

        Cylinder* set_height(double height){
            this->height=height;
            return this; // for use incgabged calls
        }
        
        Cylinder* set_base_radius(double base_radius){
            this->base_radius=base_radius;
            return this;
        }

        Cylinder* set_volume(double volume){
            *(this->volume_pointer) = volume;
            return this;
        }

        Cylinder& set_height2(double height){
            this->height=height;
            return *this; // for use incgabged calls
        }

        Cylinder& set_base_radius2(double base_radius){
            base_radius = base_radius;// this do nothing use 56 line mode
            this->base_radius=base_radius;
            return *this;
        }

        Cylinder& set_volume2(double volume){
            *(this->volume_pointer) = volume;
            return *this;
        }

        //member variables
        double base_radius = 0.0;
        double height = 0.0;
        double *volume_pointer = new double;

        //destructor
        //release heap memory ; 
        ~Cylinder(){
            std::cout << "Cylinder Destructor Called...! @ " << this << std::endl ;
            //delete volume_pointer;
        }
    
    private:
        double  get_height(){
            return height;
        }
};



int main(){
    Cylinder cylinder  = Cylinder(15.5 ,2.0);
    std::cout <<  cylinder.get_height_() << std::endl;
    //chainde calls
    cylinder.set_height(10.231)->set_base_radius(32.11)->set_volume(4535);
    cylinder.set_height2(2131.2).set_base_radius2(213.1).set_volume2(213);
    std::cout << cylinder.height << std::endl ;


    Cylinder *cylinder2  = new Cylinder(15.5 ,2.0);
    std::cout <<  cylinder2->get_height_() << std::endl;
    cylinder2->~Cylinder();
    //chainde calls
    cylinder2->set_height(10.231)->set_base_radius(32.11)->set_volume(4535);
}
