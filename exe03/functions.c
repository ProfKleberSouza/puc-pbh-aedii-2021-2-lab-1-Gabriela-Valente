
#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){
  for(int i = 0; i < n; i++){
    if(i == 0){
      *menor = v[0];
      *maior = v[0];
    }
    else{
      if(v[i] > *maior){
        *maior = v[i];
      }
      if(v[i] < *menor){
        *menor = v[i];
      }
    }
  }
}
