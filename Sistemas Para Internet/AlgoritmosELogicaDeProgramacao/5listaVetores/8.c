#include<stdio.h>
#include"libGeral.h"

/*8. Construa um algoritmo para ler 2 vetores reais de N posições e enviá-los por parâmetro para uma função.
Depois esta função deve criar um terceiro vetor cujo conteúdo de cada posição é: 1, se o número
armazenado em uma posição do 1º vetor é o mesmo armazenado na posição respectiva do 2º vetor, e 0,
se não for o mesmo*/

comparaVetoresECriarVetor(float vetorA[], float vetorB[], int tamanhoDosVetores);

int main(){
    printf("Informe o tamanho dos vetores: \n");
    int tamanhoDosVetores=leInteiro();
    float vetorA[tamanhoDosVetores];
    float vetorB[tamanhoDosVetores];

    printf("Digite os %d valores para o vetor A: \n", tamanhoDosVetores);
    leValoresVetorFloat(vetorA, tamanhoDosVetores);

    printf("Digite os %d valores para o vetor B: \n", tamanhoDosVetores);
    leValoresVetorFloat(vetorB, tamanhoDosVetores);

    printf("Os valores do primeiro vetor sao: \n");
    printaValoresVetorFloat(vetorA, tamanhoDosVetores);

    printf("\nOs valores do segundo vetor sao:\n");
    printaValoresVetorFloat(vetorB, tamanhoDosVetores);
    comparaVetoresECriarVetor(vetorA, vetorB, tamanhoDosVetores);


    return 0;
}

comparaVetoresECriarVetor(float vetorA[], float vetorB[],int tamanhoDosVetores){
float terceiroVetor[tamanhoDosVetores];

for(int i=0; i<tamanhoDosVetores; i++){
    if(vetorA[i]==vetorB[i]){
        terceiroVetor[i]=1;
    } else if(vetorA[i]!=vetorB[i]){
        terceiroVetor[i]=0;
    }
}

printf("\nValores do terceiro vetor: \n");
printaValoresVetorFloat(terceiroVetor, tamanhoDosVetores);
}
