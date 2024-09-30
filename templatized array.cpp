#include <iostream>
#include <array>

std::array<int,4> func(int size){
    std::array<int,4> nums = {1,2,3,4};
    return nums;
}


int main(){
    std::array<int,3> numbers = {23,21,123} ;
    std::array<std::array<int,10>,10>  numbers2 ;
    numbers2[0] = {213,12,21,1} ;
}