#include <iostream>
using namespace std;

int main() {
    int numero;
   int suma = 0;
   cout << "ingresa algun numero, ingresa 0 para terminar" << endl;
   do {
    cout << "numero : ";
    cin >> numero;
    suma += numero;
   } while (numero != 0);
    cout<< " la suma es : " << suma << endl;
   
   return 0;
}