#include<iostream>
#include<cmath>
using namespace std;

const float PI = 3.14159;

// Definir un registro para cada figura
struct Circulo {
    float radio;
};

struct Triangulo {
    float base;
    float altura;
};

struct Cuadrado {
    float lado;
};

// Método para calcular el área de un círculo
float CalcularArea(const Circulo& circulo) {
    return (circulo.radio * circulo.radio) * PI;
}

// Método para calcular el área de un triángulo
float CalcularArea(const Triangulo& triangulo) {
    return (triangulo.base * triangulo.altura) / 2;
}

// Método para calcular el área de un cuadrado
float CalcularArea(const Cuadrado& cuadrado) {
    return cuadrado.lado * cuadrado.lado;
}

int main() {
    int opcion;
    cout << "Seleccione la figura para calcular el área: \n";
    cout << "1. Círculo\n2. Triángulo\n3. Cuadrado\n";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            Circulo circulo;
            cout << "Ingrese el radio del círculo: ";
            cin >> circulo.radio;
            float areaCirculo = CalcularArea(circulo);
            cout << "El área del círculo es: " << areaCirculo << endl;
            break;
        }
        case 2: {
            Triangulo triangulo;
            cout << "Ingrese la base del triángulo: ";
            cin >> triangulo.base;
            cout << "Ingrese la altura del triángulo: ";
            cin >> triangulo.altura;
            float areaTriangulo = CalcularArea(triangulo);
            cout << "El área del triángulo es: " << areaTriangulo << endl;
            break;
        }
        case 3: {
            Cuadrado cuadrado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> cuadrado.lado;
            float areaCuadrado = CalcularArea(cuadrado);
            cout << "El área del cuadrado es: " << areaCuadrado << endl;
            break;
        }
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}

