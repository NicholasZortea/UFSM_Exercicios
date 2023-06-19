#include<stdio.h>
#include<string.h>
/*3. Faça um algoritmo para realizar cadastro e consulta de informações sobre automóveis
usados na concessionária FastCar, onde é apresentado o seguinte menu:
1. Cadastrar automóvel
2. Consultar automóvel
3. Gerar relatório
4. Sair do programa
Na opção 1 o usuário cadastra a placa, descrição, fabricante, cor, ano de fabricação e
preço. 
Na opção 2 o usuário deve informar uma placa e o algoritmo deve exibir as
informações sobre o veículo. Caso não encontre, deve exibir uma mensagem informando
isso. 
A opção 3 deve gerar um relatório contendo todos os dados dos automóveis
cadastrados. Considere um máximo de 12 veículos no cadastro*/

typedef struct{
	char placa[7];
	char descricao[30];
	char fabricante[20];
	char cor[15];
	int anoFabricacao;
	float preco;
} carro;


int cadastraCarro(carro listaCarros[], int pos){
	carro NovoCarro;
	printf("Digite a placa do carro:");
	gets(NovoCarro.placa);
	printf("Digite a descricao do carro:");
	gets(NovoCarro.descricao);
	printf("Digite o fabricante do carro:");
	gets(NovoCarro.fabricante);
	printf("Digite a cor do carro:");
	gets(NovoCarro.cor);
	printf("Digite o ano de fabricacao:");
	scanf("%d", &NovoCarro.anoFabricacao);
	fflush(stdin);
	printf("Digite o preco do carro:");
	scanf("%f", &NovoCarro.preco);
	listaCarros[pos]=NovoCarro;
	
	return 1;
}

void mostraCarros(carro listaCarros[], int posicao){
	printf("placa:\n");
	puts(listaCarros[posicao].placa);
	printf("descricao:\n");
	puts(listaCarros[posicao].descricao);
	printf("Fabricante:\n");
	puts(listaCarros[posicao].fabricante);
	printf("cor do carro:\n");
	puts(listaCarros[posicao].cor);
	printf("ano de fabricacao:\n");
	printf("%d\n", listaCarros[posicao].anoFabricacao);
	printf("Preco: R$%.2f\n", listaCarros[posicao].preco);
	printf("\n");
	
}

int consultaCarro(carro ListaCarros[], int carrosCadastrados, char placa[7]){
	for(int i=0; i< carrosCadastrados; i++){
		if(strcmp(ListaCarros[i].placa, placa) == 0){
			mostraCarros(ListaCarros, i);
			return 1;
		}
	}
	printf("Nao foi encontrado carro com essa placa!\n");
	return 1;
}

void geraRelatorio(carro listaCarros[], int quantidadeCarros){
	for(int i=0; i<quantidadeCarros; i++){
		mostraCarros(listaCarros, i);
	}
}

int main(){
	carro listaCarros[12];
	int numeroCarrosCadastrados = 0;
	
	

    int opcao;
	do{
		printf("Digite qual opcao deseja:\n");
		printf("1. Cadastrar automovel\n");
		printf("2. Consultar automovel\n");
		printf("3. Gerar relatorio\n");
		printf("4. Sair do programa\n");
		
		fflush(stdin);
		scanf("%d", &opcao);
		fflush(stdin);
		switch(opcao){
			case 1:
				cadastraCarro(listaCarros, numeroCarrosCadastrados);
				numeroCarrosCadastrados++;
				break;
			case 2:
				printf("Digite a placa que deseja consultar:\n");
				char placa[7];
				gets(placa);
				consultaCarro(listaCarros, numeroCarrosCadastrados, placa);
				break;
			case 3:
				geraRelatorio(listaCarros, numeroCarrosCadastrados);
				break;
		}
	}while(opcao!=4);
	
	return 0;
}

