#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {
  int n;
  char vet[n];
  scanf("%[^\n]", vet);
  n = strlen(vet);
  numero_vogais(vet);
}