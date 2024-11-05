// ejercicio3.cpp
#include <iostream>
#include "ejercicio3.h"

double calcularPromedio(double calificaciones[], int numCalificaciones) {
    double suma = 0.0;

    // Sumar todas las calificaciones
    for (int i = 0; i < numCalificaciones; i++) {
        suma += calificaciones[i];
    }

    // Calcular el promedio
    return suma / numCalificaciones;
}