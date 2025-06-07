#include <iostream>
using namespace std;

const int MAX = 1000;

int main() {
    int n;
    float suma = 0;
    int numeros[MAX];

    cout << "¿Cuántos números vas a ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    float promedio = suma / n;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
