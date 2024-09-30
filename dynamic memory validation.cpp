#include <iostream>

int main(){
    int* p_number1{}; //=nullptr

    if (!(p_number1==nullptr)){
        std::cout << "Valid Addrerss\n";
    }else{
        std::cout << "Invalid Address\n";
    }

    if (p_number1){
        std::cout << "Valid Addrerss\n";
    }else{
        std::cout << "Invalid Address\n";
    }
            
    int *p_number2 {};
    delete p_number2; // this won't cause any problem
                      //even if p_number2 is nullptr

}