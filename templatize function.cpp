#include <iostream>
#include <vector>
#include <cstring>



template<class T>
void swap_(T &a ,T &b){
    T temp = a ;
    a = b;
    b = temp ;
}
 
template<typename T>
void swap_t(T &a ,T &b){
    T temp = a ;
    a = b;
    b = temp ;
}

template<typename T>
T sum(T a ,T b){
    return a + b;
}

template<typename T>
T maximum(T a, T b){
    return a > b ? a:b;
}
//template specilization to const char*
template<>
const char* maximum<const char*>(const char* a, const char* b){
    return (std::strcmp(a,b)) > 0 ? a:b;
}

int main(){
    std::string name = "Kamal" ;
    std::string name2  = "Amal" ;

          // this is the type
    swap_t<std::string>(name,name2); //u can call like this too
    swap_(name ,name2);
    std::cout << name << " " << name2 << "\n" ;


    int x = 10 ;
    int y = 20 ;
    swap_(x,y) ;
    std::cout << x << " " << y ;

    std::cout << sum(10,20) << std::endl ;
    std::string str1 = "10" ;
    std::string str2 = "20" ;
    std::cout << sum(str1,str2) << std::endl ;

    double total_ = sum<double>(x,12.123); // force to be double
    std::cout << "total_ : " << total_;
}