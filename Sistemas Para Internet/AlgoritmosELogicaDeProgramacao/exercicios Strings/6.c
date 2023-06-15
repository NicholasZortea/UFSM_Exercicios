#include<stdio.h>
#include"libGeral.h"
#include<string.h>
/*6. Fazer um programa para ler uma string e um caractere. Sempre que o caractere lido
aparecer na frase, ele deverá ser substituído por asterisco.*/
void substituiCaracter(char string[50], char caracter){
    int tamanhoString = strlen(string);
    for(int i = 0; i< tamanhoString; i++){
        if(string[i]==caracter){
            string[i]='*';
        }
    }


}
int main(){
    char caracter;
    char string[50];
    printf("Digite a string:");
    gets(string);
    printf("Digite qual caracter quer substituir por asterisco: ");
    scanf(" %c", &caracter);
    substituiCaracter(string, caracter);
    puts(string);



    return 0;
}
