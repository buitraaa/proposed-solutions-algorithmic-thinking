#include <iostream>
#include "auth.h"

int main() {
    int opcion;
    std::string usuario, contrasena;

    std::cout << "1. Registrar\n2. Iniciar sesión\nOpción: ";
    std::cin >> opcion;

    std::cout << "Usuario: ";
    std::cin >> usuario;
    std::cout << "Contraseña: ";
    std::cin >> contrasena;
    std::cin.get();

    if (opcion == 1) {
        if (registrarUsuario(usuario, contrasena))
            std::cout << "Usuario registrado correctamente.\n";
        else
            std::cout << "Error al registrar usuario.\n";
            std::cin.get();
    } else if (opcion == 2) {
        if (autenticarUsuario(usuario, contrasena))
            std::cout << "Autenticación exitosa.\n";
        else
            std::cout << "Usuario o contraseña incorrectos.\n";
            std::cin.get();
    } else {
        std::cout << "Opción inválida.\n";
        std::cin.get();
    }

    return 0;
}