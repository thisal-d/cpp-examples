#include <iostream>
#include <cstring>


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

}