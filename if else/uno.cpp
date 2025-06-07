#include <iostream>
using namespace std;
int main (){
   int edad;
   cout << "Indica tu edad por favor";
   cin >> edad;
   if ( edad < 18 ){
    cout << "eres menor de edad";
   } else if ( edad >=18){
    cout << "eres mayor de edad";
   }
    return 0;
}