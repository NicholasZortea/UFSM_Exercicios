#include<stdio.h>
#include"libGeral.h"

/*4. Desenvolver um algoritmo com uma função que leia dois vetores, sendo a primeiro com 5 elementos e o
segundo com 8 elementos. Construir um terceiro vetor que armazene a junção dos dois primeiros vetores
e mostre os valores na tela. Assim, o terceiro vetor deve ter 13 posições. */
void juntaVetoresEmUmTerceiro(int vetorEnviado[]);
int main(){
    int vetorSoma[13];
    juntaVetoresEmUmTerceiro(vetorSoma);


    return 0;
}

void juntaVetoresEmUmTerceiro(int vetorEnviado[]){
    int vetorA[5];
    int vetorB[8];

    printf("Digite os valores do vetor A:\n");
    leValoresVetorInteiro(vetorA, 5);

    printf("Digite os valores do vetor B: \n");
    leValoresVetorInteiro(vetorB, 8);

    for(int i = 0; i < 13; i++){
        if(i < 5){
            vetorEnviado[i] = vetorA[i];
        }
        else if(i >=5){
            vetorEnviado[i] = vetorB[i-5];
        }
    }
    printf("Valores do primeiro vetor: \n");
    printaValoresVetorInteiro(vetorA, 5);

    printf("\nValores do segundo vetor: \n");
    printaValoresVetorInteiro(vetorB, 8);

    printf("\nValores dos dois vetores em um terceiro vetor: \n");
    printaValoresVetorInteiro(vetorEnviado, 13);


}
