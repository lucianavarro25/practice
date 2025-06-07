#include <iostream>
using namespace std;
int main (){
    int n1,n2;
    cout << "escribe un numero";
    cin >> n1;
    cout << "escribe otro numero";
    cin >> n2;
    if ( n1  > n2){
        cout << "el numero " << n1 << "es mayor";
    } else if (n2 > n1){
         cout << "el numero " << n2 << "es mayor";

    } else {
        cout << "ambos numeros son iguales";
    }
    return 0;
}