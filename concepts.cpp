#include <iostream>
#include <concepts>
//old v
template <typename T>
void print_number(T n){
    static_assert(std::is_integral<T>::value, "Must pass in an intergral argument...!");
    std::cout << "n : " << n << std::endl;
}


// syntax 1
template <typename T>
requires std::integral<T>
void console(T n){
    std::cout << n << std::endl ;
}


// syntaxt 2
template <typename T>
requires std::is_integral_v<T> // using a type trait
void console2(T a){
    std::cout << a << std::endl ;
}

// syntax 3
void console3(std::integral auto a){
    std::cout << a << std::endl ;
}


// syntax 4
// using a type trait
template <typename T>
void console4(T a)requires std::is_integral_v<T>{
    std::cout << a << std::endl ;
}

// syntax 5
template <typename T>
void console5(T n)requires std::integral<T>{
    std::cout << n << std::endl ;
}

// syntax 5
template <std::integral T>
void console6(T n) {
    std::cout << n << std::endl ;
}

// syntax 5
template <std::integral T>
T multiply(T n) {
    return n*n ;
}


std::integral auto add(std::integral auto a){
    return a+a;
}


int main(){
    //print_number(123123.123) -> error 
    print_number(123) ;
    console(123);
    console3(123);
    console6(121233);
}