// ejercicio2.cpp
#include <iostream>
#include "ejercicio2.h"

void obtenerDiaSemana(int numero) {
    // Utilizamos un bloque de condicionales para determinar el día según el número
    switch (numero) {
        case 1:
            std::cout << "Lunes" << std::endl;
            break;
        case 2:
            std::cout << "Martes" << std::endl;
            break;
        case 3:
            std::cout << "Miércoles" << std::endl;
            break;
        case 4:
            std::cout << "Jueves" << std::endl;
            break;
        case 5:
            std::cout << "Viernes" << std::endl;
            break;
        case 6:
            std::cout << "Sábado" << std::endl;
            break;
        case 7:
            std::cout << "Domingo" << std::endl;
            break;
        default:
            std::cout << "Número inválido. Debe ser entre 1 y 7." << std::endl;
            break;
    }
}