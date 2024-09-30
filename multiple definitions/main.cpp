#include <iostream>

double add(double a, double b);
double add(double a, double b);

//only ones
int global_count = 0;
// int global_count -> //Error

struct Point{
    double x = 100;
};

/*
struct Point{
    double x = 200;
};*/


class Person{
    public:
        int age =40;
        std::string name = "Amal";
        Person(std::string name){
            this->name = name;
        }
};

/*
class Person{
    public:
        int age =40;
        std::string name = "Amal";
        Person(std::string name){
            this->name = name;
        }
};*/


int main()
{

}



double add(double a, double b){
    return a+b;
}

//cant define twise
/*
double add(double a, double b){
    return a+b;
}*/
