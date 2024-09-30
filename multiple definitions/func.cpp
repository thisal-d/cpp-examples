#include <string>
#include <iostream>
double add(double a, double b);

class Person{
    public:
        int age =40;
        std::string name = "Amal";
        Person(std::string name){
            this->name = name;
        }
};
double add(double a, double b){
    return a+b;
}

int global_count = 0;

int main(){
    std::cout << "Hello World..!";

}