#include<stdio.h>
#include"libGeral.h"

/*11. Fa�a um algoritmo que leia um vetor de N elementos e passe-o por par�metro para uma fun��o. Esta
fun��o dever� modificar o vetor de modo que o primeiro elemento passe para a �ltima posi��o,
deslocando todos os outros para uma posi��o � esquerda. Imprima o vetor modificado.
                 0  1  2  3 4 5  6  7   8  9
Exemplo: Antes: 12 35 25 14 1 85 10 110 44 996
         0  1  2  3 4  5   6  7  8    9
 Depois: 35 25 14 1 85 10 110 44 996 12
 */
void alteraVetor(int vetor[], int tamanhoVetor);

int main()
{
    int tamanhoVetor;
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    leValoresVetorInteiro(vetor, tamanhoVetor);

    printf("Vetor antes de ser alterado: \n");
    printaValoresVetorInteiro(vetor, tamanhoVetor);
    alteraVetor(vetor, tamanhoVetor);//altera o valor
    printf("\nVetor apos alteracao: \n");
    printaValoresVetorInteiro(vetor, tamanhoVetor);

    return 0;
}

void alteraVetor(int vetor[], int tamanhoVetor)
{
    int vetorAux[tamanhoVetor];
    for(int i = 0; i< tamanhoVetor; i++){
        vetorAux[i] = vetor[i];
    }
    for(int i=0; i<(tamanhoVetor-1); i++){
        vetor[i]=vetorAux[i+1];
    }
    vetor[tamanhoVetor-1] = vetorAux[0];
}
