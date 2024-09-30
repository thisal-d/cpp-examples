#include <iostream>
#include <concepts>


template <typename T>
concept size_is_lower4 = requires(T ){
    // simple requirement : only check the syntax
    sizeof(T) <= 4 ;
    requires sizeof(T) <= 4; // nested requirement : checks the if the expression is true
};


template <typename T>
concept is_convertable_to_int = requires(T a, T b){
    {a+b} noexcept -> std::convertible_to<int>;
    //compount requirement
    //check a+b is valid  syntax .doesont throw expetions and the result is convertable to int
};

template <typename T>
void print(T val)
requires size_is_lower4<T>{
    std::cout << val << std::endl;
}

int main(){
    double num = 123.123;
    //print(num); // -. error   print support only 4 bytes or lower
    int num2 = 123;
    print(num2);
}