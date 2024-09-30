#include <iostream>
int tr(){
    return 10 ;
}

int tr(int x){
    return x*2;   
}

void add_ten(int & x){
    x = x+10 ;
}

void swap(int & x, int & y){
    int temp_x = x ;
    x = y ;
    y = temp_x ; 
}

void default_agr(int x ,int y=10){
    // y default 10
}



int main(){
    int x = tr() ;
    add_ten(x) ; // x=20
    auto a = " ";

    int y = tr(10) ;
    std::cout << y ;
}