#include <iostream>


int main(){
    [](){
        std::cout << "Hello World" << std::endl;
    }();

    [](double a, double b){
        std::cout << " a + b : " << (a+b) << std::endl;
    }(12.5,14.5);


    double result = [](double a, double b){
        return (a+b);
    }(120.5,14.5);
    std::cout << "result : " << result << std::endl;

    std::cout << "result : " << [](double a, double b){
        return (a+b);
    }(1220.5,14.5) << std::endl;

    double result2 = [](double a, double b)->double{
        return (a+b);
    }(11230.5,14.5);
    std::cout << "result2 : " << result2 << std::endl;


    auto say_hi = [](){
        std::cout << "Hello World..!" << std::endl;
    };
    say_hi(); //call the fuction

    auto say_hi2 = [](std::string name){
        std::cout << "hi " << name << std::endl;
    };
    say_hi2("Amal");


    auto get_max = [](int n1,int n2)->int{
        return (n1>n2) ? n1:n2;
    };

    std::cout << get_max(12312,12) << std::endl;

}