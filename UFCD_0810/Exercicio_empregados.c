//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// exercicio 1 - criar estrutura
//struct Empregado{
//	char nome[50];
//	char cargo[50];
//	int idade;
//	float salario;
//};
//// procedimento para ler as informações
//
//void imprime_pessoa(struct Empregado registo) {
//
//		printf("Nome:%s\n", registo.nome);
//		printf("Cargo:%s\n", registo.cargo);
//		printf("idade: % d\n", registo.idade);
//		printf("Salario:%f\n", registo.salario);
//		
//}
//void main() {
//// estrutura para registar empregados com for de 3 elementos
//	struct Empregado registo[3];
//	// inserir valores dentro da estrutura registos
//	for (int i = 0; i < 3; i++) {
//		// limpar os dados do teclado em memoria 
//		fflush(stdin);
//		// predir os dados para preencher cada registo
//		printf("\n Dados do empregado %d\n", i+1);
//		
//				printf("insira o nome:\n");
//				scanf("%s", registo[i].nome);
//
//				printf("insira o Cargo:\n");
//				scanf("%s", registo[i].cargo);
//		
//				printf("insira a Idade:\n", i);
//				scanf("%d", &registo[i].idade);
//		
//				printf("insira o Salario:\n", i);
//				scanf("%f", &registo[i].salario);
//	}
//		//estrutura de repetição for para ler os valores dentro da estrutura registos 
//	for (int i = 0; i < 3; i++) {
//		// mostrar a mensagem do registo que esta a percorrer
//		printf(" \n registos dos empregados %d\n", i+1);
//		// invoca o procedimento imprime pessoa
//		imprime_pessoa(registo[i]);
//	}
//	
//
//}