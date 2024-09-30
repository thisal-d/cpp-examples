#include <iostream>
#include <vector>
#include <cstring>

using std::cout ;
using std::endl ;

#define name "amal" // const

int main(){
    const int num = 123 ; // const 
    int const number = 123213;
    const std::string name2 = "Amal" ; // const
    enum {num2 = 100 } ;
    cout << num2 << "\n"  ;

    const int nums[10] = {12,12,21,321};
    const std::string x = "12313";
    //x[1] = '1'; cant assign


    const std::vector<int> nums2 = {1,2,3,4,5,6};
    //nums2.push_back(10) ; cant push
    //nums2.pop_back(); cant pop



    const int numbers[] =  {1,2,3,4,5} ;

    const char *string = "this is a constant string";
    std::cout << string[1] << std::endl; //-> h
    //string[1] = 'c' ; constant :/  u cant change
    
    std::cout << std::strlen(string) << std::endl; //25
    string ++;
    std::cout << string << std::endl; //-> his is a constant char
    std::cout << std::strlen(string) << std::endl; //24

    const char* const string2 = "this is a constant pointer with constant string";
    //string2 ++ ; -> cant ++
    //string2[0] ; -> cant assing change ;


}