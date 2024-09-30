#include <iostream>
#include <vector>

namespace csd
{
    void print(std::vector<int> vector_){
        std::cout << "{" ;
        for (int i=0; i<vector_.size()-1; i++){
            std::cout << vector_[i]  << ", " ;
        }
        std::cout << vector_[vector_.size()-1] ;
        std::cout << "}" << "\n"; 
    }

    class Book{
        public:
            std::string title ;
            std::string author ;
            int noOfPages ;
            Book(std::string title_, std::string author_="Unknown Author", int noOfPages_=0){
                title = title_ ;
                author = author_ ;
                noOfPages = noOfPages_ ;
            }
    } ; 

    struct Rectangle
    {
        int length ;
        int width ;
        Rectangle(int length_ ,int width_){
            length = length_ ;
            width = width_ ;
        }
    };
    
}  // namespace functions

int main(){
    std::vector<int> nums = {1,23,3,23,3,313} ;
    csd::print(nums) ;

    csd::Book book1("Sherlock Homes","Sir.Athur Konan Doil" ,400) ;
    std::cout << book1.title<< " ," << book1.author << " ," << book1.noOfPages  << "\n" ;

    csd::Book book2("Sherlock Homes") ;
    std::cout << book2.title<< " ," << book2.author << " ," << book2.noOfPages << "\n" ;

    csd::Rectangle rectangle1(10,10) ;
    std::cout << rectangle1.length ;
}