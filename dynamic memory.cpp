#include <iostream>
#include <vector>

int main()
{
    int *number = nullptr;
    number = new int;
    *number = 70;

    int *number2 = new int;
    *number2 = 70;

    int *number3 = new int{100};
    
    delete number3;//relese memory and reset to nullptr cuz its no longer our memory
    number3 = nullptr; 
    number3 = new int(110); // alocate new memory address;


    int *numbers = new int[100]; //arrays
    numbers[0] = 0;
    numbers[1] = 100;
    numbers[2] = 200;
    numbers[3] = 300;
    numbers[4] = 400;


    
    int *numbers2 = new int[5]{1,2,3,4,5};
    std::cout << numbers2[0] << ",";  //1
    std::cout << numbers2[1] << ",";  //2
    std::cout << numbers2[2] << ",";  //3
    std::cout << numbers2[3] << ",";  //4
    std::cout << numbers2[4] << "\n"; //5


    int *numbers3 = new int[6]{0,1,2,3,4,5};
    //change the pointer
    number3++;
    std::cout << numbers2[0] << ",";  //1
    std::cout << numbers2[1] << ",";  //2
    std::cout << numbers2[2] << ",";  //3
    std::cout << numbers2[3] << ",";  //4
    std::cout << numbers2[4] << "\n"; //5

 
    const int *numbers4 = new int[6]{0,1,2,3,4,5};
    // int const *numbers4 = new int[6]{0,1,2,3,4,5};  //same thing
    numbers4++;
    // numbers4[0] = 10;   -> error cuz consts values


    
    int *const  numbers5 = new int[]{0,1,2,3,4,5} ;
    numbers5[1] = 100;
    //numbers5++;  -> error cuz constant pointer
}
