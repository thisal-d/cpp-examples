#include <iostream>

int main()
{
    //Uninitialized pointer
    //Deleted pointer
    //Multiple pointers pointing to same memory

    int * p_number; //Uninitialized pointer

    int *p_number2 = new int(78);
    delete p_number2; 

    std::cout << p_number2 << std::endl ; //Deleted pointer



    int *p_number3 = new int(83);
    int *p_number4 = p_number3;

    std::cout << p_number3 << " " << p_number4 << "\n"; //same address

    //p_number4 = nullptr ;
    std::cout << p_number3 << " " << p_number4 << "\n"; //same address
    delete p_number3 ;
    //dont do this 
    // dont use returned memory :/ its could be cause to crash
    *p_number3 = 99;
    std::cout << *p_number3 << "  " << *p_number4 << "\n" ; // 99 99
}
