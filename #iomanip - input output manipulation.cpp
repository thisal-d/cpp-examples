#include <iostream>
#include <iomanip>

int main(){
    std::cout << std::flush << "Enter Name : "  << std::endl ;


    std::cout << std::right ;
    std::cout << std::setw(10) << "Amal" << std::endl ;
    std::cout << std::setw(10) << "Pasindu" << std::endl ;
    std::cout << std::setw(10) << "Nirosha" << std::endl ;
    std::cout << std::setw(10) << "Kamal" << std::endl ;
    /*
       Amal
    Pasindu
    Nirosha
      Kamal
    */

    std::cout << std::left ;
    std::cout << std::setw(10) << "Amal" << std::endl ;
    std::cout << std::setw(10) << "Pasindu" << std::endl ;
    std::cout << std::setw(10) << "Nirosha" << std::endl ;
    std::cout << std::setw(10) << "Kamal" << std::endl ;
    /*
    Amal
    Pasindu
    Nirosha
    Kamal
    */


    std::cout << std::left ;
    std::cout << std::setfill('-') ;
    std::cout << std::setw(10) << "Amal" << std::endl ;
    std::cout << std::setw(10) << "Pasindu" << std::endl ;
    std::cout << std::setw(10) << "Nirosha" << std::endl ;
    std::cout << std::setw(10) << "Kamal" << std::endl ;
    /*
    Amal------
    Pasindu---
    Nirosha---
    Kamal-----
    */

    std::cout << std::right ;
    std::cout << std::setw(15) << -123.123 << std::endl; // -123.123
    std::cout << std::internal ;
    std::cout << std::setw(15) << -123.123 << std::endl; // -     123.123


    //
    std::cout << std::boolalpha ;
    std::cout << true << std::endl ;     // true
    std::cout << std::noboolalpha ;
    std::cout << true  << std::endl ;    // 1


    std::cout << std::showpos ;
    std::cout << 546 << std::endl ; // +546 
    std::cout << std::internal <<  std::setw(6) << 546 << std::endl ; // +   546 
    std::cout << std::noshowpos ;
    std::cout << 546 << std::endl;  // 546


    std::cout << std::hex << 100  << std::endl ; // 64
    std::cout << std::oct << 100 << std::endl ; // 144

    std::cout << std::showbase ; //set displaying oct.hex
    std::cout << std::hex << 100  << std::endl ; // 0x64
    std::cout << std::oct << 100 << std::endl ; // 0144
    std::cout << std::noshowbase ;


    std::cout << std::showbase;
    std::cout << std::uppercase ;
    std::cout << std::hex << 100 << std::endl ; // 0X64
    std::cout << std::oct << 100 << std::endl ; // 0144
    std::cout << std::noshowbase ;


    std::cout << 1.34e10 << std::endl ; //1.34e10
    std::cout << std::fixed ;
    std::cout << 1.34e10 << std::endl; //13400000000.000000

    std::cout << std::scientific ;
    std::cout << 10123.15 << std::endl ; //1.012315e+04


    std::cout << std::setprecision(5) ; // limit floating poin ount
    std::cout << 10.555555555 << std::endl ; //-> 10.55555
    

}