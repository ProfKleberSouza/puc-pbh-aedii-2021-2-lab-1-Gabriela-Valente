#include <stdio.h>
#include "functions.h"

int main() {
  int a, b, s;
  scanf("%d %d", &a, &b);
  s = potencia(a, b);
  printf("%d\n", s);
  return(0);
}