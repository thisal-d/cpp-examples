#include <iostream>
#include <string>

int main()
{
    //string in
    std::string str1;
    std::string str2{"adas"}; //-> adas
    std::string str3{"Hello World",5}; //-> Hello
    std::string str5 {5,'H'}; //-> HHHHH
    std::string str6{"123456789",2,4} ;// 2345


    // string -> c++
    std::string name = "Kamal Amal";

    std::cout << name.find("ama") << std::endl;
    // -> get "a" index -> 1

    name.replace(name.find("Kamal"), 5, "Amal"); // replace string with another string
    // "amal Amal"
    name.replace(name.find("A"), 1, "EE");
    // "EEEmal Amal"

    name.append(" Nimal"); // Add another string
    // "EEEmal Amal Nimal"
    name.insert(0, "ABC "); // insert string to index
    // "ABC EEEmal Amal Nimal"

    name.erase(name.length() - 1);
    // "ABC EEEmal Amal Nima"
    name.erase(9);
    // "ABC EEEmal"
    name.erase(0, 9); // remove characters using index
    // remove start->index0  count of character->9
    //  -> ""

    name.assign("Nimal"); // reasign string
    // "Nimal"

    name.push_back('c'); //add string to last index
    // Nimalc

    //name.pop_back(); // remove last character
    // -> Nimal
    name.assign("Nimal");
    // ""

    name.at(0) = 'S'; // change firt element with char
    // "Simal"

    name.replace(0, 1, "K");
    // "Kimal"

    name = name.substr(1,4) ; // new string return -> reasigned
    // "imal"
    name.append("imal") ; //add string
    // "imalimal"
    name.clear(); //clear string

    name = "imal";


    if (!name.compare("imal")){std::cout << "eqals" << std::endl ;}//when compare is true return 0
    if (name == "imal"){std::cout << "eqals" << std::endl ;}//when compare is true return 0

    std::cout << name.find_first_of("aeiou") << std::endl ;
    // -> 0

    std::cout << name << std::endl;

    name.at(0);      // get first element
    name.max_size(); // get max length of string
    name.length();   // get length of string ;
    name.size();     // get length of size // same as length



    std::cout << "\n\n\n\n\n\n" ;
    std::string value = {"hello world",5} ; //->hello   
    value = {5,'A'} ; //->AAAAA  
    value = {"hello world",6,5} ; //starting at index 6 and 5 chars
                                //world
}
