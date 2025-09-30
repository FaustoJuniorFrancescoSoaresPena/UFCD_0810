//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// exercicio 1 - criar estrutura
//struct Carro{
//	char marca[25];
//	char modelo[25];
//	char cor[25];
//};
//
//struct Produto {
//	int ID;
//	char nome[25];
//	float preco;
//};
//
//void main() {
////// declarar variaveis baseadas em structuras 
//	struct Carro registo_carro[3];
//	struct Produto registo_produto[3];
////	//inserir registos de carros
////	for (int i = 0; i < 3; i++) {
////		printf("insira a informação sobre o registo %d\n",i);
////
////		printf("insira o nome do carro:\n", i);
////		scanf("%s", registo_carro[i].marca);
////
////		printf("insira o modelo do carro:\n", i);
////		scanf("%s", registo_carro[i].modelo);
////
////		printf("insira a cor do carro:\n", i);
////		scanf("%s", registo_carro[i].cor);
////
////	}
////	//estrutura de repetição for para ler informação
////	for (int i = 0; i < 3; i++) {
////		printf(" a informação sobre o registo %d\n", i);
////
////		printf("marca: %s\n", registo_carro[i].marca);
////		printf("modelo: %s\n", registo_carro[i].modelo);
////		printf("cor: %s\n", registo_carro[i].cor);
////	}
//	//inserir registos de produtos
//	for (int i = 0; i < 3; i++) {
//		printf("insira a informação sobre o registo %d\n",i);
//
//		printf("insira o Identificador do Produto:\n", i);
//		scanf("%d", &registo_produto[i].ID);
//
//		printf("insira o Nome do Produto:\n", i);
//		scanf("%s", registo_produto[i].nome);
//
//		printf("insira o Preço do Produto:\n", i);
//		scanf("%f", &registo_produto[i].preco);
//
//	}
//	//estrutura de repetição for para ler informação
//	for (int i = 0; i < 3; i++) {
//		printf(" a informação sobre o registo %d\n", i);
//
//		printf("ID: %d\n", registo_produto[i].ID);
//		printf("Nome: %s\n", registo_produto[i].nome);
//		printf("Preço: %f\n", registo_produto[i].preco);
//	}
//
//}