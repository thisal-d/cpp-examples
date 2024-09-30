#include <iostream>


int main()
{
    for (int i=0; i<10; i++){
        try{
            int *numbers = new int[1000000000000000];
        }
        catch(std::exception &ex){
            std::cout << ex.what() << "\n";
        }
    }
    
    for (int i=0; i<10; i++){
       int *numbers2 = new(std::nothrow) int[1000000000];
       //if memory allocating is successfully output will be -> "Memory Allocated..!"
        if (numbers2!=nullptr){
            std::cout << "Memory Allocated..!\n";
        }
        else{
            std::cout << "Memory Allocated failed\n";
        }
    }

}