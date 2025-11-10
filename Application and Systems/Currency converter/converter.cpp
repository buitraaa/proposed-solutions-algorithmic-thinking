#include <iostream>
#include <iomanip>
#include "converter.h"

float dollar(){
    std::cout<<"Now, select the currency you want to convert to.\n";
    std::cout<<"1. Colombian Peso"<<std::endl;
    std::cout<<"2. Euro"<<std::endl;
    std::cout<<"3. Pound"<<std::endl;
            
    std::cin>>convOption;
         if(convOption == 1){
             money = money*3786;
         }
         else if(convOption == 2){
              money = money*0.86;
         }
          else if(convOption == 3){
             money = money*0.75;
          }
          std::cout<<"You have converted your money. The amount is: "<<std::fixed<<std::setprecision(0)<<money<<std::endl;
          std::cout<<"Press enter to exit.";
          std::cin.get();
    return money;
     }



float coppeso(){
    std::cout<<"Now, select the currency you want to convert to.\n";
    std::cout<<"1. Dollar"<<std::endl;
    std::cout<<"2. Euro"<<std::endl;
    std::cout<<"3. Pound"<<std::endl;
    std::cin>>convOption;
         if(convOption == 1){
             money = money*0.00025;
         }
         else if(convOption == 2){
              money = money*0.00022;
         }
          else if(convOption == 3){
             money = money*0.00020;
          }
          std::cout<<"You have converted your money. The amount is: "<<std::fixed<<std::setprecision(0)<<money<<std::endl;
          std::cout<<"Press enter to exit.";
          std::cin.get();
    return money;
        }
    
float euro(){
    std::cout<<"Now, select the currency you want to convert to.\n";
    std::cout<<"1. Dollar"<<std::endl;
    std::cout<<"2. Colombian Peso"<<std::endl;
    std::cout<<"3. Pound"<<std::endl;
    std::cin>>convOption;
         if(convOption == 1){
             money =money*1.15;
         }
         else if(convOption == 2){
              money =money*4335;
         }
          else if(convOption == 3){
             money =money*0.88;
          }
          std::cout<<"You have converted your money. The amount is: "<<std::fixed<<std::setprecision(0)<<money<<std::endl;
          std::cout<<"Press enter to exit.";
          std::cin.get();
    return money;
        }

        
float pound(){
    std::cout<<"Now, select the currency you want to convert to.\n";
    std::cout<<"1. Dollar"<<std::endl;
    std::cout<<"2. Colombian Peso"<<std::endl;
    std::cout<<"3. Euro"<<std::endl;
    std::cin>>convOption;
         if(convOption == 1){
             money =money*1.31;
         }
         else if(convOption == 2){
              money =money*4975;
         }
          else if(convOption == 3){
             money=money*1.14;
          }
          std::cout<<"You have converted your money. The amount is: "<<std::fixed<<std::setprecision(0)<<money<<std::endl;
          std::cout<<"Press enter to exit.";
          std::cin.get();
    return money;
        }



