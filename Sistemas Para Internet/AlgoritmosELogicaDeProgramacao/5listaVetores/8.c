#include<stdio.h>
#include"libGeral.h"

/*8. Construa um algoritmo para ler 2 vetores reais de N posi��es e envi�-los por par�metro para uma fun��o.
Depois esta fun��o deve criar um terceiro vetor cujo conte�do de cada posi��o �: 1, se o n�mero
armazenado em uma posi��o do 1� vetor � o mesmo armazenado na posi��o respectiva do 2� vetor, e 0,
se n�o for o mesmo*/

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
