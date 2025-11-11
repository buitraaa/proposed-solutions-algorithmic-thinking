#include "bmi.h"
#include <iostream>

int main(){
    std::cout<<"Calculadora de BMI"<<std::endl;
    datosUsuario();
    calcularBMI();
    std::cout<<"Su BMI es: "<<bmi<<std::endl;
    std::cout<<"Su índice de calorías aproximado según la formula Harris-Benedict: "<<calcularTMB()<<std::endl;
    std::cout<<"Presione Enter para salir..."<<std::endl;
    std::cin.get();

    return 0;
}