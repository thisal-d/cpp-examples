#include <iostream>
#include <vector>

class User{
    public :
        std::string first_name ;
        std::string last_name ;
        int age ;
        virtual void output(){
            std::cout << "User Created...! " << "\n";
        }

        std::string get_full_name(){
            return first_name + " " + last_name ;
        }
} ;

class Student : public User{
    public :
        std::vector<std::string> learing_subject ;
        void output(){
            std::cout << "Student Created...!" << "\n" ;
        }
        Student(std::string first_name ,std::string last_name){
            this->first_name = first_name ;
            this->last_name = last_name ;
            std::cout << "Student Created...! " << "\n" ;
        }
} ;

class Teacher : public User {
    public : 
        std::vector<std::string> teaching_subject ;
        void output(){
            std::cout << "Teacher Created...!" << "\n" ;
        }
        Teacher(std::string first_name ,std::string last_name){
            this->first_name = first_name ;
            this->last_name = last_name ;
            std::cout << "Teacher Created...! " << "\n";
        }
} ;

void output(User &user){
    user.output() ;
}

  
int main(){
    Teacher teacher1("Amal","Kamal") ;
    Student student1("Namal","Kamal") ;
    
    std::cout << teacher1.get_full_name() ;
    User user = teacher1 ;
    user.output() ;
    output(teacher1) ;
    return 0 ;
}