#include <vector>
#include <iostream>

class book{
    public :
        
        static int get_book_count(){
            return book_count ;
        }

        std::string title ;
        std::string author ;
        int no_of_pages ;

        book(){
            book_count ++ ;
            title = "No title" ;
            author = "No author" ;
            no_of_pages = 0 ;
        } 

        //Constructor
        book(std::string title_, std::string author_ ,int no_of_pages_){
            book_count ++ ;
            title = title_ ;
            author = author_ ;
            no_of_pages = no_of_pages_ ;
        }

        book(std::string title, std::string author){
            book_count++ ;
            this->title = title ;
            this->author = author;
        }

        ~book(){  //destructor
            book_count -- ;

            std::cout << "Destructer\n" ;
        }

        void set_publisher(std::string publisher_name){
            publisher = publisher_name ;
        } 

        std::string get_publisher(){
            return publisher ;
        }

        void set_meta_data(std::string meta_data){
            this->meta_data = meta_data ;
        }

        std::string get_meta_data(){
            return meta_data ;
        }
    private :
        std::string publisher ;
        static int book_count ; 

    protected :
        std::string meta_data ;
} ;
int book::book_count =  0;


int main(){
    book book_0 = book("SHERLOCK H.." ,"Sir. AUTHOR..") ;
    book_0 = book("SHERLOCK H.." ,"Sir. AUTHOR..") ;
    book_0.set_publisher("Steam") ;

    book book_1("SHERLOCK H.." ,"Sir. AUTHOR..") ;
    book_1.set_publisher("Steam") ;
    std::cout << book_1.title << "\n" ;
    std::cout << book_1.author << "\n" ;
    std::cout << book_1.get_publisher() << "\n" ;

    //get count when public
    //std::cout << book_1.book_count << "\n" ;
    //std::cout << book::book_count << "\n" ;

    //get count when provate
    std::cout << book_0.get_book_count() << "\n" ;
    std::cout << book::get_book_count() << "\n" ;

    book_0.~book() ; // destructor called
    std::cout << book::get_book_count() << "\n" ;

    book books_array[5] ; // static array
}