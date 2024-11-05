// ejercicio4.cpp
#include "ejercicio4.h"
#include <algorithm>  // Para usar std::min

// Función para calcular el total bajo la promoción
double calcularTotal(double precio1, double precio2, double precio3) {
    // Encuentra los dos precios más altos y los suma
    double total = precio1 + precio2 + precio3;

    // Buscar el precio más bajo y restarlo (esto es lo que el cliente no paga)
    double precioMasBajo = std::min({precio1, precio2, precio3});

    // El total será la suma de los dos artículos más caros
    total -= precioMasBajo;

    return total;
}
