#include <iostream>
#include <concepts>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept Multiplible = requires(T a, T b){
    a*b;
};


template <typename T>
concept Incrementable = requires(T a){
    a++;
    a+=1;
    ++a;
};


template <typename T>
void my_print(T a) requires Incrementable<T>{
    std::cout << a  << std::endl ;
}


template <typename T>
T add(T a, T b) requires MyIntegral<T>{
    return a+b;
}


template <typename T>
requires std::integral<T> || std::floating_point<T>
T add2(T a, T b){
    return a+b;
}
 

template <typename T>
T multiply(T a, T b) requires Multiplible<T>{
    return a*b;
}


template <typename T>
requires Multiplible<T>
T multiply2(T a, T b){
    return a*b;
}


template <Multiplible T>
T multiply3(T a, T b){
    return a*b;
}


int main(){
    my_print("1231");
    std::cout << add(123,123);
    //std::cout << my_print("213"); // -> error
    std::cout << multiply(123,12);
}



