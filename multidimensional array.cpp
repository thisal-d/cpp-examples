#include <iostream>
#include <vector>
#include <array>

int main(){
    //c array
    int grades[][3] = { 
                        {1, 2, 3},
                        {0, 5, 6},
                        {7, 8, 9}
                    } ; // same {1,2,3,4,5,6,7,8,9}
    grades[1][0] = 4;
    for (int i=0 ;i<3 ;i++){
        for (int number:grades[i]){
            std::cout << number << "," ;
        }
    }
    std::cout << std::endl ;




    //vector
    std::vector<std::vector<int>> numbers = {
                                                {1, 2, 3},
                                                {0, 5, 6},
                                                {47, 458, 459}
                                            } ;
    numbers[1][0] = 4;
    numbers[2] = {7,8,9} ;
    numbers.push_back({10,11,12}) ;
    for (std::vector<int> nums : numbers){
        for (int num : nums){
            std::cout << num << ",";
        }
    }
    std::cout << std::endl ;



    //templatized array
    std::array<std::array<int,3>,3> values = {1,2,3,4,5,6,7,8,9}  ;// not working  {{1, 2, 3},{4, 5, 6},{7, 8, 9},} ;
    values[0] = {1, 2, 3} ;
    for (std::array<int,3> nums : values){
        for (int num : nums){
            std::cout << num << ",";
        }
    }
    std::cout << std::endl ;


    // 3 Dimensional std::String Vector 
    std::vector<std::vector<std::vector<std::string>>> vector_vector_vector_str = {
                                                                {
                                                                    {"H" ,"E"} , {"L" ,"L"}
                                                                } ,
                                                                {
                                                                    {"O" ,"W"} , {"O" ,"R"}
                                                                } ,
                                                                {
                                                                    {"L" ,"D" ,"." ,"." ," "} , {"W" ,"E"}
                                                                } ,
                                                                {
                                                                    {"L" ,"L"} , {"C" ,"O"} , {"M" ,"E"} ,{"." ,"!"}
                                                                }
                                                              } ;

    for (std::vector<std::vector<std::string>> vector_vector_str : vector_vector_vector_str) {
        for (std::vector<std::string> vector_str : vector_vector_str){
            for (std::string str : vector_str){
                std::cout << str ;
            }
        }
    }
    
}