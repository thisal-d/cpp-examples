#include <iostream>
#include <string>
#include <vector>


class Person{
    private:
        std::string private_ = "";

    protected:
        std::string f_name;
        std::string l_name;
        std::string dob;
        int age;

    public:
        // Returns the full name by concatenating the first name and last name
        std::string get_name() const {
            return f_name + " " + l_name;
        }
       
};


class Engineer : public Person{
    public:
    //u can change f name and l name use derived class because its not private its protected
        void set_name(std::string f_name,std::string l_name){
            this->f_name = f_name;
            this->l_name = l_name;
        }

};


class Doctor : public Person{
    public:
        void set_name(std::string f_name,std::string l_name){
            this->f_name = f_name;
            this->l_name = l_name;
        }
};


class Teacher : protected Person{
    //* everything public and protected in base class will be protected
    // private will be private
};

class Student : private Person{
    //* everything public and protected in base class will be private
    protected:
    //convert private to protected 
        using Person::f_name;
        using Person::l_name;
        using Person::dob;
};


int main(){
    Engineer eng1;
    Doctor doc1;
    Person per1;
  
    eng1.set_name("ABCD","EFGH");
    std::cout << eng1.get_name();

}