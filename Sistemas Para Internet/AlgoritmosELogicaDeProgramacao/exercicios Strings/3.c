#include<stdio.h>
#include"libGeral.h"
#include<string.h>

/*3. Desenvolver um programa que obtenha as seguintes informações para “n” colegas da sua
turma de algoritmos:
Nome à char nome[15];
sobrenome à char sobrenome[30];
endereço à char end[80];
telefone à char fone[8];
idade à char id[3];
Após, realizar as seguintes tarefas:
Copiar o nome para uma variável denominada nome_compl;
Concatenar o sobrenome à variável nome_compl;
Obter o tamanho da variável nome_compl;
Imprimir todas as informações (nome_compl, endereço, telefone, idade e tamanho de
nome_compl) de cada um dos seus colegas na tela.*/
void preencheInfos(){
    char nome[15];
    char sobrenome[30];
    char end[80];
    char fone[8];
    char id[3];
    char nomeCompleto[46];
    printf("Digite respectivamente:\nnome;\nsobrenome;\nendereco;\nfone;\nid;\n");
    fflush(stdin);
    gets(nome);
    gets(sobrenome);
    gets(end);
    gets(fone);
    gets(id);

    strcpy(nomeCompleto, nome);
    strcat(nomeCompleto," ");
    strcat(nomeCompleto, sobrenome);
    int tamanhoNomeCompleto = strlen(nomeCompleto);

    printf("NOME COMPLETO: ");
    puts(nomeCompleto);
    printf("ENDERECO: ");
    puts(end);
    printf("TELEFONE: ");
    puts(fone);
    printf("IDADE: ");
    puts(id);
    printf("TAMANHO DO NOME COMPLETO: %d", tamanhoNomeCompleto);


}
int main(){
    int quantidadeAlunos;
    printf("Digite quantos alunos sao: \n");
    scanf("%d", &quantidadeAlunos);
    for(int i = 0; i<quantidadeAlunos; i++){
        preencheInfos();
    }




    return 0;
}
