#include<stdio.h>
#include"libGeral.h"

/*9. Desenvolva um algoritmo com uma função que contenha um vetor de N elementos. O conteúdo das
posições pares deve ser ‘P’ e das posições ímpares deve ser ‘I’. A inserção dos elementos deve ser feita
automaticamente. Depois, apresente o resultado na tela.*/
void preencheVetorChar(char vetor[],int tamanhoVet);
void printaVetorChar(char vetor[],int tamanhoVet);
int main(){
    int tamanhoVet;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tamanhoVet);
    char vetor[tamanhoVet];

    preencheVetorChar(vetor, tamanhoVet);
    printaVetorChar(vetor, tamanhoVet);


    return 0;
}


void preencheVetorChar(char vetor[], int tamanhoVet){
    for(int i = 0; i< tamanhoVet; i++){
        if(i%2==0){
            vetor[i]='P';
        } else{
            vetor[i]='I';
        }
    }
}

void printaVetorChar(char vetor[], int tamanhoVet){
    for(int i =0; i< tamanhoVet; i++){
        printf("na posicao %d eh: %c\n", i, vetor[i]);
    }


}
