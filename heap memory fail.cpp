#include <iostream>

int main()
{
    int* numbers = new int[100] ; //when array too much new will be fail [99999999999]

    //std::cout << numbers[0]  << numbers[1] ;
    for (int i=0; i<10; i++){
        numbers[i] = i ;
        std::cout << &numbers[i] <<  " - " <<  numbers[i] << "\n" ;
    }
}