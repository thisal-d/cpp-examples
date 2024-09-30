#include <iostream>

std::string join(std::string &str1, std::string &str2){
    std::string str3 =  str1+str2;
    std::cout << "str1 pointer : " << &str1 << "\n";
    std::cout << "str2 pointer : " << &str2 << "\n";
    std::cout << "str3 pointer : " << &str3 << "\n";
    return str3;
}

int join(int &int1, int &int2){
    int int3 =  int1+int2;
    std::cout << "int1 pointer : " << &int1 << "\n";
    std::cout << "int2 pointer : " << &int2 << "\n";
    std::cout << "int3 pointer : " << &int3 << "\n";
    return int3;
}

int* join2(int &int1, int &int2){
    int int3 =  int1+int2;
    std::cout << "int1 pointer : " << &int1 << "\n";
    std::cout << "int2 pointer : " << &int2 << "\n";
    std::cout << "int3 pointer : " << &int3 << "\n";
    int *p_int3 = &int3;
    return p_int3;
}




int main(){
    std::string str1 = "1234";
    std::string str2 = "5678";
    std::string str3 = join(str1, str2);
    std::cout << "str1 pointer : " << &str1 << "\n";
    std::cout << "str2 pointer : " << &str2 << "\n";
    std::cout << "str3 pointer : " << &str3 << "\n\n\n\n";

    int int1 = 100;
    int int2 = 200;
    int int3 = join(int1, int2);
    std::cout << "int1 pointer : " << &int1 << "\n";
    std::cout << "int2 pointer : " << &int2 << "\n";
    std::cout << "int3 pointer : " << &int3 << "\n";


    int *int4;
    int4 = join2(int1, int2);
    std::cout << *int4;
}