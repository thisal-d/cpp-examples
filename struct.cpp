#include <iostream>

//same as class use for store vars...
struct Rectangle
{   public : //default is public
        double length ;
        double width ; 
    private :
        int some ;
};

double area(double length, double width){
     return length * width ;
}

double area(double length){
    return length*length ;
}

double area(Rectangle rectangle){
    return rectangle.length * rectangle.width ;
}


int main(){
    Rectangle rectangle_1 ;
    rectangle_1.length = 10 ;
    rectangle_1.width = 10 ;
    std::cout << area(rectangle_1.length ,rectangle_1.width) ;
    std::cout << area(rectangle_1.length) ; 
    std::cout << area(rectangle_1) ;
}