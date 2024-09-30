#include <iostream>
#include <vector>

class Car{
    public:
        std::string model="Model";//32 Bytes
        int doors = 4;//4 Bytes
        int made = 1991;//4 Bytes
        int *doors_p = new int(4);//8 Bytes
        int *made_p =  new int(4);//8 Bytes
        //total size of class -> 56 Bytes

    /*~Car(){
        std::cout << "Destructor called\n";
    }*/
};

int main(){
    
    std::cout << "sizeof(int)         : " << sizeof(int) << "\n";
    std::cout << "sizeof(std::string) : " << sizeof(std::string) << "\n";
    std::cout << "sizeof(*int)        : " << sizeof(int*) << "\n";

    std::cout << "sizeof(Car)         : " << sizeof(Car) << std::endl;
    std::vector<Car> cars;
    std::cout << "sizeof(std::vector<Car>)         : " << sizeof(std::vector<Car>) << std::endl;
    for (size_t i=0; i<84365429; i++){
        Car car;
        cars.push_back(car);
    }

}