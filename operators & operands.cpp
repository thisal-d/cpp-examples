#include <iostream>
using std::cout ;

int main(){
    5 + 5 ; // + is operator  5 is operand
    int num =  4 << 2 ; // 4 * 2**2
    // 16 
    num = 4 >> 2 ; // 4 / 2**2
    // 1

    num = 1&0 ; //bitwise and
    // 0

    num = 1&1 ;
    // 1

    num = 1|0 ; //bitwise or
    // 1

    num = 1^0 ; //bitwise xor
    // 1

    double x,y ;
    y = 50 ;
    x = y = 100 ;
    //x=100 
    //y= 50

    (x=y) = 200 ;
    cout << x <<" : " << y;
    //x=200 
    //y=100


    int value = 5 ;
    cout << std::endl ;
    cout << value++ << std::endl; // -> 5
    cout << value << std::endl ; // 6

    value = 5 ;
    cout << ++value << std::endl ; // -> 6
    cout << value++ << std::endl ; // -> 6
    cout << value++ << std::endl ; // -> 7
    cout << ++value << std::endl ; // -> 9


    cout << (value = value-1) << std::endl ; // 8
    cout << value-1 << std::endl ; // 7
    cout << value << std::endl ; // 8

    cout << (value*=2) << std::endl ; // 16
    cout << (value/=2) << std::endl ; // 8 
    cout << (value=value*2) << std::endl ; // 16 
    cout << (value=value/2) << std::endl ; // 8
    cout << value << std::endl ;  // 8
    
}