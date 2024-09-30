#include <iostream>
using namespace std;


// this function identifies a negative number
void FunctionIsNegative(float expoente, int* IsNegativeAnchor, float* expoenteAnchor){
if (expoente<0){
  *IsNegativeAnchor = 1;
  expoente *= (-1);
  }
  else {*IsNegativeAnchor = 0;
  }
  *expoenteAnchor = expoente;

}


// this function identifies a float number
float FunctionIsDecimal(float expoente){
  int expoenteCheck = expoente, IsDecimal;
if (expoente!=expoenteCheck){
  IsDecimal = 1;
  }
  else {IsDecimal = 0;}
  return IsDecimal;
}


//this function gives you the nth (integer) power of any given number
float nthpower(float base, float expoente){
  float resultado = 1;
  for (int i = 1; i <= expoente; ++i){
    resultado *= base;
  }
  return resultado;
}


//this funtion gives the GCD of a fraction
int FunctionMDC(int numerador, int denominador){
int mdc, n2;
mdc = numerador;
n2 = denominador;
while(mdc != n2){
  if (mdc > n2) {mdc -= n2;}
  else {n2 -= mdc;}
  }
  return mdc;
}


// this function can succesfully find the nth root of a given number
long double nthroot(long double indice, long double radicando){
  long double resultado, chutebase = 0;
  for (;resultado != radicando; chutebase += 0.01){
    resultado = chutebase;
    for (int i = 1; i < indice; i++){
          resultado *= chutebase;
        }
        if ((radicando - resultado) <= 0.02){
          break;
        }
      }
      return chutebase;
}


// this function can succesfully convert decimal to fractions
void decimal2fraction(float expoente,float* expoenteAnchor, int* TenAnchor){
  float expoenteRefresh;
  int TenPowerTracker = 1, Ten, expoenteCheck = expoente, i = 1;
  expoenteRefresh = expoente;
  for (;expoenteCheck != expoente; ++i){
    TenPowerTracker = i;
    expoente = expoenteRefresh;
    Ten = nthpower(10, TenPowerTracker);
    expoente = expoente * Ten;
    expoenteCheck = expoente;
 }
  *expoenteAnchor = expoenteCheck;
  *TenAnchor = Ten;

}

int main(){
  float expoente, base;
  float expoenteIndex;
  int BisDecimal, isNegativeIndex, TenIndex;
  long double nthroot1;
  int numerador, denominador, mdc;
  float resultado;


  cout << "digite o expoente" << endl;
  cin >> expoente;
  cout << "digite a base" << endl;
  cin >> base;


  FunctionIsNegative(expoente, &isNegativeIndex, &expoenteIndex);
  expoente = expoenteIndex;
  BisDecimal = FunctionIsDecimal(expoente);
    if(BisDecimal == 0){
      resultado = nthpower(base, expoente);
    }
        else {
          decimal2fraction(expoente, &expoenteIndex, &TenIndex);
          numerador = expoenteIndex;
          denominador = TenIndex;
          mdc = FunctionMDC(numerador, denominador);
          numerador = numerador/mdc;
          denominador = denominador/mdc;
          base = nthpower(base, numerador);
          resultado = nthroot(denominador, base);
        }
        if (isNegativeIndex == 1){cout << "1/" << resultado;
      }
      else {cout << "resultado = " << resultado;
      }
        return 0;
      }
