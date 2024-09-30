#include <iostream>
 
using std::cout ;
using std::cin ;

int main(){
    int age ;
    age = 1 ;

    switch (age){
        case 1:
            std::cout << "Age is 1\n" ;
            break ;
            // while if can be use
        case 3:
            std::cout << "Age is 3\n" ;
            break;
        case 6:
        case 7:
            std::cout << "Age is 6 or 7\n" ;
            break ;
        default:
            break;
    }

    ////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////
    enum season{summer ,fall ,winter};
    season now = winter ;
    switch (now){
        case summer :
            std::cout << "summer" ;
            break ;
        case fall :
            std::cout << "fall" ;
            break ;
        case winter :
            std::cout << "winter" ;
            break ;
        default :
            std::cout << "default" ;
            break ;
    }


    /* C++11 Requred  
    enum class Season{summer ,fall ,winter};
    Season now = Season::winter ;
    switch (now){
        case Season::summer :
            std::cout << "summer" ;
            break ;
        case Season::fall :
            std::cout << "fall" ;
            break ;
        case Season::winter :
            std::cout << "winter" ;
            break ;
    }
    */


}
    