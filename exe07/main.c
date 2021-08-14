#include <stdio.h>
#include "functions.h"

int main(void) {
  int a, b, s;
  scanf("%d %d", &a, &b);
  s = mdc(a, b);
  printf("MDC = %d", s); 
  return 0;
}