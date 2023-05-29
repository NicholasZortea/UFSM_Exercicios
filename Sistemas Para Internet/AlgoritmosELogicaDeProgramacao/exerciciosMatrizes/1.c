#include<stdio.h>
#include"libGeral.h"
/*1. Ler uma matriz A de ordem 5 e construir uma matriz B de mesma dimensão, onde cada elemento de B deve ser o
dobro de cada elemento correspondente da matriz A, com exceção para os valores situados na diagonal principal os
quais devem ser o triplo de cada elemento correspondente a A. Apresentar a matriz B.*/
void precheMatrizComDobro(int linhas, int colunas, int matrizOrigem[linhas][colunas], int matrizDestino[linhas][colunas]){
	for(int i = 0 ; i < linhas ; i++){
		for(int j = 0; j < colunas; j++){
			int valor = matrizOrigem[i][j] * 2;
			matrizDestino[i][j] = valor;
		}
	}
}

int main(){
	int linhas = 5;
	int colunas = 5;
	int matrizA[linhas][colunas];
	int matrizB[linhas][colunas];
	
	preencheMatrizInteira(linhas, colunas, matrizA);// em libGeral.h
	printaMatrizInteira(linhas,colunas, matrizA);// em libGeral.h
	precheMatrizComDobro(linhas, colunas, matrizA, matrizB);
	printf("Matriz com o dobro: \n");
	printaMatrizInteira(linhas,colunas, matrizB);
	return 0;
}
