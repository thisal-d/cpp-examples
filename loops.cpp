#include <iostream>

int main(){
    //while loop
    int i = 1 ; 
    while (i<10){
        //do something
        i++;
    }


    //do while loop
    int y = 1 ;
    do{
        //do somehing
        y++ ;
    }while(y<10) ;


    //for loop
    for (int i=1 ;i<10 ;i++){
        //do something
    }

    int i2 ;
    for (i2=0; i2<10 ;++i2){
        std::cout << i2 << ", ";
    }
    std::cout << i2 ;
    std::cout << std::endl ;

    size_t i3 ;
    for (i3=0 ; i3<10 ;i3++){
        std::cout << i3 << ", " ;
    }
    std::cout << i3 ;
    std::cout << std::endl ;
    std::cout << std::endl ;
    
    system("pause") ;
}