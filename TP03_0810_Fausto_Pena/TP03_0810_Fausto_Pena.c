// instrução para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

////importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>
void exercicio1() {
	// abrir o ficheiro
	// inicializar o ponteiro dos ficheiros
	FILE* fp;
	char linha[1000]; // variavel para armazenar as linhas lidas do ficheiro

	// a função fopen tem 2 parametros: 1) localização do ficheiro 2) modo de abertura
	
	if ((fp = fopen("ficheiro_tp3.txt", "r")) == NULL) {
		printf("Erro ao ler a informação do ficheiro\n");
		exit(1);
	}
	else {
		printf("informação do ficheiro: \n \n");

		// ler tudo até ao final do ficheiro com uma estrutura de repetição do... while
		while (fgets(linha, 1000, fp) != NULL) {
			// enquanto não atingir o fim do ficheiro, le os elementos
			printf("%s", linha);
		}

	}
	//encerramento do ficheiro
	fclose(fp);
}
void exercicio2() {
	// abrir o ficheiro
	// inicializar o ponteiro dos ficheiros
	FILE* fp;

	// a função fopen tem 2 parametros: 1) localização do ficheiro 2) modo de abertura
	
	if ((fp = fopen("ficheiro_tp3_escrita.txt", "w")) == NULL) {
		printf("Erro ao criar o ficheiro\n");
		exit(1);
	}
	else {
		char texto[100] = "a informação foi substituida como parte do exercicio 2 do trabalho pratico 3 ";
		// função fputs para escrever 
		fputs(texto, fp);

	}
	//encerramento do ficheiro
	fclose(fp);
}
void exercicio3() {
	// abrir o ficheiro
	// inicializar o ponteiro dos ficheiros
	FILE* fp;

	// a função fopen tem 2 parametros: 1) localização do ficheiro 2) modo de abertura
	
	if ((fp = fopen("ficheiro_tp3_escrita.txt", "a")) == NULL) {
		printf("Erro ao abrir o ficheiro\n");
		exit(1);
	}
	else {
		char texto[150] = "\n a informação foi alterada como parte do exercicio 2 do trabalho pratico 3 ";
		// função fputs para escrever 
		fputs(texto, fp);

	}
	//encerramento do ficheiro
	fclose(fp);
}

void main() {
	//exercicio1();
	//exercicio2();
	exercicio3();

}