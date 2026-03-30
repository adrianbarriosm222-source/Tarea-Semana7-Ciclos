#include <iostream>
using namespace std;

int main() {
    int opcion;
    int total = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    do {
        cout << "\n--- ENCUESTA DE SATISFACCION ---" << endl;
        cout << "1 = Malo" << endl;
        cout << "2 = Regular" << endl;
        cout << "3 = Bueno" << endl;
        cout << "4 = Excelente" << endl;
        cout << "0 = Finalizar encuesta" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 0) {
            break;
        }

        if (opcion < 0 || opcion > 4) {
            cout << "Opcion invalida. Intente nuevamente." << endl;
            continue;
        }

        // Contadores
        total++;

        switch(opcion) {
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
        }

    } while(true);

    // Resultados
    if (total == 0) {
        cout << "\nNo se ingresaron respuestas validas." << endl;
    } else {
        cout << "\n--- RESULTADOS ---" << endl;
        cout << "Total de respuestas validas: " << total << endl;
        cout << "Cantidad de respuestas 1 (Malo): " << c1 << endl;
        cout << "Cantidad de respuestas 2 (Regular): " << c2 << endl;
        cout << "Cantidad de respuestas 3 (Bueno): " << c3 << endl;
        cout << "Cantidad de respuestas 4 (Excelente): " << c4 << endl;
        cout << "Rodrigo Adrian Barrios Monterroso" ;
    }

    return 0;
}