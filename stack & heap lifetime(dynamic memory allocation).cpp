#include <iostream>

int main()
{
    //stack lifetime
    //lifetime is controlled by the scoper mechanism
    //start life 
    {
        // intialize * var
        int number = 100;
        int *p_number2=new int;
    }
    //end life
    //s td::cout << number ; -> ERROR
    //std::cout << p_number2 ; -> ERROR 


    //heap lifetime
    //heap memory
    //heap allocated memory 
    int *p_number = nullptr;
    p_number = new int;
    *p_number = 77;
    std::cout << p_number << "  " ;
    std::cout << *p_number << std::endl ;

    //life end
    delete p_number;
    p_number = nullptr;


   
    int *p_number1 = nullptr ; //a pointer pointing nowhere
    //*p_number1 = 10; // writing to nowhere  is bad :/ 
    
    int*p_number5 = new int;// a pointer pointing somewhere :D 
    *p_number5 = 10 ;//this is gonna be ok ;
    std::cout << "ponter : " << p_number5  << "      value : " << *p_number5 << "\n"; 
    delete p_number5;//release pointer
    p_number5 = nullptr;//reset memory pointer to null

    p_number5 = new int ; // reuse again
    *p_number5 = 100 ; 
    std::cout << "ponter : " << p_number5  << "      value : " << *p_number5 << "\n";
    delete p_number5;//release pointer
    p_number5 = nullptr;//reset memory pointer to null


    std::string *strings = new std::string[1000] ;
    int *numbers = new int[1000];
    
    return 0;
} 