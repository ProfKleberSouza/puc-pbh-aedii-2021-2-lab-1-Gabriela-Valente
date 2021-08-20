#include <stdio.h>
#include <string.h>
void placar_possiveisRec(char placar[], int m, int n, int pos){
  
  if(m == 0 && n == 0){
    placar[pos] = '\0';
    printf("%s\n", placar);
  }
  else{
    if(m > 0){
      placar[pos] = 'A';
      placar_possiveisRec(placar, m - 1, n, pos+1);

    }
     
     if(n > 0){
      placar[pos] = 'B';
      placar_possiveisRec(placar, m, n - 1, pos+1);
    }
     
  }
}
void placar_possiveis(int m, int n){
  char placar[100];
  placar_possiveisRec(placar, m, n, 0);
  
}