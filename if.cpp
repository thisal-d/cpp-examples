#include <iostream>

int main(){

    if(true){
        std::cout << "Do Something" << "\n" ;
    }
    else{
        std::cout << "Do Something" << "\n" ;
    }


    int x = 10 ;
    int y = 20 ;
    std::string state ;
    if (y>x) std::cout << "y bigger than x...!" << "\n" ;
    else std::cout << "Condition is false " << "\n" , state = "X IS BIGGER";
    if (y>x) std::cout << "y bigger than x...!" << "\n" ,std::cout << "x smaller than y..!" << "\n";


    std::string str1 = "aaaa";
    std::string str2 = "aaaA";
    if (str1 > str2){
        std::cout << str1;
    }
    else{
        std::cout << str2;
    }
}
