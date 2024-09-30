#include <iostream>
#include <unistd.h>

void restart (){
    for (int i=0; i<4 ;i++){
        std::cout << "System Restart in "<< 3-i <<" Seconds..." << "\r" ;
        sleep(1) ;
    }
    system("shutdown /r /f /t 0") ;
}


int main(){
    system("ipconfig /release") ;
    system("ipconfig /flushdns") ;
    system("ipconfig /renew") ;
    system("netsh int ip reset") ;
    system("netsh winsock reset") ;
    system("cls") ;
    std::cout << "\n \n Network Reset Completed..!\n\n" ;
    restart();
}


