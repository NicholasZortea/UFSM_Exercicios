#include<stdio.h>
#include"libGeral.h"

/*6. Fazer um programa que leia os elementos de uma matriz inteira de ordem 5 (ou seja 5x5) e escreva os elementos
da matriz, que estão acima da diagonal secundária (triângulo superior).*/
void printaAcimaDiagonalSecundaria(int linhas, int colunas, int matriz[linhas][colunas]){
	int valor = 3;
	for(int i = 0; i<linhas; i++){
		for(int j = 0; j <= valor; j++){
			printf("%d \t", matriz[i][j]);
		}
		printf("\n");
		valor--;
	}	
}


int main(){
	int matriz[5][5];
	preencheMatrizRandInteira(5,5,matriz);
	printaMatrizInteira(5,5,matriz);
	printaAcimaDiagonalSecundaria(5,5,matriz);


	return 0;
}
