#include<stdio.h>
#include"libGeral.h"

/*1. Desenvolver um programa com uma fun��o para ler 15 n�meros, armazen�-los em um vetor e mostrar o
total de n�meros digitados maiores que 5.
*/
int main(){
    int tamanhoVetor =15;
    int counterMenorQue5 = 0;
    int vetor[tamanhoVetor];
    leValoresVetorInteiro(vetor, tamanhoVetor);

    for(int i=0; i<tamanhoVetor; i++){
        if(vetor[i] < 5){
            counterMenorQue5++;
        }
    }

    printf("O total de valores menores que 15 eh: %d \n", counterMenorQue5);
    return 0;
}
