// main.cpp
#include <iostream>
#include "ejercicio.h"

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;
    
    // Llamar a la función para analizar el número
    analizarNumero(numero);
    
    return 0;
}
int main() {
    int numero;

    // Solicitar al usuario que ingrese un número del 1 al 7
    std::cout << "Ingrese un número del 1 al 7 para conocer el día de la semana: ";
    std::cin >> numero;

    // Llamar a la función para obtener el día correspondiente
    obtenerDiaSemana(numero);

    return 0;
}