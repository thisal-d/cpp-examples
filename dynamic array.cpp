#include <iostream>


int main()
{
    int *numbers = new int[5]; //initialize with garbage values
    //delete 
    delete []numbers;
    numbers = nullptr;

    int *numbers2 = new int[5]{}; //initialize with 0
    //access dynamic array
    for(int i=0; i<5; i++){
        std::cout << numbers2[i] << "," << *(numbers2+i) << std::endl ;
    }
    std::cout << "\n\n";

    delete []numbers2;
    numbers2 = nullptr;

    int *numbers3 = new int[10]{1,2,3,4,5}; //initialize fist 5 and rest with 0
    //access dynamic array
    for(int i=0; i<10; i++){
        std::cout << numbers3[i] << "," << *(numbers3+i) << std::endl ;
    }

    delete []numbers3;
    numbers3 = nullptr;


    //
    int *numbers4 = new(std::nothrow) int[]{1,2,3,4} ;//without exceptions
    std::cout << numbers4[1];
    delete []numbers4;
    numbers4 = nullptr;
}