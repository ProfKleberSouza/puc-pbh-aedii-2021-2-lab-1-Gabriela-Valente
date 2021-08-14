#include <stdio.h>
#include <string.h>
#include "functions.h"

int main(void) {
  int n;
  char vet[n];
  n = strlen(vet);
  scanf("%[^\n]", vet);
  inverte(vet);
  return 0;
}