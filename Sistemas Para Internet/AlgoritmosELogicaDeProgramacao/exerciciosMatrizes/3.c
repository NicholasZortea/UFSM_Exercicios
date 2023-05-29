#include<stdio.h>
#include"libGeral.h"
#include<time.h>

/*
3. Desenvolva um algoritmo que leia os elementos de uma matriz A de ordem 4 (4x4) e também de uma matriz B de
mesma ordem, gere e imprima uma matriz C com a soma dos elementos de A com B.
*/

void somaMatrizesEPreencheMatriz(int matrizA[4][4], int matrizB[4][4], int matrizC[4][4]){
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            int somaDasMatrizes = matrizA[i][j] + matrizB[i][j];
            matrizC[i][j] = somaDasMatrizes;
        }
    }


}

int main(){
    srand(time(NULL));
    int matrizA[4][4];
    int matrizB[4][4];
    int matrizC[4][4];

    preencheMatrizRandInteira(4,4,matrizA);
    preencheMatrizRandInteira(4,4,matrizB);

    printf("Matriz A preenchida: \n");
    printaMatrizInteira(4,4,matrizA);

    printf("\nMatriz B preenchida: \n");
    printaMatrizInteira(4,4,matrizB);

    somaMatrizesEPreencheMatriz(matrizA, matrizB, matrizC);
    printf("\nSoma das matrizes A e B em C:\n");
    printaMatrizInteira(4,4,matrizC);




    return 0;
}
