#include <iostream>


int main(){
    int x = 100;
    auto y = &x;
    auto *z = &x;

    std::cout << y<< std::endl;
    std::cout << z << std::endl;
}