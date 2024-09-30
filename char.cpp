#include <iostream>
using std::cout ;
using std::endl ;


int main(){

    /*
    char : ! -> 33
    char : " -> 34
    char : # -> 35
    char : $ -> 36
    char : % -> 37
    char : & -> 38
    char : ' -> 39
    char : ( -> 40
    char : ) -> 41
    char : * -> 42
    char : + -> 43
    char : , -> 44
    char : - -> 45
    char : . -> 46
    char : / -> 47
    char : 0 -> 48
    char : 1 -> 49
    char : 2 -> 50
    char : 3 -> 51
    char : 4 -> 52
    char : 5 -> 53
    char : 6 -> 54
    char : 7 -> 55
    char : 8 -> 56
    char : 9 -> 57
    char : : -> 58
    char : ; -> 59
    char : < -> 60
    char : = -> 61
    char : > -> 62
    char : ? -> 63
    char : @ -> 64
    char : A -> 65
    char : B -> 66
    char : C -> 67
    char : D -> 68
    char : E -> 69
    char : F -> 70
    char : G -> 71
    char : H -> 72
    char : I -> 73
    char : J -> 74
    char : K -> 75
    char : L -> 76
    char : M -> 77
    char : N -> 78
    char : O -> 79
    char : P -> 80
    char : Q -> 81
    char : R -> 82
    char : w -> 119
    char : x -> 120
    char : y -> 121
    char : z -> 122
    char : { -> 123
    char : | -> 124
    char : } -> 125
    char : ~ -> 126
    */

    unsigned char x = '0' ;

    cout << int(x) << endl ; // '0' -> 48
    cout << char(int(x)) << endl ; // '0' -> 48 -> '0'

    int y = int(x) + 1 ; // 48 + 1 = 49
    cout << char(y) << endl ; // 49 -> '1' ;

    cout << int('0') + int('0') << endl ; //'0' -> 48  48+48 -> 96 
    cout << x + 48 << endl ; //'0' -> 48  48+48 -> 96



    char value = 'A' ;
    std::cout <<  "value : " << value << endl  ;
    std::cout << "value(int) : " << (int)value << endl ;
    std::cout << "value(int) : " << static_cast<int>(value) << endl  ;
    std::cout << std::endl << std::endl ;
    auto valueINT  =  static_cast<int>(value) ;
    std::cout << "valueINT : " << valueINT  << endl ;
    std::cout << "valueINT(char) : " << (char)valueINT  << endl ;
    std::cout << "valueINT(char) : " << static_cast<char>(valueINT)  << endl ;

}