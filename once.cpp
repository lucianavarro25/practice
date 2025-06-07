#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Ingresa un número entre 1 y 10: ";
        cin >> numero;

        if (numero < 1 || numero > 10) {
            cout << "Número inválido. Intenta de nuevo.\n";
        }

    } while (numero < 1 || numero > 10);

    cout << "¡Número válido ingresado: " << numero << "!" << endl;
    return 0;
}
