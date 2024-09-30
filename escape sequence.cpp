#include <iostream>

using std::cout ;
using std::endl ;

int main(){
    cout << "Hello\tWorld" << endl ;// -> Hello   World
    
    cout << "Hello worldd\b" <<  " " << endl; // -> Hello World

    cout << "Hello\a World" << endl ; // ->  get beep sound


    cout << "Hello\0 World" << endl ; // -> Hello

    cout << "Hello \"World\" " << endl ; // -> Hello "World"
    
    
    system("pause") ;
}