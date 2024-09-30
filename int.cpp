#include <iostream>


using std::cout ;

int main(){
    signed short int number1 ;
    signed int number2 ;
    signed long int number3 ;
    signed long long int number4 ;

    unsigned short int number5 ;
    unsigned int number6 ;
    unsigned long int number7 ;
    unsigned long long int number8 ;


    cout << std::endl << "Signed  " << std::endl << "---------" << std::endl ;

    cout << "short       ->   " ;
    cout << "size:" << sizeof(short) << "Bytes  "  ;
    cout << "Min:" << SHRT_MIN <<  "  " ;
    cout << "              Max:" << SHRT_MAX ;
    cout << std::endl ;

    cout << "int         ->   " ;
    cout << "size:" << sizeof(int) << "Bytes  "  ;
    cout << "Min:" << INT_MIN <<  "  " ;
    cout << "         Max:" << INT_MAX ;
    cout << std::endl ;

    cout << "long        ->   " ;
    cout << "size:" << sizeof(long) << "Bytes  "  ;
    cout << "Min:" << LONG_MIN <<  "  " ;
    cout << "         Max:" << LONG_MAX ;
    cout << std::endl ;

    cout << "long long   ->   " ;
    cout << "size:" << sizeof(long long) << "Bytes  "  ;
    cout << "Min:" << LONG_LONG_MIN <<  "  " ;
    cout << "Max:" << LONG_LONG_MAX << "  " ;
    cout << std::endl ;



    cout << std::endl << "Unsigned  " << std::endl << "---------" << std::endl ;

    cout << "unsigned short       ->   " ;
    cout << "size:" << sizeof(unsigned short) << "Bytes  "  ;
    cout << "Max:" << USHRT_MAX ;
    cout << std::endl ;

    cout << "unsigned int         ->   " ;
    cout << "size:" << sizeof(unsigned int) << "Bytes  "  ;
    cout << "Max:" << UINT_MAX ;
    cout << std::endl ;

    cout << "unsigned long        ->   " ;
    cout << "size:" << sizeof(unsigned long) << "Bytes  "  ;
    cout << "Max:" << ULONG_MAX ;
    cout << std::endl ;

    cout << "unsigned long long   ->   " ;
    cout << "size:" << sizeof(unsigned long long) << "Bytes  "  ;
    cout << "Max:" << ULONG_LONG_MAX ;
    cout << std::endl ;


}