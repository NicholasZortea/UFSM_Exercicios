#include<stdio.h>
#include"libGeral.h"

/*11. Ler duas matrizes A e B 4x5. A matriz A deve ser formada por valores que sejam divisíveis por 3 e 4, enquanto a
matriz B deve ser formada por valores que sejam divisíveis por 5 e 6. As entradas dos valores nas matrizes devem
ser validadas pelo programa e não pelo usuário. Construir e apresentar uma matriz C de mesma dimensão que
contenha a subtração dos elementos da matriz A e B.*/

void preencheMatrizComDivisiveisPorXeX(int x1, int x2, int matriz[4][5]){
	for(int i = 0; i< 4; i++){
		for(int j = 0; j< 5; j++){
			int x = 0;
			while(x==0){
				int valorAleatorio = rand()%100;
				if(valorAleatorio%x1 == 0 && valorAleatorio%x2==0 && valorAleatorio!=0){
					matriz[i][j]=valorAleatorio;
					x=1;
				}
			}
		}
	}
}

void subtracaoDeAeBemC(int matrizA[4][5], int matrizB[4][5], int matrizC[4][5]){
	for(int i = 0; i<4; i++){
		for(int j=0; j<5; j++){
			matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
		}
	}
}


int main(){
	srand(time(NULL));
	
	int matrizA[4][5];
	preencheMatrizComDivisiveisPorXeX(3,4,matrizA);
	printaMatrizInteira(4,5,matrizA);
	
	int matrizB[4][5];
	preencheMatrizComDivisiveisPorXeX(5,6,matrizB);
	printf("\n");
	printaMatrizInteira(4,5,matrizB);
	
	int matrizC[4][5];
	subtracaoDeAeBemC(matrizA,matrizB,matrizC);
	printf("\n");
	printaMatrizInteira(4,5,matrizC);
	
	return 0;
}
