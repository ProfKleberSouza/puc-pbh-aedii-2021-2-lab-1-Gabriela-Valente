#include <stdio.h>
#include "functions.h"

int main() {
  int n, menor, maior;
  scanf("%d", &n);
  int vet[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
  menor_maior(vet, n, &menor, &maior);
  printf("MENOR = %d\n", menor);
  printf("MAIOR = %d\n", maior);
}