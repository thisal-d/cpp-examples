#include <iostream>



int main()
{
    int *p_number = new int(100); //allocate new memory
    int number = 100;
    int *p_number = &number ;//assign  new address 
                             //we lost p_number old address :/ os cant use that address :/
                             //cuz its not released, its still our memory

    
    int *p_number2 = new int(100);//allocating new memory loc

    p_number2 = new int(200); //allocating another loc :/
                            // now we lost old memory loc , even os cant use it cuz we didnt release it


    //scope machanism
    {
        int *p_number3 = new int(10); //allocating new memory loc
        //after scope end we lost P_number3 var,
        //but we aint gonna lose address we allocated ,its still our memory
    }
    //scope end
    //when the scope end p_number3 is going to die
    //but the dynamic memory itself not going to die u just lost access to it

}