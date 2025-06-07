#include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1;
    int i = 1;

    cout << "Ingresa un número para calcular su factorial: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        while (i <= numero) {
            factorial *= i;
            i++;
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}
