#include <iostream>
using namespace std;

int main() {
    float monto, total = 0, promedio;
    int cantidad = 0;
    int mayoresIgual100 = 0;
    int menores100 = 0;

    cout << "Ingrese los montos de las compras (0 para finalizar):" << endl;

    while (true) {
        cin >> monto;

        if (monto == 0) {
            break; // Finaliza el ciclo
        }

        if (monto < 0) {
            cout << "Monto invalido. Intente nuevamente." << endl;
            continue; // Ignora el valor negativo
        }

        // Acumulador y contador
        total += monto;
        cantidad++;

        // Clasificación
        if (monto >= 100) {
            mayoresIgual100++;
        } else {
            menores100++;
        }
    }

    // Validar si no hubo compras válidas
    if (cantidad == 0) {
        cout << "No se ingresaron compras validas." << endl;
    } else {
        promedio = total / cantidad;

        cout << "\nTotal acumulado: Q" << total << endl;
        cout << "Cantidad de compras: " << cantidad << endl;
        cout << "Promedio de compra: Q" << promedio << endl;
        cout << "Compras mayores o iguales a Q100: " << mayoresIgual100 << endl;
        cout << "Compras menores a Q100: " << menores100 << endl;
        cout << "Rodrigo Adrian Barrios Monterooso" ;
    }

    return 0;
}