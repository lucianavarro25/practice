#include <iostream>
using namespace std;

int main() {
    /*int contador ;
    cout << "Ingrese un número para iniciar el contador: ";
    cin >> contador ; //1*/
    int contador = 1;
    // Ciclo while
    while (contador <= 10) {
        cout << "Contador en while: " << contador << endl;
        contador++; // Incrementa el contador
    }

    return 0;
}