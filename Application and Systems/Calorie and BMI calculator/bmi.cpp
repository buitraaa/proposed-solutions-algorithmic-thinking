#include "bmi.h"
#include <iostream>

float peso, altura, bmi, tmb;
int edad, sexo, actividadFisica;

int datosUsuario() {
    std::cout << "Ingrese su peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese su altura (m): ";
    std::cin >> altura;
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    std::cout << "Ingrese su sexo (1: Hombre, 2: Mujer): ";
    std::cin >> sexo;
    std::cout << "Ingrese su nivel de actividad fisica (1-5): ";
    std::cin >> actividadFisica;

    return 0;
}

float calcularBMI() {
    if (altura <= 0) {
        std::cerr << "Error: La altura debe ser mayor que cero." << std::endl;
        return -1; 
    }
    bmi = peso / (altura * altura);
    if(bmi<18.5){
        std::cout<<"Bajo peso"<<std::endl;
    }else if(bmi>=18.5 && bmi<24.9){
        std::cout<<"Peso normal"<<std::endl;
    }else if(bmi>=25 && bmi<29.9){
        std::cout<<"Sobrepeso"<<std::endl;
    }else{
        std::cout<<"Obesidad"<<std::endl;
    }
    return bmi;
}

float calcularTMB() {
    // TMB = 88.362 + (13.397 × weight in kg) + (4.799 × height in cm) - (5.677 × age in years)
    tmb = 88.362 + (13.397 * peso) + (4.799 * (altura * 100)) - (5.677 * edad);
    std::cin.get();
    return tmb;
}