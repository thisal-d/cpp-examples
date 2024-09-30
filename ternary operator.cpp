#include <iostream>


int max(int num, int num2){
    return (num>num2)? num : num2;
}

int main(){
    
    int x = 10;
    int y = 20;

    std::string state = (x==y) ? "True" : "False" ;
    std::cout << state ;
    std::cout << std::endl ;

    (x==y) ? std::cout << "True-" , std::cout << 1 ,std::cout<< "1" : std::cout << "False";
    std::cout << std::endl ;

    y=10 ;
    std::string state_1 = "None" ;
    std::string state_2 = "None" ;

    (x==y) ? state_1="True" ,state_2="True" : state_1 = "False"; //should be same type
    std::cout << state_1 << "  " << state_2;
    std::cout << std::endl ;
  

    int a = 10 ;
    int b = 20 ;
    int max ;
    max = (a>b) ? a:b;
    std::cout << max << std::endl ;//20

    auto max1 = (a<b)? 20.5:a ;
    std::cout << max1 << std::endl ;//20.5
    
}