#include "tiquetes.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout<<"Bienvenido al sistema de reservacion de tiquetes de cine\n";
    cout<<"Tiquetes disponibles:\n";
    tiquetesDisponibles();
    cout<<"Presione Enter para continuar...";
    cin.get();
    bucleReservas();
    guardarReservasCSV("reservas.csv");
    cout << "Programa finalizado.\n";
    return 0;
}



