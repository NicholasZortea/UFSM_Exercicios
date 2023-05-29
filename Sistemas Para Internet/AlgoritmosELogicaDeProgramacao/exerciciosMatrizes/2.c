#include<stdio.h>
#include"libGeral.h"

/*2. Ler uma matriz 4x3 com valores reais e mostrar qual é o elemento armazenado em uma linha L e coluna C
fornecidas pelo usuário.*/

void mostraValorSelecionado(int linha, int coluna, float matriz[3][4]){
    printf("o valor na linha %d e coluna %d eh: %.2f", linha, coluna, matriz[linha][coluna]);


}

int main(){
    float matriz[3][4];
    preencheMatrizRandReal(3,4,matriz);
    printaMatrizReal(3,4,matriz);
    printf("digite a linha e coluna que deseja ver o valor dentro da matriz: \n");
    int linha = leInteiro();
    int coluna = leInteiro();
    mostraValorSelecionado(linha, coluna, matriz);



    return 0;
}
