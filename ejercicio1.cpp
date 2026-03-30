#include <iostream>
using namespace std;

int main() {
    // Datos correctos
    string usuario_correcto = "admin";
    int contrasena_correcta = 2026;

    // Variables
    string usuario;
    int contrasena;
    int intentos_fallidos = 0;

    // Ciclo while
    while (usuario != usuario_correcto || contrasena != contrasena_correcta) {
        cout << "Ingrese el nombre de usuario: ";
        cin >> usuario;

        cout << "Ingrese la contraseña numerica: ";
        cin >> contrasena;

        // Validación
        if (usuario != usuario_correcto || contrasena != contrasena_correcta) {
            cout << "Datos incorrectos. Intente nuevamente.\n\n";
            intentos_fallidos++;
        }
    }

    // Mensajes finales
    cout << "\nBienvenido al sistema.\n";
    cout << "Acceso concedido.\n";
    cout << "Intentos fallidos: " << intentos_fallidos << endl;
    cout <<"Rodrigo Adrian Barrios Monteroso" ;
    return 0;
}