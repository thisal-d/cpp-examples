#include <iostream>
#include <vector>

void print(std::vector<std::string> list){
    std::cout << "Vector Size : " << list.size() << std::endl ;
    std::cout << "{ " ;
    for (int i=0 ;i<list.size() ;i++){
        if (i<list.size()-1){
            std::cout << list[i] << " ,";
        }
        else{
            std::cout << list[i] ;
        }
    }
    std::cout << " }" ;
    std::cout << "\n" ;
}


int main(){
    std::vector<std::string> strVector;
    strVector.push_back("hello1") ; //append value
    // {"hello1"}

    strVector.push_back("hello2") ;
    // {"hello1" ,"hello2"}

    strVector.pop_back() ; //remove last element
    // {"hello1"}

    strVector.assign(6,"hello3") ; //reset vector & assign new value 6 times
    // {"hello3" ,"hello3" ,"hello3" ,"hello3" ,"hello3" ,"hello3" }

    strVector.assign(0,"") ; //reset vetor
    // { }

    strVector.push_back("hello1") ;
    strVector.push_back("hello2") ;
    strVector.push_back("hello3") ;
    // {"hello1" ,"hello2" ."hello3" }

    strVector.at(2) = "hello5" ; // change index 2 element -> strVector[2] = "hello5"
    // {"hello1" ,"hello2" ."hello5" }

    strVector.back() = "hello3" ;    //change last value in vector
    // {"hello1" ,"hello2" ."hello3" }
    
    strVector.front() = "hello5" ; //change first value in vector 
    // {"hello5" ,"hello2" ."hello3" }
    strVector.front() = "hello1" ;
    // {"hello1" ,"hello2" ."hello3" }


    strVector.clear() ; //delete all element in vector
    // {}
    
    strVector.push_back("hello1") ; 
    strVector.push_back("hello2") ; 
    strVector.push_back("hello3") ; 
    // {"hello1" ,"hello2" ,"hello3"}

    strVector.erase(strVector.begin(),strVector.end()) ;
    // {}

    strVector.push_back("hello1") ; 
    strVector.push_back("hello2") ; 
    strVector.push_back("hello3") ; 
    // {"hello1" ,"hello2" ,"hello3"}

    strVector.erase(strVector.begin()+1,strVector.end()-1) ; //ERASE elemnet to specific index
    // {"hello1","hello3"}

    strVector.insert(strVector.begin()+1,"hello2") ;
    // {"hello1","hello2","hello3"}

    strVector.resize(2) ; //resize vector size
    // {"hello1","hello2"}

    std::vector<std::string> strVector2;
    strVector2.assign(3,"hello3");

    strVector.swap(strVector2) ; //swap with another vector
    // {"hello3","hello3","hello3"}

    strVector.emplace(strVector.begin() ,"zero") ; // add to index 0 //append item to specific index
    // {"zero","hello3","hello3","hello3"}
    strVector.emplace(strVector.end() ,"last") ;
    // {"zero","hello3","hello3","hello3","last" }
    strVector.emplace(strVector.end()-1 ,"last2") ;
    // {"zero","hello3","hello3","hello3" ,"last2" ,"last" }


    std::cout << strVector.size() ; //get no. of elements in vector
    std::cout << strVector.max_size() ;//get maximum size of vector
    std::cout <<  strVector.empty() ; //check vector is empty true or false
    std::cout << strVector.capacity()  ; //get no. of elements  allocated by vector
    strVector.reserve(1000) ; // element count set to vector
    strVector.begin() ; //begin pointer of vector
    strVector.end() ; //end pointer of vector
    std::cout << strVector.at(0) ; //get 2 index element
    std::cout << strVector.back() ; // get last element
    std::cout << strVector.front() ; //get first element
    //strVector.rbegin() ;
    // strVector.get_allocator() ;
    //strVector.shrink_to_fit() ;
    //strVector.emplace() ;
    //strVector.cbegin() ;
    //strVector.cend() ;
    //strVector.data() ;
    //strVector.emplace_back() ;
    //strVector.resize() ;
    print(strVector) ;

    std::vector<std::vector<std::vector<int>>> s = {{{76},{89}} ,{{78},{89}},{{87},{89}}} ;
} 