// ejercicio.cpp
#include "ejercicio1.h"
#include <iostream>

void analizarNumero(int numero) {
    if (numero > 0) {
        std::cout << "El número es positivo.\n";
    } else if (numero < 0) {
        std::cout << "El número es negativo.\n";
    } else {
        std::cout << "El número es cero.\n";
    }
}
