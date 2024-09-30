#include <iostream>


int main(){
    std::cout << "Hello World" << std::endl ;
    std::cerr << "Hello World" << std::endl ;
    std::clog << "Hello World" << std::endl ;

    int number; 
    std::cout << "Enter Number : " ; 
    std::cin >> number ;
    std::cout << number << std::endl ;


    //get 2 input with spaces
    std::cout << "Enter Name & Age : " ;
    int age ;
    std::string userName ;
    std::cin >> userName >> age ;
    std::cout << "hello " << userName  << " you are " << age <<" years old";


    std::string fullName ;
    std::cout << "Enter Full Name : " << std::endl ;
    std::getline(std::cin ,fullName) ;
    std::getline(std::cin>>std::ws ,fullName) ;
    std::cout << std::endl << fullName; 
}