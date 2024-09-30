#include <iostream>
#include <cstring>

int len(char char_p[]){
    return std::strlen(char_p);
}

int len(const char *char_p){
    return std::strlen(char_p);
}



int main(){
    //c string 
    char cstring1[] ={"123456789"};
    const char* cstring2 = new char[]{"123456789"};
    cstring2 = {"987654321213213131312313"} ;
    std::cout << cstring2 ; //-> 987654321213213131312313


    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    // c strings == char array
    // std::strlen    //get length without any null character 
    std::cout << "\nstd::strlen\n________________\n\n" ;
    char name2[] = {'k','a','m' ,'a' ,'l'} ;
    char name3[] = "kamal" ;
   
    name2[0] = 'l'; //-> change a character in array

    char message[] {'h','e','l','l','o',0}; // /0 null character
    char message2[] {"hello\0"};
    std::cout << message << std::endl ;
    std::cout << "size : " << sizeof(message) / sizeof(message[0]) << "\n"; //6
    std::cout << "size : " << sizeof(message2) / sizeof(message2[0]) << "\n\n"; //7
    
    std::cout << "size : " <<  std::size(message) << "\n"; // 6
    std::cout << "size : " <<  std::size(message2) << "\n"; // 7

    std::cout << "size : " <<  std::strlen(message) << "\n"; // 5
    std::cout << "size : " <<  std::strlen(message2) << "\n\n\n"; // 5


    char char_arr[] = "123456789";
    const char *char_arr2 = {"123456789"};
    std::cout << "Length : "  << len(char_arr) << '\n';
    std::cout << "Length : " << len(char_arr2) << "\n";


    //pointers
    const char * char_array = {"Hello World\0"};
    std::cout << "size : " <<  std::strlen(char_array) << "\n\n\n"; // 11


    //char * char_array = {'H','e','l','l','o','W','o','r','l','d'};
    std::cout << char_array[10] << "\n" ; // 'd'
    std::cout << char_array << "\n" ; // 'Hello World'
    std::cout << *char_array << "\n\n\n"; //-> 'H'




    //std::strcmp   compare 2 c strings
    std::cout << "\nstd::strcmp\n________________\n\n" ;
    const char *c1 = {"123"};
    const char *c2 = {"123\0"};
    std::cout << std::strcmp(c1, c2) << "\n"; //-> 0

    char c3[4] = {'1','2','3','\0'};
    const char *c4 = {"123"};
    std::cout << std::strcmp(c3, c4) << '\n'; //-> 0
 
    char c5[5] = {"abc"} ;
    const char *c6 = {"bbc"};
    //  c5<c6  | a<b ->  -1
    std::cout << std::strcmp(c5, c6) << "\n"; //-> -1
    //  c6>c5  | b>a ->   1
    std::cout << std::strcmp(c6, c5) << "\n\n\n"; //-> 1


    const char *c7 = {"blabama"};
    const char *c8 = {"blabAma"};
    // c7>c8  | a>A -> 1
    std::cout << std::strcmp(c7, c8) << '\n'; //-> 1
    // c8<c7  | A<a -> -1
    std::cout << std::strcmp(c8, c7) << '\n'; //-> -1

    const char *c9 = {"blabamb"};
    const char *c10 = {"blabama"};
    // c9>c10 | b>a -> 1
    std::cout << std::strcmp(c9, c10) << '\n'; //-> 1

    const char *c11 = {"abcd"};
    const char *c12 = {"abc "};
    // c11>c12 | d>' '  -> 1
    std::cout << std::strcmp(c11, c12) << "\n\n\n"; //-> 1

    //std::strncmp   compare 2 c strings with character count
    std::cout << "\nstd::strncmp\n________________\n\n" ;
    const char *c13 = {"abcdef"};
    const char *c14 = {"abcdeg"};

    // c13[5:]=c14[5:] ;
    std::cout << std::strncmp(c13, c14,5) << "\n"; //-> 0

    // c13[6:]!=c14[6:] ;
    // f<g -> -1 
    std::cout << std::strncmp(c13, c14,6) << "\n\n\n"; //-> -1





    //std::strchr 
    std::cout << "\nstd::strchr\n________________\n\n" ;

    const char *str = "abcdefghij\0" ;
    std::cout << std::strchr(str, 'g') << "\n" ; // "ghij"
    std::cout << std::strchr(str, 'b') << "\n" ; // "bcdefghij"
    std::cout << std::strchr(str, 'e') << "\n\n" ; // "efghij"

    const char str2[] = "qrstuv"     ;
    std::cout << std::strchr(str2, 'r') << "\n" ; // "rstuv"
    std::cout << std::strchr(str2, 'u') << "\n" ; // "uv"
    std::cout << std::strchr(str2, 't') << "\n\n" ; // "tuv"
    std::strchr(str, 'z'); // will return nullptr
                            //if u try to print it out program will be crashed
    //std::cout << std::strchr(str, 'l') -> error


    char target2 = 'z';
    char string[] =  {"lachmut"} ;
    char *result2 = string;
    result2 = std::strchr(string,target2);
    // u cant print char* nullptrs;
    if (result2==nullptr){
        std::cout << "nullptr";
    }


    const char *str3 = "abcdabcdabcd\0" ;
    const char *result = str3 ;
    char target = 'd';
    int iteration = 0;
    while((result=std::strchr(result, target)) != nullptr){
        std::cout << "Found : " << target << " | starting at : " << result << "\n" ;
        ++iteration;
        ++result;
    }
    std::cout << "iteration : " << iteration << "\n\n\n";


    //
    char path[] = "/c:/user/username/appdata";
    char *path_p =  std::strchr(path,'/');
    if (path_p){
        std::cout << ++path_p << "\n\n\n" ; // c:/user/username/appdata
    }


    std::cout << "\nstd::strrchr\n________________\n\n" ;

    const char* location = "c:/user/username/videos";
    std::cout << std::strrchr(location,'/') << "\n" ; //-> /videos
    //std::cout << std::strrchr(location,'z') << "\n" ; // proogram crashed cuz null pointer

    const char* location_last = std::strrchr(location,'/') ; // /videos
    location_last ++;
    std::cout << location_last << "\n\n\n\n"; //-> videos


    std::cout << "\nstd::strcat\n________________\n\n" ;

    char dest[50] = "Hello " ;
    char src[50] = "World!" ; 
    std::cout << std::strcat(dest, src) << "\n"; // -> Hello World;
    std::cout << dest  << "\n" ; // -> Hello World;
    

    char *dest2 = new char[30]{"ABCDEFGHIJK"};
    char *src2 = new char[30]{"LMNOPQR"};
    std::cout << std::strncat(dest2, src2,2) << "\n\n\n"; //->ABCDEFGHIJKLM
    // dest2 = ABCDEFGHIJKLM



    std::cout << "\nstd::strcpy\n________________\n\n" ;
    const char* src3 = "C++ is a multipurpose programming language";
    char *dest3 = new char[std::strlen(src3)+1] {"ABCDEFGH"};
    std::strcpy(dest3,src3);
    std::cout << dest3 << "\n\n\n"; //-> "C++ is a multipurpose programming language";
    
    std::cout << "\nstd::strncpy\n________________\n\n" ;
    const char* src4 = "C++ is a multipurpose programming language";
    char *dest4 = new char[5] ;
    std::strncpy(dest4,src4,4);
    std::cout << dest4 ; //-> "C++ 
    

    if (nullptr == NULL){
        std::cout << "\n\n\nnullptr = NULL";
    }

    //return 0;
}

