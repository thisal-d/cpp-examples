#include <iostream>
#include "math_utils.h"

int main(){
    Rectangle rectangle_1 ;
    rectangle_1.length = 10 ;
    rectangle_1.width = 10 ;
    std::cout << area(rectangle_1.length ,rectangle_1.width) ;
    std::cout << area(rectangle_1.length) ; 
    std::cout << area(rectangle_1) << std::endl;

    User user("Amal" , "amal@gmail.com" ,"^4*jH5#d@2");
    std::cout << user << std::endl << user << "\n" ;
    output_status(user);
    std::cout << std::endl << std::endl ;
    //dheap memory
    User *user2 = new User("Amal" , "amal@gmail.com" ,"^4*jH5#d@2");
    std::cout << user2 << "\n" ;
    std::cout << user2->email << "  " <<  (*user2).email ;
}