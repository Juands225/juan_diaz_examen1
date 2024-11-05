
#include <iostream>
#include "ejercicio.h"

void analizarNumero(int numero) {
    if (numero > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }
}