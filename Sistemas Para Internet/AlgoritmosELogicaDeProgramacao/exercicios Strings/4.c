#include<stdio.h>
#include<string.h>
#include"libGeral.h"

/*4. Fazer um programa para ler uma string e contar quantas vezes um determinado caractere
aparece na string. O caractere deverá ser informado pelo usuário.*/

int contaCarcteres(char string[50], char caracter){
    int cont = 0;
    int tamanhoString = strlen(string);
    for(int i =0; i<tamanhoString; i++){
        if(string[i]==caracter){
            cont++;
        }
    }
    return cont;
}

int main(){
    char string[50];
    char caracter;
    printf("Digite a string:\n");
    gets(string);
    printf("Qual caracter deseja contar?\n");
    scanf(" %c", &caracter);
    printf("A quantidade de vezes que o caracter %c aparece nessa string eh: %d", caracter, contaCarcteres(string, caracter));



    return 0;
}
