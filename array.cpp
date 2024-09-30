#include <iostream>
#include <limits>

void printArray(int nums[],int size){
    std::cout << "{" ;
    for (int i=0 ;i<size-1 ;i++){
        std::cout << nums[i] << " ," ;
    }
    std::cout << nums[size-1] << "}" << "\n";
}

void change_array(int nums[],int size){
    for (int i=0 ;i<size ;i++){
        nums[i] = nums[i] + 1 ;
    }
}

void unchangable_(const int nums[],int size){
    for (int i=0 ;i<size ;i++){
        //nums[i] = nums[i] + 1 ;
    }
}


 
int main(){
    int numbers[5] = {1,2,3,4,5} ;
    std::cout << numbers << std::endl ;// -> memory pointer

    
    numbers[10] = 123123123;// change memory[10] value :) //could be cause to crash
    std::cout << "Garbage Val : " << numbers[10]  << std::endl ; // max index = 4 garbage value or program crash 
    printArray(numbers ,5) ;
    change_array(numbers ,5) ;
    printArray(numbers ,5) ;

    //get size
    //get size of array

    int size__ = std::size(numbers) ;  //c++17 -> 5 size is 5
    std::cout << "size : " << size__ << "\n\n";
    int size_  = sizeof(numbers) / sizeof(numbers[0]) ;
    printArray(numbers ,size_) ;

    int size ;
    std::cout << "Enter Array Size : " ;
    std::cin >> size ;
    int values[size] ;
    for (int i=0 ;i<size ;i++){
        if (std::cin >> values[i]){

        }
        else{
            std::cin.clear() ;
            std::cin.ignore(1000,'\n') ;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n') ;
            break;
        }
    
    }
    printArray(values ,size) ;
    
    
    
}