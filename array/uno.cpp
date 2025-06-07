#include <iostream>
using namespace std;

const int MAX = 1000;

int main() {
    int n, suma = 0;
    int numeros[MAX];

    cout << "¿Cuántos números vas a ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    cout << "La suma es: " << suma << endl;
    return 0;
}
