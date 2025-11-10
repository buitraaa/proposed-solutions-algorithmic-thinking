#include <iostream>
#include "converter.h"

float money;
int option, menuopt, convOption;



int main(){
    std::cout<<"Welcome to the currency converter!\n";
    currency();
    std::cout<<"Select the currency you have:\n";
    menu();
    
    if(menuopt == 1){
        dollar();
    }
    else if(menuopt == 2){
        coppeso();
    }
    else if(menuopt == 3){
        euro();
    }
    else if(menuopt == 4){
        pound();
    }
    int currency();
    std::cin.get();
    return 0;
}


int menu(){
    std::cout<<"1. Dollar"<<std::endl;
    std::cout<<"2. Colombian Peso"<<std::endl;
    std::cout<<"3. Euro"<<std::endl;
    std::cout<<"4. Pound"<<std::endl;
    std::cin>>menuopt;
    return menuopt;
}


int currency(){
    std::cout<<"Enter the money you have: \n";
    std::cin>>money;
    return money;
}


