#include<stdio.h>
#include"libGeral.h"
#include<string.h>
/*8. Crie um programa que leia duas strings (A e B) e mostre uma terceira string (C) formada
pelos caracteres contidos em A e B de forma intercalada. Exemplo: Se A = “quarta” e B =
“segunda”, a resposta obtida deverá ser “qsueagrutnada”.*/
void preencheStrings(char stringA[],char stringB[]){
    printf("Digite uma string para A:");
    gets(stringA);
    printf("Digite uma string para B:");
    gets(stringB);
}

void preencheStringC(char stringA[], char stringB[], char stringC[], int tamanho){
    int A = 1;
    int B = 0;
    int interacao = 0;
    int interacaoA = 0, interacaoB = 0;
    while(interacao <= tamanho){
        if(interacaoA != strlen(stringA) && interacaoB!= strlen(stringB)){
            if(A==1 && interacaoA!=strlen(stringA)){;
                stringC[interacao]=stringA[interacaoA];
                interacaoA++;
                A = 0;
                B = 1;
            } else if(B==1&&interacaoB!=strlen(stringB)){
                stringC[interacao]=stringB[interacaoB];
                interacaoB++;
                A = 1;
                B = 0;
            }
        }else{
            if(interacaoA==strlen(stringA) && interacaoB < strlen(stringB)){
                stringC[interacao]=stringB[interacaoB];
                interacaoB++;
            }else if(interacaoB==strlen(stringB) && interacaoA < strlen(stringA)){
                stringC[interacao]=stringA[interacaoA];
                interacaoA++;
            }
        }
        interacao++;
    }
    puts(stringC);

}

int main(){
    char stringA[30];
    char stringB[30];
    preencheStrings(stringA, stringB);

    int tamanhoDuasStrings = strlen(stringA);
    tamanhoDuasStrings+=strlen(stringB);

    char stringC[tamanhoDuasStrings+1];
    preencheStringC(stringA, stringB, stringC, tamanhoDuasStrings);


    return 0;
}
