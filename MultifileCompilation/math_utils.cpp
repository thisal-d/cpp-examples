#include <iostream>
#include "math_utils.h"

double area(double length, double width){
     return length * width ;
}

double area(double length){
    return length*length ;
}

double area(Rectangle rectangle){
    return rectangle.length * rectangle.width ;
}


User::User(std::string name_, std::string email_ ,std::string password_){
    name = name_ ;
    email = email_ ;
    password = password_ ;
}

std::string User::get_password(){
    return password ;
}

void User::set_password(std::string password_){
    password = password_ ;
}

std::ostream& operator << (std::ostream& output,User user){
    output << user.name << "    " << user.email << "  " << user.password ; //user.get_password() ; 
    return output ;
} ;


void output_status(User user){
    std::cout << user.password ;
}