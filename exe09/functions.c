#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void troca(char* a, char* b){
  char aux = *a;
  *a = *b;
  *b = aux;
}
  
// Essa função acha o ídice do menor caracter que é maior que o primeiro da string[l...h]
int acha_indice(char str[], char primeiro, int tamI, int tamF){
  int Indice = tamI;
  for (int i = tamI + 1; i <= tamF; i++){
    if (str[i] > primeiro && str[i] < str[Indice]){
      Indice = i;
    }
  }
  return Indice;
}
  
void imprime(char str[]){
  int tam = strlen(str);
  bool isFinished = false;
  while (!isFinished) {
    printf("%s\n", str);
    int i;
    //verifica o menor caracter que tem a sua direita um maior
    for (i = tam - 2; i >= 0; --i){
      if (str[i] < str[i + 1])
        break;
    }
    //caso contrario esta em ordem decrescente
    if (i == -1)
      isFinished = true;
    else {
      // acha o ídice do menor caracter que é maior que o primeiro da string
      int Indice = acha_indice(str, str[i], i + 1, tam - 1);
      // troca primeiro e o segundo caracter
      troca(&str[i], &str[Indice]);
    }
  }
}

  void placar_possiveis(int m, int n){
  int x = 0;
  char vet[x];
  x = m + n;
  for(int i = 0; i < x; i++){
    if(i < m){
      vet[i] = 'A';
    }
    else{
      vet[i] = 'B';
    }
  }
  
  imprime(vet);
  printf("\n");
}