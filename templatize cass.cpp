#include <iostream>

template <class Type>
class Pair{
    public:
        Type first, second;
        Pair(Type first, Type second){
            this->first = first;
            this->second = second;
        }
};


int main(){
    Pair pair = Pair<int>(100, 100);
    std::cout << pair.first;
    std::cout << pair.second;
}
