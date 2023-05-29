#include<stdio.h>
#include"libGeral.h"

/*9. A empresa Pregotex Inc. possui uma tabela para representar as vendas dos seus produtos (em barris) durante o
ano. Cada linha representa um produto e as colunas são os meses do ano. Veja o exemplo:*/
void verificaVendasAnual(int linhas, int colunas, float matriz[linhas][colunas]){
	for(int i = 0; i< linhas; i++){
		float VendaProdutoAnual = 0;
		for(int j = 0; j < colunas; j++){
			VendaProdutoAnual += matriz[i][j];
		}
		switch(i){
			case 0:
				printf("O valor de pregos vendidos no ano foi: R$%.2f%2f \n", VendaProdutoAnual);
				break;
			case 1: 
			printf("O valor de porcas vendidas no ano foi: R$%.2f%2f \n", VendaProdutoAnual);
				break;
			case 2:
			printf("O valor de parafusos vendidos no ano foi: R$%.2f%2f \n", VendaProdutoAnual);
				break;
		}
	}
}

void verificaVendasMes(int linhas, int colunas, float matriz[linhas][colunas]){
	for(int i = 0; i < colunas; i++){
		float valorVendaMensal = 0;
		for(int j = 0; j < linhas; j++){
			valorVendaMensal += matriz[j][i];
		}
		printf("O valor de vendas no mes %d foi igual ah: R$%.2f\n", i+1, valorVendaMensal);
	}
}

int main(){
	int produtos = 3;
	int meses = 12;
	float matriz[produtos][meses];
	preencheMatrizRandReal(produtos,meses,matriz);
	printaMatrizReal(produtos,meses,matriz);
	printf("\n");
	verificaVendasAnual(produtos, meses, matriz);
	printf("\n");
	verificaVendasMes(produtos, meses, matriz);
	


	return 0;
}
