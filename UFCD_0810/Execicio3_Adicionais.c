//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// exercicio 1 - criar estrutura Animal 
//struct Animal{
//	int ID;
//	char Nome[25];
//	int Idade;
//	float Peso;
//};
//// exercicio 2 - criar estrutura Veterinaio
//struct Veterinario {
//	int ID;
//	char Nome[25];
//	int Idade;
//	char Cidade[25];
//};
//// procedimento para ler as informações
//
//void Mostra_Animal(struct Animal registo) {
//
//		printf("Id:%d\n", registo.ID);
//		printf("Nome:%s\n", registo.Nome);
//		printf("idade: %d\n", registo.Idade);
//		printf("Peso:%f\n", registo.Peso);
//		
//}
//void Mostra_Veterinario(struct Veterinario registo) {
//
//	printf("Id:%d\n", registo.ID);
//	printf("Nome:%s\n", registo.Nome);
//	printf("idade:%d\n", registo.Idade);
//	printf("Cidade:%s\n", registo.Cidade);
//
//}
//
//void exercicio1() {
//// declaração da estrutura baseada no animal
//	struct Animal registos_animais[3];
//	// inserir informações com uma estrutura de repetição
//	for (int i = 0; i < 3; i++) {
//		// limpar os dados do teclado em memoria 
//	fflush(stdin);
//		/*int id = 0, idade=0;
//		float peso = 0;
//		char nome[25];*/
//
//				printf("\n Dados do Animal %d\n", i + 1);
//		
//				printf("Insira o id:\n");
//				scanf("%d", &registos_animais[i].ID);
//
//				printf("Insira o Nome:\n");
//				scanf("%s", registos_animais[i].Nome);
//
//		
//				printf("Insira a Idade:\n", i);
//				scanf("%d",&registos_animais[i].Idade);
//
//		
//				printf("Insira o Peso:\n", i);
//				scanf("%f", &registos_animais[i].Peso);
//	}
//	//ler a informação da estrutura animais 
//	for (int i = 0; i < 3; i++) {
//		// limpar os dados do teclado em memoria 
//		fflush(stdin);
//		// mostrar a mensagem do registo que esta a percorrer
//		printf(" \n registos dos animais %d\n", i + 1);
//		// invoca o procedimento mostra animal
//		Mostra_Animal(registos_animais[i]);
//	}
//}
//void exercicio2() {
//	// declaração da estrutura baseada no veterinario
//	struct Veterinario registo_veterinario[3];
//	// inserir informações com uma estrutura de repetição
//	for (int i = 0; i < 3; i++) {
//		// limpar os dados do teclado em memoria 
//		fflush(stdin);
//		/*int id = 0, idade=0;
//		float peso = 0;
//		char nome[25];*/
//
//		printf("\n Dados do Veterinario %d\n", i + 1);
//
//		printf("Insira o id:\n");
//		scanf("%d", &registo_veterinario[i].ID);
//
//
//		printf("Insira o Nome:\n");
//		scanf("%s", registo_veterinario[i].Nome);
//
//
//		printf("Insira a Idade:\n", i);
//		scanf("%d", &registo_veterinario[i].Idade);
//
//
//		printf("Insira a Cidade:\n", i);
//		scanf("%s", registo_veterinario[i].Cidade);
//	}
//	//ler a informação da estrutura animais 
//	for (int i = 0; i < 3; i++) {
//		// limpar os dados do teclado em memoria 
//		fflush(stdin);
//		// mostrar a mensagem do registo que esta a percorrer
//		printf("\n registos dos Veterinarios %d\n", i + 1);
//		// invoca o procedimento mostra veterinario
//		 Mostra_Veterinario(registo_veterinario[i]);
//	}
//}
//void main() {
//	//exercicio1();
//	//exercicio2();
//
//
//}