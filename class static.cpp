#include <vector>
#include <iostream>

class Math{
    public:
        template <typename T=int>
        static std::vector<T> get_factors(T number){
            std::vector<T> factors;
            for (T no=1; no<=number; no++){
                if (number%no==0){
                    factors.push_back(no);
                }
            }
            return factors;
        }
} ;



int main(){
    std::vector<int> factors;

    for (int fact:Math::get_factors(1000)){
        std::cout << fact << ", ";
    }
}