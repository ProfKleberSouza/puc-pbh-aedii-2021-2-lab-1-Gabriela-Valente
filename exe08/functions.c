#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "functions.h"

bool isPal(char str[], int i, int j){
  if(i == j)
    return true;
  if(str[i] != str[j])
    return false;
  if(i < j + 1)
    return isPal(str, i + 1, j - 1);
  return true;
}

bool is_palindromo(char texto[]){
  int n = strlen(texto);
  if(n == 0)
    return true;
  return isPal(texto, 0, n - 1);
}