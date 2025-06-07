#include <iostream>
using namespace std;

const int MAX = 1000;

int main() {
    int n;
    int numeros[MAX];

    cout << "¿Cuántos números vas a ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) mayor = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    return 0;
}

