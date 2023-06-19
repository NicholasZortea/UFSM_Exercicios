#include<stdio.h>
#include<time.h>
/*4. Em uma pesquisa envolvendo 20 entrevistados, uma editora solicitou os seguintes dados:
sexo, idade e quantidade de livros que leu em 2020. Faça um programa que leia os dados
digitados pelo usuário e ao final, calcule e imprima:
a) A quantidade total de livros lidos pelos entrevistados menores de 10 anos;
b) A quantidade de mulheres que leram 5 livros ou mais;
c) O percentual de pessoas que não leram livros*/

typedef struct{
	char sexo;
	int idade;
	int quantidadeLivros;
}entrevistado;

void preencheLista(entrevistado lista[20]){
	for (int i=0; i<20;i++){
		entrevistado novoEntrevistado;
		novoEntrevistado.sexo = rand()%2==0 ? 'f' : 'm';
		novoEntrevistado.idade = rand()%100;
		novoEntrevistado.quantidadeLivros = rand()%10;
		lista[i]=novoEntrevistado;
	}
}

void printaLista(entrevistado Lista[20]){
	for (int i = 0; i< 20; i++){
		printf("sexo: %c\n", Lista[i].sexo);
		printf("idade: %d\n", Lista[i].idade);
		printf("quantidadeLivros: %d\n\n", Lista[i].quantidadeLivros);
	}
}

void totalLivrosLidosMenoresQue10(entrevistado lista[20]){
	int somaTotalLivros = 0;
	for (int i=0;i<20;i++){
		if(lista[i].idade<10){
			somaTotalLivros+=lista[i].quantidadeLivros;
		}
	}
	printf("Quantidade de livros lidos por todas as pessoas menores de 10 anos: %d\n", somaTotalLivros);
}

void quantidadeMulheresQueLeramMaisQue5(entrevistado lista[20]){
	int somaTotalMulheres = 0;
	for (int i=0;i<20;i++){
		if(lista[i].sexo=='f'){
			if(lista[i].quantidadeLivros > 5){
				somaTotalMulheres++;
			}
		}
	}
	printf("Quantidade de mulheres que leram mais que 5 livros: %d\n", somaTotalMulheres);
}

void percentualPessoasNaoLeram(entrevistado lista[20]){
	float somaTotalNaoLeram = 0;
	for (int i=0;i<20;i++){
		if(lista[i].quantidadeLivros == 0){
			somaTotalNaoLeram++;
		}
	}
	printf("O percentual de pessoas que nao leram foi de: %.2f%%\n", ((somaTotalNaoLeram*100) / 20));
}

int main(){
	srand(time(NULL));
	entrevistado listaEntrevistados[20];
	preencheLista(listaEntrevistados);
	printaLista(listaEntrevistados);
	totalLivrosLidosMenoresQue10(listaEntrevistados);
	quantidadeMulheresQueLeramMaisQue5(listaEntrevistados);
	percentualPessoasNaoLeram(listaEntrevistados);
	return 0;
}
