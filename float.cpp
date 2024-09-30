#include <iostream>
#include <float.h>
#include <cmath>
#include <iomanip>

using std::cout ;
using std::endl ;

int main(){
    double number1 = NAN ; // -> nan
    double number2 = INFINITY ; // -> inf
    double number3 = -INFINITY ; // -> inf

    float a = 10.0/3  ;
    double b = a*1000000000000 ;
    long double c = 1.053324556*100000000000;

    std::cout << "-------------------------------------------" << std::endl ; 
    std::cout << std::setprecision(20 ) << std::endl ;
    std::cout << "-------------------------------------------" << std::endl ;

    cout << a << endl ; // -> 3.33333
    cout << b << endl ; // -> 3.33333e+011
    cout << std::fixed << b << endl ; //-> 333333331968.000000


    cout << "float          ->   " ;
    cout << "Size:" << sizeof(float) << "Bytes  "  ;
    cout << "Trust:" << FLT_DIG << " digit" << endl ;
    cout << "Min:" << FLT_MIN <<  "  " ;
    cout << "              Max:" << FLT_MAX ;
    cout << std::endl ;

    cout << "double         ->   " ;
    cout << "Size:" << sizeof(double) << "Bytes  "  ;
    cout << "Trust:" << DBL_DIG << " digit" << endl ;
    cout << "Min:" << DBL_MIN <<  "  " ;
    cout << "         Max:" << DBL_MAX ;
    cout << std::endl ;

    cout << "long double    ->   " ;
    cout << "Size:" << sizeof(long double) << "Bytes  "  ;
    cout << "Trust:" << LDBL_DIG << " digit" << endl ;
    cout << "Min:" << LDBL_MIN<<  "  " ;
    cout << "         Max:" << LDBL_MAX ;
    cout << std::endl ;

    long double y =  -9999999999999999673560075006595519222746403606649979913266024618633003221909504.999999999999;
    cout << y;

    system("pause") ;
    
}