#include "esfera.h"
#include <cmath>

float calcularvolumen(float radio) {
    float volumen = (4.0 / 3.0) * 3.1416 * pow(radio, 3);
    return volumen;
}
