#include <iostream>
using namespace std;

float nthpower(float base, float expoente){
  float resultado = 1;
  for (int i = 1; i <= expoente; ++i){
    resultado *= base;
  }
  return resultado;
}

// this piece of shit can succesfully convert decimal to fractions
int main(){
  float expoente = 0.523, expoenteRefresh;
  int TenPowerTracker = 1, Ten, expoenteCheck = expoente, i = 1;
  expoenteRefresh = expoente;
  for (;expoenteCheck != expoente; ++i){
    TenPowerTracker = i;
    expoente = expoenteRefresh;
    Ten = nthpower(10, TenPowerTracker);
    expoente = expoente * Ten;
    expoenteCheck = expoente;
 }
  cout << expoente << " " << expoenteCheck << " " << TenPowerTracker << " " << Ten << " BB" << endl;
  return 0;
}
