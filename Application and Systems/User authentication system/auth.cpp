#include "auth.h"
#include <fstream>
#include <string>

bool registrarUsuario(const std::string& usuario, const std::string& contrasena) {
    std::ofstream archivo("usuarios.txt", std::ios::app);
    if (!archivo.is_open()) return false;

    archivo << usuario << " " << contrasena << std::endl;
    archivo.close();
    return true;
}

bool autenticarUsuario(const std::string& usuario, const std::string& contrasena) {
    std::ifstream archivo("usuarios.txt");
    if (!archivo.is_open()) return false;

    std::string u, c;
    while (archivo >> u >> c) {
        if (u == usuario && c == contrasena) {
            archivo.close();
            return true;
        }
    }
    archivo.close();
    return false;
}
