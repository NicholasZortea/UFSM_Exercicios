#include<stdio.h>
#include"libGeral.h"

/*5. Criar um programa com uma função que leia os N valores de um vetor do tipo inteiro e, então, construir
um segundo vetor de mesma dimensão, sendo que cada elemento do segundo vetor é o somatório do
elemento correspondente no primeiro. Ex.: VetA[0] = 5; logo, VetB[0] = 15 (1 + 2 + 3 + 4 + 5 = 15).*/

int main(){
    printf("Digite o tamanho do primeiro vetor: \n");
    int tamanhoVetor = leInteiro();
    int primeiroVetor[tamanhoVetor];
    leValoresVetorInteiro(primeiroVetor, tamanhoVetor);

    int segundoVetorSomatorio[tamanhoVetor];
    int somatorio = 0;
    for(int i=0; i<tamanhoVetor; i++){
        for(int j = 0; j<= primeiroVetor[i]; j++){
            somatorio += j;
        }
        segundoVetorSomatorio[i] = somatorio;
        somatorio = 0;
    }

    printf("Valores do primeiro vetor: \n");
    printaValoresVetorInteiro(primeiroVetor, tamanhoVetor);
    printf("\nValores do segundo vetor(somatorio do primeiro): \n");
    printaValoresVetorInteiro(segundoVetorSomatorio, tamanhoVetor);


    return 0;
}
