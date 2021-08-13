
#include "functions.h"

int menor(int v[], int n){
  int menor;
  for(int i; i < n; i++){
    if(i == 0){
      menor = v[0];
    }
    else{
      if(v[i] < menor){
        menor = v[i];
      }
    }
  }
  return menor;
}
