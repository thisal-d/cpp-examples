#include <iostream>
#include <limits>


int main(){
    std::cout << "int : " << std::numeric_limits<int>::max() << "\n";
    std::cout << "unsigned int : "  << std::numeric_limits<unsigned int>::max() << "\n";
    std::cout << "long int : "  << std::numeric_limits<long int>::max() << "\n" ;
    std::cout << "unsigned long int : "  << std::numeric_limits<unsigned long int>::max() << "\n";
    std::cout << "long long int : "  << std::numeric_limits<long long int>::max() << "\n" ;
    std::cout << "unsigned long long int : "  << std::numeric_limits<unsigned long long int>::max()  << "\n";
    std::cout << "double : "  << std::numeric_limits<double>::max() << "\n" ;
    std::cout << "long double : "  << std::numeric_limits<long double>::max() << "\n" ;  
    std::cout << "float : "  << std::numeric_limits<float>::max() << "\n" << "\n" ;

    //u can use lowest too :)
    std::cout << "int : " << std::numeric_limits<int>::min() << "\n";
    std::cout << "unsigned int : " << std::numeric_limits<unsigned int>::min() << "\n";
    std::cout << "long int : " << std::numeric_limits<long int>::min() << "\n" ;
    std::cout << "unsigned long int : " << std::numeric_limits<unsigned long int>::min() << "\n";
    std::cout << "long long int : " << std::numeric_limits<long long int>::max() << "\n" ;
    std::cout << "unsigned long long int : " << std::numeric_limits<unsigned long long int>::min()  << "\n";
    std::cout << "double : " << std::numeric_limits<double>::min() << "\n" ;
    std::cout << "long double : " << std::numeric_limits<long double>::min() << "\n" ;  
    std::cout << "float : " << std::numeric_limits<float>::min() << "\n" << "\n" ;

}