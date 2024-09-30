#include <iostream>
#include <vector>

void change(int & value){
    value = 0 ;
}


void changeMemory(int * address){
    *address = 1000    ;
}


int main(){
    int number = 10 ;
    std::cout << "number : " << number << "\n";

    change(number) ; // number changed  -> 0
    std::cout << number << "\n";

    //get memory pointer
    int* number_pointer = & number ;
    changeMemory(number_pointer) ;  // number changed  -> 1000
    std::cout << number << std::endl ;
 
    int* int_pointer = nullptr ;//null pointer
    int int_value = 100 ;
    int_pointer = &int_value ;
    
    int* int_pointer2 ;
    int int_value2 = 200 ;
    int_pointer2 = &int_value2 ;


    int_value = *int_pointer2 ; //  int_pointer2 values assoign to int_value
    *int_pointer2 = 1500 ; // int_pointer2 value set to 1500


    std::cout << "int_value : " << int_value << std::endl ;
    std::cout << "int_value2 : " << int_value2  << std::endl ;


    int numbers[5] = {1,2500,3,4,5};
    int* numbers_p[5] = {&numbers[0],&numbers[1],&numbers[2],&numbers[3],&numbers[4]};

    for (int i=0; i<5; i++){
        std::cout << "numbers[" << i << "]" << "  :  " << numbers_p[i] << "\n" ;
    }


    ////////////////////////////////////////////////
    const char * char_array = {"Hello World"};
    //char * char_array = {'H','e','l','l','o','W','o','r','l','d'};
    std::cout << char_array[10] << "\n" ; // 'd'
    std::cout << char_array << "\n" ; 
    std::cout << *char_array ; //-> 'H'

}