#include<stdio.h>
#include"libGeral.h"
/*8. Faça um algoritmo para ler duas matrizes reais A e B de ordem 5, e criar uma matriz C de modo que: cij = 1, se a ij da
matriz A existe em algum lugar na matriz B; cij = 0, se a ij da matriz A não existir em B.*/

void verificaValoreseCriaMatriz(int l, int c, float matrizA[l][c],float matrizB[l][c], int matrizC[l][c]){
	for(int i = 0; i < l; i++){
		for(int j = 0; j < c; j++){
			matrizC[i][j]=0;
		}
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			for(int k = 0; k < 5; k++){
				for(int l = 0; l < 5; l++){
					if(matrizA[i][j] == matrizB[k][l]){
						matrizC[i][j] = 1;
					}
				}
			}
			
		}
	}
}

int main(){
	srand(time(NULL));
	float matrizA[5][5];
	float matrizB[5][5];
	int matrizC[5][5];
	preencheMatrizRandReal(5,5,matrizA);
	preencheMatrizRandReal(5,5,matrizB);
	verificaValoreseCriaMatriz(5,5,matrizA,matrizB,matrizC);
	
	printaMatrizReal(5,5,matrizA);
	printf("\n");
	printaMatrizReal(5,5,matrizB);
	printf("matriz C: \n\n");
	printaMatrizInteira(5,5,matrizC);

	return 0;
}
