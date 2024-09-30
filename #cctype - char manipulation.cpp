#include <iostream>
#include <cctype>

int main()
{
    // isalnnum 
    std::cout << std::isalnum('A') << "\n"; // -> 1
    std::cout << std::isalnum('E') << "\n"; // -> 1
    std::cout << std::isalnum('b') << "\n"; // -> 2
    std::cout << std::isalnum('c') << "\n"; // -> 2
    std::cout << std::isalnum('1') << "\n"; // -> 4
    std::cout << std::isalnum('/') << "\n\n\n"; // -> 0


    // isalnnum 
    std::cout << std::isalpha('A') << "\n"; // -> 1
    std::cout << std::isalpha('E') << "\n"; // -> 1
    std::cout << std::isalpha('b') << "\n"; // -> 2
    std::cout << std::isalpha('c') << "\n"; // -> 2
    std::cout << std::isalpha('1') << "\n"; // -> 0
    std::cout << std::isalpha('/') << "\n\n\n"; // -> 0



    // isablank
    std::cout << std::isblank(' ') << "\n"; // -> 1
    std::cout << std::isblank('1') << "\n\n\n"; // -> 0


    // islower
    std::cout << std::islower('a') << "\n"; // -> 2
    std::cout << std::islower('A') << "\n"; // -> 0
    std::cout << std::islower('1') << "\n"; // -> 0
    std::cout << std::islower('!') << "\n\n\n"; // -> 0

    // isupper
    std::cout << std::isupper('A') << "\n"; // -> 1
    std::cout << std::isupper('a') << "\n"; // -> 0
    std::cout << std::isupper('1') << "\n"; // -> 0
    std::cout << std::isupper('!') << "\n\n\n"; // -> 0

    // isdigit
    std::cout << std::isdigit('1') << "\n"; // -> 1
    std::cout << std::isdigit('0') << "\n"; // -> 1
    std::cout << std::isdigit('A') << "\n"; // -> 0
    std::cout << std::isdigit('a') << "\n\n\n"; // -> 0


    // toupper
    std::cout << (char)std::toupper('A') << "\n"; // -> A
    std::cout << (char)std::toupper('a') << "\n"; // -> A
    std::cout << (char)std::toupper('!') << "\n"; // -> !
    std::cout << (char)std::toupper('1') << "\n\n\n"; // -> 1

    // tolower
    std::cout << (char)std::tolower('A') << "\n"; // -> a
    std::cout << (char)std::tolower('a') << "\n"; // -> a
    std::cout << (char)std::tolower('!') << "\n"; // -> !
    std::cout << (char)std::tolower('1') << "\n\n\n"; // -> 1

}