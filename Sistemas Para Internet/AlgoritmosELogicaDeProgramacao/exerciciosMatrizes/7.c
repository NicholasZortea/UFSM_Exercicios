#include<stdio.h>
#include"libGeral.h"
/*7. Criar uma matriz 3x4 onde cada elemento é a soma dos índices da sua posição dentro da matriz.*/

void preencheMatrizSomaIndices(int linhas, int colunas, int matriz[linhas][colunas]){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			matriz[i][j] = i+j;
		}
	}
}

int main(){
	int matriz[3][4];
	preencheMatrizSomaIndices(3,4,matriz);
	printaMatrizInteira(3,4,matriz);

	return 0;
}
