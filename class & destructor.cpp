#include <iostream>

const double PI{22/7};

class Cylinder{
   
    public :
       
        // functions ->  constructor type 1
        Cylinder(){
            this->height = 0.000;
            this->base_radius= 0.000;
        }
        
        Cylinder(double height, double base_radius){
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


        //member variables
        double base_radius = 0.0;
        double height = 0.0;
        double *volume_pointer = new double;

        //destructor
        //release heap memory ; 
        ~Cylinder(){
            std::cout << "Cylinder Destructor Called...!" << std::endl ;
            delete volume_pointer;
        }
    
    private:
        double  get_height(){
            return height;
        }
};


void do_something(){
    Cylinder *cylinder = new Cylinder(10.5,20.5);
}


void do_something(Cylinder cylinder){

}

int main(){
    do_something();

    // pointer mode    
    Cylinder *cylinder1 = new Cylinder(10.5,20.5);
    std::cout << cylinder1->base_radius << std::endl;
    std::cout << cylinder1->volume() << std::endl ;
    std::cout << (*cylinder1).volume() << std::endl;
    std::cout <<  *cylinder1->volume_pointer<< std::endl;

    delete cylinder1;

    //normal 
    Cylinder cylinder2 =  Cylinder(10.5,20.5);
    std::cout << cylinder2.base_radius << std::endl;
    std::cout << cylinder2.volume() << std::endl ;

    Cylinder cylinder3  = Cylinder(15.5 ,2.0);
    std::cout <<  cylinder3.get_height_() << std::endl;
    do_something(cylinder3);
}
