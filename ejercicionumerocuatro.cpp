#include <iostream>
#include <string>
using namespace std;

// Definimos la estructura para representar un producto
struct Producto {
    string nombre;
    float precio;
    int cantidad;
};

int main() {
    // Inicializamos los datos de los productos
    Producto frutas = {"Manzanas", 5.0, 10};
    Producto verduras = {"Espinacas", 3.0, 5};
    Producto abarrotes = {"Arroz", 2.0, 20};

    // Calculamos el costo total de cada tipo de producto
    float costo_frutas = frutas.precio * frutas.cantidad;
    float costo_verduras = verduras.precio * verduras.cantidad;
    float costo_abarrotes = abarrotes.precio * abarrotes.cantidad;

    // Calculamos el costo total de la compra sin descuento
    float costo_total_sin_descuento = costo_frutas + costo_verduras + costo_abarrotes;

    // Verificamos si se aplica descuento
    if (costo_total_sin_descuento > 1000) {
        // Aplicamos descuento del 20%
        float descuento = costo_total_sin_descuento * 0.20;
        float total_a_pagar = costo_total_sin_descuento - descuento;

        // Mostramos los detalles de la compra
        cout << "Nombre del cliente: " << "Cliente ejemplar" << endl;
        cout << "Producto: " << frutas.nombre << ", Precio: " << frutas.precio << ", Cantidad: " << frutas.cantidad << endl;
        cout << "Producto: " << verduras.nombre << ", Precio: " << verduras.precio << ", Cantidad: " << verduras.cantidad << endl;
        cout << "Producto: " << abarrotes.nombre << ", Precio: " << abarrotes.precio << ", Cantidad: " << abarrotes.cantidad << endl;
        cout << "Descuento aplicado: " << descuento << endl;
        cout << "Total a pagar: " << total_a_pagar << endl;
    } else {
        // No se aplica descuento
        float total_a_pagar = costo_total_sin_descuento;

        // Mostramos los detalles de la compra
        cout << "Nombre del cliente: " << "Cliente ejemplar" << endl;
        cout << "Producto: " << frutas.nombre << ", Precio: " << frutas.precio << ", Cantidad: " << frutas.cantidad << endl;
        cout << "Producto: " << verduras.nombre << ", Precio: " << verduras.precio << ", Cantidad: " << verduras.cantidad << endl;
        cout << "Producto: " << abarrotes.nombre << ", Precio: " << abarrotes.precio << ", Cantidad: " << abarrotes.cantidad << endl;
        cout << "Descuento aplicado: 0" << endl;
        cout << "Total a pagar: " << total_a_pagar << endl;
    }

    return 0;
}
