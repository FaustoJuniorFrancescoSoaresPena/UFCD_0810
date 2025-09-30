//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Data {
//	int dia;
//	int mes;
//	int ano;
//};
//union um_valor {
//	int val_int;
//	float val_float;
//	double val_double;
//};
//
//struct Pessoa {
//	int ID;
//	char Primeiro_nome[25];
//	char Ultimo_nome[25];
//	// ligar a estrutura data dentro da Pessoa
//	struct Data data;
//	//ligar a union detro da estrutura pessoa
//	union um_valor Peso;
//};
//
//void main() {
//	// criar uma variavel estruturada com base na Pessoa
//	struct Pessoa p1 = { 1, "Fausto", "Pena", {04,10,1995} };
//	// mostrar dados da estrutura ligada
//	/*printf("ID: %d\n", p1.ID);
//	printf("Primeiro Nome: %s\n", p1.Primeiro_nome);
//	printf("Ultimo Nome: %s\n", p1.Ultimo_nome);
//	printf("Data Nascimento: %d-%d-%d\n", p1.data.dia, p1.data.mes, p1.data.ano);*/
//
//	// criar variavel estruturada com base na Pessoa
//	struct Pessoa p2;
//	printf("insira o ID:\n");
//	scanf("%d",&p2.ID);
//
//	printf("insira o Primeiro Nome:\n");
//	scanf("%s", &p2.Primeiro_nome);
//
//	printf("insira o Ultimo Nome:\n");
//	scanf("%s", &p2.Ultimo_nome);
//	
//	printf("insira a Dia de Nascimento:\n");
//	scanf("%d", &p2.data.dia);
//	
//	printf("insira a Mes de Nascimento:\n");
//	scanf("%d", &p2.data.mes);
//
//	printf("insira a Ano de Nascimento:\n");
//	scanf("%d", &p2.data.ano);
//
//	//inserir valores fixos da union
//	p2.Peso.val_int = 12;
//	p2.Peso.val_double = 18.5;
//
//	// mostrar dados da estrutura ligada
//	printf("ID: %d\n", p2.ID);
//	printf("Primeiro Nome: %s\n", p2.Primeiro_nome);
//	printf("Ultimo Nome: %s\n", p2.Ultimo_nome);
//	printf("Data Nascimento: %d-%d-%d\n", p2.data.dia, p2.data.mes, p2.data.ano);
//
//	printf("Peso val_int: %d\n", p2.Peso.val_int);
//	printf("Peso val_int:  %f\n", p2.Peso.val_float);
//	printf("Peso val_int: %f\n", p2.Peso.val_double);
//}
//
