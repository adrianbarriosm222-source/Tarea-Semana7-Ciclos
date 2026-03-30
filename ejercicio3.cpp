#include <iostream>
using namespace std;

int main() {
    int opcion;
    float saldo = 500;
    float monto;

    do {
        cout << "\n--- CAJERO AUTOMATICO ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Saldo actual: Q" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese el monto a depositar: Q";
                cin >> monto;

                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito realizado. Nuevo saldo: Q" << saldo << endl;
                } else {
                    cout << "Monto invalido." << endl;
                }
                break;

            case 3:
                cout << "Ingrese el monto a retirar: Q";
                cin >> monto;

                if (monto <= 0) {
                    cout << "Monto invalido." << endl;
                } else if (monto > saldo) {
                    cout << "Fondos insuficientes." << endl;
                } else {
                    saldo -= monto;
                    cout << "Retiro realizado. Nuevo saldo: Q" << saldo << endl;
                }
                break;

            case 4:
                cout << "Gracias por usar el cajero." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while(opcion != 4);
           cout <<"Rodrigo Adrian Barrios Monterroso" ;
    return 0;
}