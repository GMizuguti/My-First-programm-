#include <iostream>
using namespace std;
// this piece of shit can succesfully find the nth root of a given number
int main (){
long double indice = 3, resultado = 0, radicando = 27, chutebase = 0;
for (;resultado != radicando; chutebase += 0.01){
  resultado = chutebase;
  for (int i = 1; i < indice; i++){
        resultado *= chutebase;
      }
      if ((radicando - resultado) <= 0.02){
        break;
      }
      cout << resultado << endl;
    }
  //  cout << resultado;
}
