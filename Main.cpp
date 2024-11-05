// main.cpp
#include <iostream>
#include "ejercicio1.h"
#include "ejercicio4.h"

int main() {
    int opcion;

    std::cout << "Elija una opción:\n";
    std::cout << "1. Analizar un número (positivo, negativo o cero)\n";
    std::cout << "2. Obtener el día de la semana (1-7)\n";
    std::cout << "3. Calcular el promedio de 8 calificaciones\n";
    std::cout << "4. Calcular el total bajo la promoción de tres artículos\n";
    std::cout << "Opción: ";
    std::cin >> opcion;

    if (opcion == 1) {
        int numero;
        std::cout << "Ingrese un número entero: ";
        std::cin >> numero;
        analizarNumero(numero);
    }
    else if (opcion == 2) {
        int numero;
        std::cout << "Ingrese un número del 1 al 7 para conocer el día de la semana: ";
        std::cin >> numero;
        obtenerDiaSemana(numero);
    }
    else if (opcion == 3) {
        double calificaciones[8];
        std::cout << "Ingrese las calificaciones obtenidas en los 8 ejercicios (de 0 a 10):\n";
        for (int i = 0; i < 8; i++) {
            std::cout << "Ejercicio " << (i + 1) << ": ";
            std::cin >> calificaciones[i];
        }
        double promedio = calcularPromedio(calificaciones, 8);
        std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;
    }
    else if (opcion == 4) {
        double precio1, precio2, precio3;
        std::cout << "Ingrese el precio del primer artículo: ";
        std::cin >> precio1;
        std::cout << "Ingrese el precio del segundo artículo: ";
        std::cin >> precio2;
        std::cout << "Ingrese el precio del tercer artículo: ";
        std::cin >> precio3;

        double total = calcularTotal(precio1, precio2, precio3);
        std::cout << "El total a pagar bajo la promoción es: " << total << std::endl;
    }
    else {
        std::cout << "Opción no válida.\n";
    }

    return 0;
}
