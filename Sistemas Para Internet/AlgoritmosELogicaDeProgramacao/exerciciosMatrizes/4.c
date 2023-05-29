#include<stdio.h>
#include"libGeral.h"

/*4. Faça um algoritmo que receba os valores para uma matriz 2x3, gere e imprima uma matriz transposta. A matriz
transposta é gerada trocando a linha pela coluna.
*/

void criaMatrizTransposta(int linhas, int colunas, int matriz[linhas][colunas]){
    int matrizTransposta[colunas][linhas];

    for(int i = 0; i < colunas; i++){//colunas
        for(int j = 0; j < linhas; j++){//preenche alternando as linhas e nao colunas
            matrizTransposta[i][j] = matriz[j][i];
        }
    }
    printf("Matriz transposta: \n");
    printaMatrizInteira(colunas, linhas, matrizTransposta);

}

int main(){
    int linhas = 2, colunas = 3;

    int matriz[linhas][colunas];
    preencheMatrizRandInteira(linhas, colunas, matriz);
    printaMatrizInteira(linhas, colunas, matriz);
    criaMatrizTransposta(linhas, colunas, matriz);



    return 0;
}
