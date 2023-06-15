#include<stdio.h>
#include"libGeral.h"
#include<string.h>

/*7. Desenvolva um programa que calcule o pre�o de venda, pre�o de custo e valor da taxa de
entrega de uma floricultura.
Para isso, deve-se saber: o tipo de flor (rosa, margarida ou floresdo campo),
 a quantidade vendida,
 o pre�o unit�rio,
 e se haver� embalagem para presente (Sim ou N�o).

O pre�o de custo ser� a quantidade de flores vezes o pre�o unit�rio.

A taxa de entrega ser� de 5% sobre o pre�o de custo.

Finalmente, o pre�o de venda ser� o pre�o de custo mais o valor da taxa de entrega.*/
float calculaPrecoCusto(int quantidadeVendida, char flor[], char embalagem[]){
//rosa = R$10 a unidade
//margarida = R$15,50 a unidade
//flores do campo = R$17,25 a unidade
//embalagem para presente = 2.00 por unidade
    int isEmbalado = strcmp(strlwr(embalagem), "sim");
    int isRosa = strcmp(flor, "rosa");
    int isMargarida = strcmp(flor, "margarida");
    int isFlorDoCampo = strcmp(flor, "flores do campo");
    if(isEmbalado!=0){
        if(isRosa==0){
            return quantidadeVendida * 10;
        }
        else if(isMargarida==0){
            return quantidadeVendida * 15.50;
        }
        else{
            return quantidadeVendida * 17.25;
        }
    }
    else{
        if(isRosa==0){
            return (quantidadeVendida*10) + (quantidadeVendida*2);
        }
        else if(isMargarida==0){
            return (quantidadeVendida*15.50) + (quantidadeVendida*2);
        }
        else{
            return (quantidadeVendida*17.25) + (quantidadeVendida*2);
        }
    }
}

float calculaPrecoEntrega(float precoCusto){
    return precoCusto*0.05;
}

float calculaPrecoVenda(float precoCusto, float taxaEntrega){
    return precoCusto + taxaEntrega;
}
void mostraInfos(char flor[], int quantidadeVendida, char embalagem[])
{
    /*puts(flor);
    printf("%d", quantidadeVendida);
    puts(embalagem);*/
    float precoCusto = calculaPrecoCusto(quantidadeVendida, flor, embalagem);
    printf("Preco de custo: R$%.2f\n", precoCusto);
    float taxaDeEntrega = calculaPrecoEntrega(precoCusto);
    printf("Taxa de entrega: R$%.2f\n", taxaDeEntrega);
    float valorTotalDaVenda = calculaPrecoVenda(precoCusto, taxaDeEntrega);
    printf("O valor total da venda ficou: R$%.2f", valorTotalDaVenda);
}

int main()
{
    char flor[16];
    int quantidadeVendida;
    char embalagem[4];
    printf("Digite qual flor deseja: rosa, margarida ou flores do campo\n");
    gets(flor);
    printf("Digite quantas deseja comprar: \n");
    scanf(" %d", &quantidadeVendida);
    fflush(stdin);
    printf("Deseja embalagem? (sim)(nao):\n");
    gets(embalagem);
    mostraInfos(flor,quantidadeVendida,embalagem);
    return 0;
}
