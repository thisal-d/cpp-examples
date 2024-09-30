#include <iostream>

using namespace std ;

int main(){
    string str ;
    cin >> str ; //get string without spaces
    std::cout << str ; 

    string str2 ;
    getline(cin ,str2) ; //get string with spaces
    std::cout << str2 ; 
}