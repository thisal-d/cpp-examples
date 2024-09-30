#include <iostream>
#include <vector>
#include <array>

template <int size=5 ,typename T=int> //set default values
std::array<T, size> get_array(){
    std::array<T, size> array{};
    return array;
}

int main(){
    std::array<int,5> array= get_array();
    
    std::array<std::string, 100> array2 = get_array<100,std::string>();
    for (std::string i:array2){
        std::cout << i << "," ;
    }
}