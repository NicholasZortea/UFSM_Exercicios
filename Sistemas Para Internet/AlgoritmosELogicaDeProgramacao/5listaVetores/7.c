#include<stdio.h>
#include"libGeral.h"

/*7. Faça um algoritmo com uma função para criar um vetor de 20 posições. As primeiras 10 posições são
valores informados pelo usuário, as últimas 10 posições deverão ter valores que obedecem a seguinte
regra: os valores de posições ímpares da primeira metade deverão ser acrescidos de 5 % na segunda
metade. E, os valores pares da primeira metade deverão ser acrescidos de 2% na segunda metade. Ex.:
Vet[0] = 10, logo, Vet[10] = 10 + 2%.
*/
int main(){
    float vetor[20];
    printf("preencha as primeiras 10 posicoes do vetor: \n");
    leValoresVetorFloat(vetor, 10);
    for(int i = 10; i<20; i++){
        //posicoes impares
        if((i-10) % 2 != 0){
            //acrescimo de 5%
            vetor[i] = vetor[i-10] + vetor[i-10]*0.05;
        } else if((i-10) % 2 == 0){
            //acrescimo de 2%
            vetor[i]= vetor[i-10] + vetor[i-10]*0.02;
        }
    }

    printaValoresVetorFloat(vetor, 20);


    return 0;
}
