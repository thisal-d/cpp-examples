#include <iostream>
#include <string>
#include <vector>


template<typename T>
std::string type(T value){
    if (std::is_same<T,int>::value){
        return "int";
    }
    else if(std::is_same<T,char>::value){
        return "char";
    }
    else if(std::is_same<T,std::string>::value){
        return "std::string";
    }
    else if(std::is_same<T,std::vector<int>>::value){
        return "std::vector<int>";
    }
}


template<typename T>
std::string type_2(T value){
    if (typeid(int) == typeid(T)){
        return "int";
    }
    else if(typeid(T)==typeid(char)){
        return "char";
    }
    else if(typeid(T)==typeid(std::string)){
        return "std::string";
    }
    else if(typeid(T)==typeid(std::vector<int>)){
        return "std::vector<int>";
    }
    else{
        return "unknown";
    }
}


template<typename T>
std::string type_3(T value){
    if constexpr (std::is_same_v<T,int>){
        return "int";
    }
    else if constexpr(std::is_same_v<T,char>){
        return "char";
    }
    else if constexpr(std::is_same_v<T,std::string>){
        return "std::string";
    }
    else if constexpr(std::is_same_v<T,std::vector<int>>){
        return "std::vector<int>";
    }
    else{
        return "unknown";
    }
}



int main(){
    int num = 10;
    std::string str = "!23";
    char char1 = 'c';
    std::vector<int> nums {1,2,3,4,5};

    std::cout << type(num) << "\n";
    std::cout << type(str) << "\n";
    std::cout << type(char1) << "\n";
    std::cout << type(nums)  << "\n\n\n";


    std::cout << type_2(num) << "\n";
    std::cout << type_2(str) << "\n";
    std::cout << type_2(char1) << "\n";
    std::cout << type_2(nums) << "\n\n\n";

    std::cout << type_3(num) << "\n";
    std::cout << type_3(str) << "\n";
    std::cout << type_3(char1) << "\n";
    std::cout << type_3(nums) << "\n";

}