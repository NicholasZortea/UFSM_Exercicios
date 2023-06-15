#include<stdio.h>
#include"libGeral.h"
#include<string.h>

/*5. Crie um algoritmo para contar quantos espaços em branco existem em uma frase. Depois o
programa deve contar quantos caracteres são diferentes do caractere espaço em uma frase.*/

void contaEspacoAndNotEspaco(char string[50]){
    int tamanho = strlen(string);
    int contEspaco = 0, contNotEspaco = 0;
    for(int i=0; i<tamanho; i++){
        if(string[i]==' '){
            contEspaco++;
        }else{
            contNotEspaco++;
        }
    }
    printf("A quantidade de vezes que o caracter %'espaco%' aparece nessa string eh: %d, e a quantidade de caracteres diferentes de %'espaco%' eh: %d", contEspaco, contNotEspaco);
}


int main(){
    char string[50];
    printf("Digite a string:\n");
    gets(string);
    contaEspacoAndNotEspaco(string);




    return 0;
}
