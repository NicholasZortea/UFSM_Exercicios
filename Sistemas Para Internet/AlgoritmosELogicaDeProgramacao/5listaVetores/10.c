#include<stdio.h>
#include"libGeral.h"

/*10. Fa�a um algoritmo para ler os valores gastos em cheque por uma pessoa durante um m�s, e depois
imprimir: a lista com todos os valores, o maior valor, o menor valor e a m�dia de todos os valores. No
in�cio do algoritmo o usu�rio deve informar o n�mero de cheques usados e passa-lo por par�metro para
uma fun��o para realizar os c�lculos.*/
void calculaInformacoesCheques(float chequesVetor[], int QtdChequesUsados);
int main(){
    int QtdChequesUsados;
    printf("Digite quantos cheques foram utilizados\n");
    scanf("%d", &QtdChequesUsados);
    float chequesVetor[QtdChequesUsados];

    printf("Digite os valores dos cheques usados: \n");
    leValoresVetorFloat(chequesVetor, QtdChequesUsados);

    printf("Todos os valores lidos foram: \n");
    printaValoresVetorFloat(chequesVetor, QtdChequesUsados);
    calculaInformacoesCheques(chequesVetor, QtdChequesUsados);

    return 0;
}

void calculaInformacoesCheques(float chequesVetor[], int QtdChequesUsados){
    float maiorGasto = 0;
    float menorGasto = 0;
    float somaDosGastos = 0;

    for(int i=0; i<QtdChequesUsados; i++){

        if(chequesVetor[i]>maiorGasto){//maior gasto dentro do vetor dos cheques
            maiorGasto = chequesVetor[i];
        }

        if(chequesVetor[i]<menorGasto || menorGasto == 0){
            menorGasto = chequesVetor[i];
        }
        somaDosGastos += chequesVetor[i];
    }
        float mediaDosGastos = somaDosGastos / QtdChequesUsados;
        printf("\no maior valor gasto foi R$%.2f\n", maiorGasto);
        printf("O menor valor gasto foi R$%.2f\n", menorGasto);
        printf("A media dos gastos com os cheques foram: R$%.2f", mediaDosGastos);
}
