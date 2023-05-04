#include<stdio.h>

///funcoes para inteiros///
int leInteiro(){
	int x;
	scanf("%d", &x);
	return x;
}

void printaValoresVetorInteiro(int vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("O valor da posicao %d eh: %d \n",i, vetor[i]);
	}
}

//o tamanho deve ser o mesmo da declaração do vetor ex: int vetor[5] || tamanho = 5
void leValoresVetorInteiro(int vetor[], int tamanho){
	for(int i =0; i<tamanho; i++){
		vetor[i]=leInteiro();
	}
}
///Fim das funcoes para inteiros///



///funcoes para float///
float leFloat(){
	float x;
	scanf("%f", &x);
	return x;
}

//o tamanho deve ser o mesmo da declaração do vetor ex: int vetor[5] || tamanho = 5
void leValoresVetorFloat(float vetor[], int tamanho){
	for(int i =0; i<tamanho; i++){
		vetor[i]=leFloat();
	}
}

void printaValoresVetorFloat(float vetor[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		printf("O valor da posicao %d eh: %.2f \n",i, vetor[i]);
	}
}
///Fim das funcoes para floats///
