#include <iostream>
#include <vector>


class User{
    public : 
        std::string name ;
        std::string email ;

        User(std::string name_, std::string email_ ,std::string password_){
            name = name_ ;
            email = email_ ;
            password = password_ ;
        }

        std::string get_password(){
            return password ;
        }

        void set_password(std::string password_){
            password = password_ ;
        }
    private:
        std::string password ;
    
} ;


void print(std::vector<User> vector_){
    for (int i=0; i<vector_.size()-1; i++){
        std::cout << "NAME : " << vector_[i].name << "    " ; 
        std::cout << "EMAIL : " << vector_[i].email  << "    " ;
        std::cout << "PASSWORD : " << vector_[i].get_password() << "\n" ;
    }
    std::cout << "NAME : " << vector_[vector_.size()-1].name  << "    "; 
    std::cout << "EMAIL : " << vector_[vector_.size()-1].email  << "    " ;
    std::cout << "PASSWORD : " << vector_[vector_.size()-1].get_password() ;
    std::cout << "\n"; 
}

int main(){
    std::vector<User> users; 
    std::string name ;
    std::string email ;
    std::string password ;

    for (int i=0; i<2; i++){
        std::cout << "Enter UserName ,Email & Password : " ;
        std::cin >> name ;
        std::cin >> email ;
        std::cin >> password ;
        users.push_back(User(name ,email ,password)) ;
    }
    print(users) ;
}