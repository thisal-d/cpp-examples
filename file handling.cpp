#include <iostream>
#include <fstream>


int main(){
    //open mode
    // std::ios::app  -> append to file write
    // std::ios::ate
    // std::ios::binary -> binary read write;
    // std::ios::out
    //std::ios::trunc

    //open("file",std::ios::binary | std::ios::app)

    //read files
    std::ifstream readFile ;
    std::string content2 ;

    readFile.open("array.cpp") ;
    if (readFile.is_open()){
        //check file is open
        std::cout << "File Successfully Open..\n" ;
        //read file content splted with space
        while (readFile >> content2){
            std::cout << content2 << '\n';
        }
        readFile.close() ;
    } 


    readFile.open("array.cpp") ;
    if (readFile.is_open()){
        //check file is open
        std::cout << "File Successfully Open..\n" ;
        //read file content splted with line
        while (std::getline(readFile ,content2)){
            std::cout << content2 << '\n';
        }
        readFile.close() ;
    }

    //read as int
    int number ;
    readFile.open("nums.txt") ;
    while(readFile >> number ){
        std::cout << number << "\n" ;
    }
    
    //read character per 
    char content3 ;
    readFile.open("array.cpp") ;
    content3 = readFile.get() ;
    std::cout << content3 ;
    std::cout << (char)readFile.get() ;


    //write files
    std::ofstream writeFile ;
    writeFile.open("Generate.txt") ;

    //write 3 characters to file with end line
    writeFile.write("123\n",4) ;
    //write
    writeFile << "Hello World\n" ;

    writeFile << 1233123131313 ;

}