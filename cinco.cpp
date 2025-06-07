#include <iostream>
using namespace std;

const int MAX = 1000;

int main() {
    int n;
    int numeros[MAX];
    int pares = 0, impares = 0;

    cout << "¿Cuántos números vas a ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;

    return 0;
}
