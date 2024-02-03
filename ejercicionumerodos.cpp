#include <iostream>
#include <ctime>
#include <cstdlib>

// Definición de la estructura de rango de números
struct Rango {
    int minimo;
    int maximo;
};

// Función para generar un número entero aleatorio dentro de un rango dado
int generarNumeroAleatorio(Rango rango) {
    return rand() % (rango.maximo - rango.minimo + 1) + rango.minimo;
}

int main() {
    // Semilla para generar números aleatorios
    srand(time(0));

    int cantidadNumeros;
    std::cout << "Ingrese la cantidad de numeros enteros aleatorios que desea generar: ";
    std::cin >> cantidadNumeros;

    Rango rangoNumeros;
    std::cout << "Ingrese el rango de numeros en el que desea generar los numeros aleatorios (minimo y maximo separados por un espacio): ";
    std::cin >> rangoNumeros.minimo >> rangoNumeros.maximo;

    std::cout << "Los numeros enteros aleatorios generados son: ";
    for (int i = 0; i < cantidadNumeros; ++i) {
        std::cout << generarNumeroAleatorio(rangoNumeros) << " ";
    }
    std::cout << std::endl;

    return 0;
}
