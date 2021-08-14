#include <stdio.h>
#include "functions.h"

int potencia(int x, int n){
  int result = 0;
  for(int i = 0; i < n; i++){
    if(i == 0){
      result = x;
    }
    else{
      result = result*x;
    }
  }
  return result;
}
