#include <iostream>



int main(){
    double a{10};
    double b(20);
    
    /*
    auto func_error = [](){
        std::cout << a+b << std::endl;  
    };
    */ // this makes error

    // capture by value
    auto func = [a,b](){
        //a++ error read only 
        std::cout << a+b << std::endl;
    };

    func(); //-> 30
    a++;
    b++;
    func(); // still its 30

    // capture by reference    
    auto func2 = [&a,&b](){
        std::cout << a+b << std::endl;
    };
    func2();// -> 32
    a++;
    b++;
    func2(); // -> 34



    int d = 100;
    //capture all by value
    auto func3 = [=](){
        std::cout << d  <<  std::endl;
    };



    //capture all by reference
    auto func4 = [&](){
        std::cout << d++ << std::endl;
    };
    

    

}