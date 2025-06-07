#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 47; 
    int intento;

    cout << "¡Adivina el número secreto entre 1 y 100!" << endl;

    do {
        cout << "Ingresa tu intento: ";
        cin >> intento;

        if (intento > numeroSecreto) {
            cout << "Muy alto. Intenta con un número más bajo." << endl;
        } else if (intento < numeroSecreto) {
            cout << "Muy bajo. Intenta con un número más alto." << endl;
        } else {
            cout << "¡Felicidades! Adivinaste el número." << endl;
        }

    } while (intento != numeroSecreto);

    return 0;
}
