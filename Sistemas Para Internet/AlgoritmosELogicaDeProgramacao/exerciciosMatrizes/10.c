#include<stdio.h>
#include"libGeral.h"
/*10. Faça um programa para ler dois vetores A e B de 5 elementos cada. Depois construa uma matriz C de 2 dimensões,
em que a primeira coluna deve ser formada pelos elementos do vetor A e a segunda coluna formada pelos
elementos do vetor B. Apresentar a matriz C*/
void preencheMatrizComVetores(int vetorA[], int vetorB[], int matriz[2][5]){
	for(int i = 0; i < 2; i++){
		for(int j = 0 ; j< 5; j++){
			if(i==0){
				matriz[i][j]=vetorA[j];
			}else{
				matriz[i][j]=vetorB[j];
			}
		}
	}
}

int main(){
	int vetorA[5];
	int vetorB[5];
	int matriz[2][5];
	preencheVetorInteiro(vetorA,5);
	preencheVetorInteiro(vetorB,5);
	printaValoresVetorInteiro(vetorA,5);
	printf("\n");
	printaValoresVetorInteiro(vetorB,5);
	printf("\n");
	preencheMatrizComVetores(vetorA, vetorB, matriz);
	printaMatrizInteira(2,5,matriz);

	return 0;
}
