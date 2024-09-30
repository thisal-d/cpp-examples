#include <iostream>
#include <string>



int main(){
    //string to int/float/double
    std::string str_num = "12345";
    std::cout << std::stoi(str_num) << "\n" ; //-> 12345
    std::cout << std::stol(str_num) << "\n" ; //-> 12345
    std::cout << std::stoll(str_num) << "\n" ; //-> 12345
    std::cout << std::stoul(str_num) << "\n" ; //-> 12345
    std::cout << std::stoull(str_num) << "\n" ; //-> 12345

    std::cout << std::stod(str_num) << "\n" ; //-> 12345
    std::cout << std::stold(str_num) << "\n" ; //-> 12345
    std::cout << std::stof(str_num) << "\n" ; //-> 12345

    str_num = "9878.456" ;
    std::cout << std::stod(str_num) << "\n" ; //-> 9878.46
    std::cout << std::stold(str_num) << "\n" ; //-> 9878.46
    std::cout << std::stof(str_num) << "\n" ; //-> 9878.46


    //int/float/double to string
    int int_1 = 1321313;
    long int int_2= 324343243;
    long long int int_3= 25255223423112;
    unsigned int int_4= 12321312;
    unsigned long int int5= 12321321;
    unsigned long long int int_6 = 12312312321321;
    float float_1 = 1232323.342;
    double double_1 = 134124.23422423;
    long double double_2 = 12312.23423423423l;

    std::cout << std::to_string(int_1)  << std::endl;
    std::cout << std::to_string(int_2)  << std::endl;
    std::cout << std::to_string(int_3)  << std::endl;
    std::cout << std::to_string(int_4)  << std::endl;
    std::cout << std::to_string(int5)  << std::endl;
    std::cout << std::to_string(int_6)  << std::endl;
    std::cout << std::to_string(float_1)  << std::endl;
    std::cout << std::to_string(double_1)  << std::endl;
    std::cout << std::to_string(double_2)  << std::endl;
}