#include <stdio.h>
#include "functions.h"

int main() {

  int n, vet[n], s;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }

  s = menor(vet, n);

  printf("MENOR = %d\n", s);

  return(0);
}