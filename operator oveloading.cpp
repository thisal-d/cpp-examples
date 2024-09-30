#include <iostream>
#include <string>
#include <vector>

class Position{
    public:
        int x=10 ;
        int y=20 ;
        Position operator + (Position pos){
            Position new_pos ;
            new_pos.x = x + pos.x ;
            new_pos.y = y + pos.y ;
            return new_pos ;
        }

        bool operator == (Position pos){
            if (x==pos.x && y==pos.y){
                return true ;
            }
            return false ;
        }

        
} ;


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

        friend void output_status(User user) ;
        friend std::ostream& operator << (std::ostream& output,User user) ;

    private:
        std::string password ;
} ;

void output_status(User user){
    std::cout << user.password ;
}


std::ostream& operator << (std::ostream& output,User user){
    output << user.name << "    " << user.email << "  " << user.password ; //user.get_password() ; 
    return output ;
} ;

std::istream& operator >> (std::istream& input,User &user){
    input >> user.name >> user.email ;
    return input ;
}


std::ostream& operator << (std::ostream& output,std::vector<std::string>& vector_str){
    std::string out_str = "{" ;
    for (int i=0; i<vector_str.size()-1; i++){
        out_str.append(vector_str[i]) ;
        out_str.append(", ");
    }
    out_str.append(vector_str[vector_str.size()-1]) ;
    out_str.append("}") ;
    output << out_str ;
    return output ;
}

int main(){
    Position pos1, pos2 ;
    Position pos3 = pos1 + pos2 ;
    std::cout << pos3.x << " " << pos3.y << "\n" ;
    Position pos4 = pos1 + pos2 + pos3 ;
    std::cout << pos4.x << " " << pos4.y << "\n" ;
    
    if (pos1==pos2){
        std::cout << "They're Same positions..\n" ;
    }


    User user("Amal" , "amal@gmail.com" ,"^4*jH5#d@2");
    std::cout << user << std::endl << user << "\n" ;
    output_status(user) ;
    std::cout << "\n" ;



    std::vector<std::string> names = {"kamal","amal","nimal"} ;
    std::cout << names << "\n" ;

    return 0 ;
}