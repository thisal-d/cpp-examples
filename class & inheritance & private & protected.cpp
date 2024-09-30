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

        Person(std::string f_name, std::string l_name){
            this->f_name = f_name;
            this->l_name = l_name;
        }

        Person(){

        }
       
};


class Engineer : public Person{
    public:
    //u can change f name and l name use derived class because its not private its protected
        void set_name(std::string f_name,std::string l_name){
            this->f_name = f_name;
            this->l_name = l_name;
        }

        /*
        you cant access orivate in inherite classes
        std::string get_private(){
            return this->private_ ;
        }*/

};


class Doctor : public Person{
    public:
        std::string get_name() const {
            return f_name + " " + l_name;
        }

        void set_name(std::string f_name,std::string l_name){
            this->f_name = f_name;
            this->l_name = l_name;
        }

        Doctor(std::string f_name, std::string l_name){
            this->f_name = f_name;
            this->l_name = l_name;
        }
        Doctor(){
            
        }
};


class Teacher : protected Person{
    //* everything public and protected in base class will be protected
    // private will be private
};

class Student : private Person{
    //* everything public and protected in base class will be private
    //you can access protected and public 
    public:
        std::string get_name_public(){
            return get_name();
            return this->f_name;
        }
};

class Student_in : protected Student{
    
} ;



int main(){
    Engineer eng1;
    Doctor doc1;
    Person per1;
  
    eng1.set_name("ABCD","EFGH");
    std::cout << eng1.get_name();

    Doctor student = Doctor((std::string)"!23",(std::string)"123");
    //u cant access pulbic method , because inherited as protected
    //std::cout << student.get_name_public();

}