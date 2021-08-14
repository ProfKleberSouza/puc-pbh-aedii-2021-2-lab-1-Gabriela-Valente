#include <string.h>
#include <stdio.h>
#include "functions.h"

void inverte(char texto[]){
  int n = strlen(texto);
  char aux;
  for(int i = 0, j = n-1; i < n/2; i++, j--){
    aux = texto[i];
    texto[i] = texto[j];
    texto[j] = aux;
  }
  printf("%s\n", &texto[0]);
}

