#include <iostream>
using namespace std;
int main (){
    int num;
    cout << "Escribe un numero";
    cin >> num;
    if (num % 2 == 0){
        cout << "Numero es par";
    } else if (num % 2 != 0){
        cout << "numero es impar";
    }
    return 0;
}