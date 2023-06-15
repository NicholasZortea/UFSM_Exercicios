#include<stdio.h>

int leInteiro(){
	int x;
	scanf("%d", &x);
	return x;
}

void printaValoresVetorInteiro(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("Os valores sao: %d \n", vetor[i]);
	}
}

void leValoresVetorInteiro(int vetor[], int tamanho){
	for(int i =0; i<tamanho; i++){
		vetor[i]=leInteiro();
	}
}

void preencheMatrizRandInteira(int linhas, int colunas, int matriz[linhas][colunas]){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			matriz[i][j] = rand()%10;
		}
	}
}

void preencheMatrizRandReal(int linhas, int colunas, float matriz[linhas][colunas]){
    for(int i = 0; i< linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand()%20;
        }
    }
}

void printaMatrizReal(int linhas, int colunas, float matriz[linhas][colunas]){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			printf("%.2f ", matriz[i][j]);
		}
		printf("\n");
	}
}

void printaMatrizInteira(int linhas, int colunas, int matriz[linhas][colunas]){
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
