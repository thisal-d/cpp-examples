#include <iostream>


int main()
{
    int value = 100;

    int& value_references = value ;

    std::cout << "value            : " << value << "     " << &value << "\n"; //->100
    std::cout << "value_references : " << value_references << "     " << &value_references  << "\n"; //->100


    value = value  + 100 ; 
    std::cout << "value            : " << value << "     " << &value << "\n"; //->200
    std::cout << "value_references : " << value_references << "     " << &value_references  << "\n"; //->200

    value_references = value_references + 100;
    std::cout << "value            : " << value << "     " << &value << "\n"; //->300
    std::cout << "value_references : " << value_references << "     " << &value_references  << "\n"; //->300

}