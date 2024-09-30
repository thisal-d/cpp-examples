#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
    double length ;
    double width ;
};

double area(double length, double width);

double area(double length);

double area(Rectangle rectangle);

class User{
    public : 
        std::string name ;
        std::string email ;

        User(std::string name_, std::string email_ ,std::string password_) ;
        std::string get_password() ;
        void set_password(std::string password_) ; 
        friend void output_status(User user) ;
        friend std::ostream& operator << (std::ostream& output,User user) ;

    private:
        std::string password ;
} ;

#endif