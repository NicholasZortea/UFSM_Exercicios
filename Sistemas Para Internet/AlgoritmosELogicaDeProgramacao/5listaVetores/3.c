#include<stdio.h>
#include"libGeral.h"


/*3. Escrever um programa com uma função que leia N números reais, armazene-os em um vetor e imprimaos na ordem inversa.*/
int main(){
    int tamanhoVetor;
    printf("Digite o tamanho do vetor: \n");
    tamanhoVetor = leInteiro();

    float vetor[tamanhoVetor];
    printf("Digite os valores do vetor: \n");
    leValoresVetorFloat(vetor, tamanhoVetor);
    for(int i = tamanhoVetor-1; i >=0; i--){
        printf("Valor do vetor na pos %d eh: %.2f \n", i, vetor[i]);
    }


    return 0;
}
