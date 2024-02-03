#include <iostream>
#include <string>
using namespace std;

// Definición de un registro para representar el ascensor
struct Ascensor {
    int pisoActual;
    bool puertasAbiertas;
};

// Función para simular el proceso de subir a un piso en el ascensor
void subirAPiso(int pisoDestino, Ascensor &ascensor) {
    cout << "El ascensor se encuentra en el piso " << ascensor.pisoActual << endl;
    if (!ascensor.puertasAbiertas) {
        cout << "Se han abierto las puertas del ascensor" << endl;
        ascensor.puertasAbiertas = true;
        // Simular espera para el ingreso del piso destino
        cout << "Ingrese el piso al que desea ir: ";
        cin >> pisoDestino;
        cout << "Se han cerrado las puertas del ascensor" << endl;
        ascensor.puertasAbiertas = false;
    }
    
    if (pisoDestino > ascensor.pisoActual) {
        cout << "El ascensor va subiendo" << endl;
        // Simulación de movimiento del ascensor
        for (int i = ascensor.pisoActual; i <= pisoDestino; i++) {
            cout << "El ascensor se encuentra en el piso " << i << endl;
        }
    } else if (pisoDestino < ascensor.pisoActual) {
        cout << "El ascensor va bajando" << endl;
        // Simulación de movimiento del ascensor
        for (int i = ascensor.pisoActual; i >= pisoDestino; i--) {
            cout << "El ascensor se encuentra en el piso " << i << endl;
        }
    }
    ascensor.pisoActual = pisoDestino;
}

int main() {
    Ascensor miAscensor = {1, false}; // Crear un objeto de tipo Ascensor con el piso inicial y las puertas cerradas
    int pisoDestino;
    
    cout << "Bienvenido al simulador de ascensor" << endl;
    cout << "Ingrese el piso al que desea ir: ";
    cin >> pisoDestino;
    
    subirAPiso(pisoDestino, miAscensor); // Llamar a la función para simular el proceso de subir a un piso
    
    return 0;
}
