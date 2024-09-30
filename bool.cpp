#include <iostream>
using std::cout ;

int main(){
    cout << std::boolalpha << true << std::endl ; // -> true

    if (true) cout << "true" ; // -> tru


    bool TRUE = 1 ;
    bool FALSE = 0 ;
    std::cout << std::endl << std::endl ;
    std::cout << std::boolalpha << TRUE  << std::endl ;
    std::cout << std::boolalpha << FALSE << std::endl ;


    std::cout << (bool)true+(bool)100 << std::endl << std::endl << std::endl ; // -> 2


    TRUE = true ;
    FALSE = false ;
    std::cout << "&& - AND" << "\n" ;
    std::cout << "true && false" <<  " -> "  <<  (TRUE && FALSE) << std::endl ;
    std::cout << "true && true"  <<  " -> "  << (TRUE && TRUE) << std::endl ;
    std::cout << "false && false" <<  " -> "  <<  (FALSE && FALSE) << std::endl << "\n ";

    TRUE = true ;
    FALSE = false ;
    std::cout << "|| - OR" << "\n" ;
    std::cout << "true || false" <<  " -> "  <<  (TRUE || FALSE) << std::endl ;
    std::cout << "true || true"  <<  " -> "  << (TRUE || TRUE) << std::endl ;
    std::cout << "false || false" <<  " -> "  <<  (FALSE || FALSE) << std::endl << "\n ";

    TRUE = true ;
    FALSE = false ;
    std::cout << "! - NOT" << "\n" ;
    std::cout << "!true" <<  " -> " << !TRUE << std::endl ;
    std::cout << "!false" <<  " -> " << !FALSE << std::endl ;
    

    std::cout << true + true << std::endl ; // -> 2
    while(1){
        std::cout << "1 is true" << std::endl ;
        break ;
    }

    while(true+true){
        std::cout << "true + true" << std::endl ;
        break ;
    }

    while (1+1){
        std::cout << "1 + 1" << std::endl ;
        break ;
    }

    while(0+0){
        std::cout << "0 + 0" << std::endl ;
        break ;
    }

    while(99999){
        std::cout << "999999" << std::endl ;
        break ;
    }

    std::cout << std::boolalpha << (bool)9999999999 << std::endl ;
}