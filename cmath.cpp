#include <cmath>
#include <iostream>

int main(){

    std::cout << "sqrt & power\n" << "--------------\n" ;
    //sqrt ,sqrtf ,sqrtl
    std::cout << sqrt(4.0) << std::endl ; // -> 2
    //pow ,powf ,powl

    std::cout << pow(2,3) << std::endl  ; // -> 8
    std::cout << powf(9,999) << std::endl ; // -> inf
    std::cout << pow(9,999) << std::endl  ; // -> inf
    std::cout << powl(9,999) << std::endl ; // -> 1.94208e+953

    std::cout << sqrt(-999) << std::endl ; // -> nan
    double number = NAN ; // -> nan
    double number2 = INFINITY ; // -> inf
    double number3 = -INFINITY ; // -> inf

    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    std::cout << "\nremainder & fmod\n" << "--------------\n" ;
    std::cout << 10%3  << std::endl ; // -> 1 
    // error -> std::cout << 10%3.5  << std::endl ; // -> 3 

    //remainder ,remainderf ,remainderl
    std::cout << remainder(10,3)   << std::endl ; // -> 1 
    std::cout << remainder(10,6)   << std::endl ; // -> -2 

    //fmod ,fmodf ,fmodl
    std::cout << fmod(10,3)   << std::endl ;       // -> 1
    std::cout << fmod(10,6)   << std::endl ;       // -> 4

    
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    std::cout << "\nfmax & fin" << "--------------\n" ;
    // fmax ,fmaxf ,fmaxl
    std::cout << fmax(1,3)  << std::endl ; // -> 3

    // fmix ,fmixf ,fmixl
    std::cout << fmin(0,3)  << std::endl ; // -> 0


    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    std::cout << "\nceil & floor & trunc & round\n" << "--------------\n" ;

    //ceil ,ceilf ,ceill
    std::cout << ceil(10.1)  << std::endl ; // -> next max integer -> 11
    std::cout << ceil(10.999)  << std::endl ; // -> 11
    //floor ,floorf ,floorl
    std::cout << floor(10.9)  << std::endl ; // -> remove float part -> 10
    std::cout << floor(6.5)  << std::endl ; // -> 6
    //trunc ,truncf ,truncl
    std::cout << trunc(10.2)  << std::endl ; // -> next min integer -> 10
    std::cout << trunc(10.9)  << std::endl ; // -> 10
    //round ,roundf ,roundl
    std::cout << round(0.9) << std::endl ; //rouund -> 1
    std::cout << round(10.4) << std::endl ; //10


    std::cout << ceil(-10.9) << std::endl ; // -> -10
    std::cout << trunc(-10.2) << std::endl ; // -> 10
    std::cout << trunc(-10.9) << std::endl ; // -> 10
    std::cout << floor(-10.3) << std::endl ; // -> -11

    std::cout << abs(500) << std::endl ; //-> 500
    std::cout << abs(-500) << std::endl ; // -> 500

    std::cout <<  nearbyint(123.4) << std::endl ; //-> 123 

    //e = 2.7182818284590452353602874713527
    std::cout << log(100) << std::endl ; // -> 4.60517    e**x = 100  = x
    std::cout << log10(1000) << std::endl ; //-> 3      10*x   = 1000 = 4
    std::cout << log10(0.1) << std::endl ; //-> -1   
    std::cout << log10(0.01) << std::endl ; // -> -2

    //e  = 2.71828
    std::cout << exp(10) << std::endl ;  // e * 10 = 22026.5
    std::cout << exp2(8) << std::endl ; // 2*8 = 256
}