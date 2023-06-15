#include<stdio.h>
#include"libGeral.h"
#include<string.h>

/*1. Fazer um programa que leia uma string de caracteres maiúsculos e troque todos os
caracteres por letras minúsculas.*/

int main(){
    char stringMaiuscula[50];
    printf("Digite uma string de caracteres maiusculos: \n");
    gets(stringMaiuscula);
    strlwr(stringMaiuscula);
    puts(stringMaiuscula);

    return 0;
}
