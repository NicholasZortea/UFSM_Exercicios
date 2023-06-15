#include<stdio.h>
#include"libGeral.h"
#include<string.h>

/*2. Desenvolver um programa que recebe uma palavra e o tipo de conversão que o usuário
deseja que ela sofra, que poderá ser letras (m)aiúsculas ou mi(n)úsculas. Observe que o campo
(variável) tipo de conversão deverá ser validado.*/

void converte(char string[50]){
    char tipo;
    printf("Digite qual conversao deseja realizar: (m)aiusculas ou mi(n)usculas\n");
    scanf(" %c", &tipo);
    while(tipo != 'n' && tipo != 'm'){
        printf("Este nao eh um tipo valido, os valores validos sao: %'n%' e %'m%'\n");
        scanf(" %c", &tipo);
    }
    printf(tipo == 'n' ? strlwr(string) : strupr(string));

}

int main(){
    char string[50];
    printf("Digite uma string:\n");
    gets(string);
    converte(string);

    return 0;
}
