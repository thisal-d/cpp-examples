#include <iostream>

int main()
{
    int age = 30;
    const int &age_ref = age ;

    std::cout << "age : " << age << std::endl;
    std::cout << "age_ref : " << age_ref << std::endl;

    age++; // u can change main var,not refer one
            //when u change main one even refer one is const it will be change
    //age_ref++ -> Error
    std::cout << "age : " << age << std::endl;
    std::cout << "age_ref : " << age_ref << std::endl;

    std::cout << "\n\n\n";

    int number = 40;
    const int* p_number = &number ;
    std::cout << "number    : " << number  << "  " << &number << "\n";
    std::cout << "*p_number : " << *p_number << "  " << p_number  << "\n";
    p_number = p_number + 1; //u can change p_number ,memory address
                             //but u cant change value @ pointer
    std::cout << "number    : " << number  << "  " << &number << "\n";
    std::cout << "*p_number : " << *p_number << "  " << p_number  << "\n";


    std::cout << "\n\n\n";

    int number2 = 40;
    int* const p_number2 = &number2 ;
    std::cout << "number    : " << number2  << "  " << &number2 << "\n";
    std::cout << "*p_number : " << *p_number2 << "  " << p_number2  << "\n";
    *p_number2 = *p_number2 + 1 ; //u can change value
                             //but u cant change memory address
    std::cout << "number    : " << number2  << "  " << &number2 << "\n";
    std::cout << "*p_number : " << *p_number2 << "  " << p_number2  << "\n";

    int number3 = 40;
    const int* const p_number3 = &number3 ;
}