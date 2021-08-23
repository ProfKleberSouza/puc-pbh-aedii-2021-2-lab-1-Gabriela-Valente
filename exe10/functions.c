#include <stdio.h>
#include <stdlib.h>

void tabela_recursiva(int* tabela, int pos, int fim) {
	int i;
	if(fim == pos) {
		for(i = 0; i < fim; i++) {
			if(tabela[i])
				printf("1");
			else
				printf("0");
		}
		printf("\n");
		return;
	}
	tabela[pos] = 0;
	tabela_recursiva(tabela, pos+1, fim);
	tabela[pos] = 1;
	tabela_recursiva(tabela, pos+1, fim);
}

void tabela_verdade(int d){
  int *tabela;
  tabela = (int*)malloc(d*sizeof(int));
  tabela_recursiva(tabela, 0, d);
  free(tabela);
}