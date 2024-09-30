#include <iostream>
#include <array>
#include <vector>


void print(std::vector<int> value){
    for (int d:value){
        std::cout << d << " ,"; // 4 ,8 ,12 ,16 ,20 ,
    }
    std::cout << "\n" ;
}


int main(){
    int data[] = {2, 4, 6, 8 ,10} ;
    for (int d:data){
        std::cout << d << " ,";
    }
    std::cout << "\n" ;


    std::array<int,10> data2 = {3, 6, 9, 12, 15} ;
    for (int d:data2){
        std::cout << d << " ,"; // 3 ,6 ,9 ,12 ,15 ,0 ,0 ,0 ,0 ,0 ,
    }
    std::cout << "\n" ;

    std::vector<int> data3 = {4,8,12,16,20} ;
    for (int d:data3){
        std::cout << d << " ,"; // 4 ,8 ,12 ,16 ,20 ,
    }
    std::cout << "\n" ;
    print(data3) ;// 4 ,8 ,12 ,16 ,20 ,
}