// strucy stupid long class name
#include <string>
#include <iostream>


struct SupoerLongCLassNameForNoReason{
    std::string name = "stupid_class_name";
};


using ShortName = SupoerLongCLassNameForNoReason;


int main(){
    ShortName var = ShortName();
}