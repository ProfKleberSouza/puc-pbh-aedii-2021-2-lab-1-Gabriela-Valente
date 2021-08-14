
#include "functions.h"

int mdc(int x, int y){
  if(x >= y && (x % y) == 0)
    return y;
  else if(x < y)
    return mdc(y, x);
  else
    return mdc(y, (x % y));
}