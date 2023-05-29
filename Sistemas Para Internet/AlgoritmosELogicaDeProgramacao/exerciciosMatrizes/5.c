#include<stdio.h>
#include"libGeral.h"

/*5. Criar um programa que possa armazenar as alturas de dez atletas de 5 delegações que participarão das olimpíadas
e imprima a maior altura de cada delegação.*/
void armazenaAlturas(){
	float matriz[5][10];
	preencheMatrizRandReal(5,10,matriz);
	printaMatrizReal(5,10,matriz);
	verificaMaiorAltura(5,10,matriz);
	
}

void verificaMaiorAltura(int linhas, int colunas, float matriz[linhas][colunas]){
	
	for(int i = 0; i<linhas; i++){
		float maiorAltura = 0;	
		for(int j = 0; j< colunas; j++){
			if(maiorAltura<matriz[i][j]){
				maiorAltura = matriz[i][j];
			}
		}
		printf("Maior altura dessa delegacao eh: %.2f \n", maiorAltura);
	}
}

int main(){
	srand(time(NULL));
	armazenaAlturas();
	return 0;
}
