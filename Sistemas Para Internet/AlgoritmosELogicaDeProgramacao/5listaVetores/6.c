#include<stdio.h>
#include"libGeral.h"

/*6. Crie um programa com uma função que leia 8 valores dos vetores A e B. O Vetor A deve aceitar apenas a
entrada de valores que sejam divisíveis por 2 e 3, e o vetor B deve aceitar apenas valores múltiplos de 5.
Esta validação não deve ser feita pelo usuário, mas sim pelo programa. Depois, crie um terceiro vetor que
armazene todos os elementos dos dois vetores (16 posições) e apresente esses valores na tela.*/
void entradaVetoresMultiplos2e3e5(int vetorA[], int vetorB[]);

int main()
{
    int tamanhoDosVetoresAeB = 8;
    int vetorA[tamanhoDosVetoresAeB];
    int vetorB[tamanhoDosVetoresAeB];
    entradaVetoresMultiplos2e3e5(vetorA, vetorB);

    int terceiroVetor[tamanhoDosVetoresAeB*2];
    for(int i =0; i< tamanhoDosVetoresAeB*2; i++)
    {
        if(i<8)
        {
            terceiroVetor[i]=vetorA[i];
        }
        else if(i>=8)
        {
            terceiroVetor[i]=vetorB[i-8];
        }
    }

    printf("Os valores dentro do terceiro vetor comecam no vetor A(multiplos de 2 e 3) e depois vao para o vetor B(multiplos de 5):\n");
    printaValoresVetorInteiro(terceiroVetor, tamanhoDosVetoresAeB*2);

    return 0;
}

void entradaVetoresMultiplos2e3e5(int vetorA[], int vetorB[]){
        int contadorPosicoesPreenchidasA=0, contadorPosicoesPreenchidasB=0, counterGeral=0;
    while(counterGeral < 16)
    {
        printf("Digite um numero: \n");
        int valorDigitado = leInteiro();
        //((caso o valor digitado seja multiplo de 2 OU multiplo de 3) E o valor digitado nao seja multiplo de 5) E o contador nao esteja em 7
        if(((valorDigitado % 2==0 || valorDigitado % 3==0) && valorDigitado %5 != 0)&& contadorPosicoesPreenchidasA < 8)
        {

            printf(valorDigitado %2 == 0 && valorDigitado %3 == 0? "multiplo de 2 e de 3.\n" : valorDigitado %2 == 0 ? "multiplo de 2.\n" : "multiplo de 3.\n");

            vetorA[contadorPosicoesPreenchidasA] = valorDigitado;
            contadorPosicoesPreenchidasA++;

            if(contadorPosicoesPreenchidasA == 8)
            {
                printf("posicoes maximas atingidas dentro do vetor de multiplos de 2 e 3, nao serao mais aceitos estes valores.\n");
            }
            counterGeral++;
        }
        else if(valorDigitado % 5==0 && contadorPosicoesPreenchidasB< 8)
        {
            printf("multiplo de 5\n");
            vetorB[contadorPosicoesPreenchidasB] = valorDigitado;
            contadorPosicoesPreenchidasB++;
            if(contadorPosicoesPreenchidasB == 8)
            {
                printf("posicoes maximas atingidas dentro do vetor de multiplos de 5, nao serao mais aceitos estes valores.\n");
            }
            counterGeral++;
        }
        else
        {
            printf("o numero digitado nao eh valido, pois nao eh multiplo de 2, 3 ou 5.\n");
        }
    }
}
