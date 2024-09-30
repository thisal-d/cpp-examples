#include <iostream>


int main(){
    srand(time(NULL)) ;
    int x = rand()%10;
    std::cout << x << "\n";


    std::cout << time(NULL) ;
}