#ifndef AUTH_H
#define AUTH_H

#include <string>

bool registrarUsuario(const std::string& usuario, const std::string& contrasena);
bool autenticarUsuario(const std::string& usuario, const std::string& contrasena);

#endif