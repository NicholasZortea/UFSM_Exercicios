#include<stdio.h>
#include"libGeral.h"

/*2. Crie um programa com uma função que leia 5 elementos de um vetor A. Construir um vetor B de mesmo
tipo, observando a seguinte lei de formação: Todo elemento de B deve ser o quadrado do elemento de A
correspondente. Apresentar os 2 vetores.
*/
int main(){
    int tamanhoVetores = 5;
    int vetorA[tamanhoVetores];
    int vetorB[tamanhoVetores];

    leValoresVetorInteiro(vetorA, tamanhoVetores);

    for(int i =0; i<tamanhoVetores; i++){
        vetorB[i] = vetorA[i] * vetorA[i];
    }

    printf("Vetor A: \n");
    printaValoresVetorInteiro(vetorA,tamanhoVetores);
    printf("\nVetor B: \n");
    printaValoresVetorInteiro(vetorB, tamanhoVetores);


    return 0;
}

