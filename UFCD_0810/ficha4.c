//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
	// abrir o ficheiro
	// inicializar o ponteiro dos ficheiros
	FILE* fp;
	char linha[1000]; // variavel para armazenar as linhas lidas do ficheiro

	// a função fopen tem 2 parametros: 1) localização do ficheiro 2) modo de abertura
	/*fp = fopen("ficheiro1.txt", "r");*/
	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
		printf("impossivel abrir criar o ficheiro pretendido\n");
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
	/*fp = fopen("ficheiro1.txt", "r");*/
	if ((fp = fopen("ficheiro1.txt", "w")) == NULL) {
		printf("impossivel abrir criar o ficheiro pretendido\n");
		exit(1);
	}
	else {
		char texto[100]="A informação foi substituida com sucesso!!! \n Quebra de Texto ";
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
		char linha[1000]; // variavel para armazenar as linhas lidas do ficheiro

		// a função fopen tem 2 parametros: 1) localização do ficheiro 2) modo de abertura
		/*fp = fopen("ficheiro1.txt", "r");*/
		if ((fp = fopen("teste.txt", "w+")) == NULL) {
			printf("impossivel abrir criar o ficheiro pretendido\n");
			exit(1);
		}
		else {
			// escrever frase dentro do ficheiro com fputs
			fputs("Isto é uma experincia sobre acesso a informação de forma direta", fp);
			// função fseek serve para se posicionar no ficheiro tem 2 parametros
			//1 Parametro: indicar qual o ficheiro
			// 2 Parametro : quantos caracteres vai ler
			// 3 Parametro: Qual o posicionamento (inicio, especifico ou fim)
			fseek(fp, 0, SEEK_SET);
			// função fgets para receber os dados 
			fgets(linha, 70, fp);
			// mostrar o que foi obtido
			printf(" Anets de usar a função FSEEK: \n %s \n\n", linha);

			// utilizar a função fseek para colocar a leitira da informação no caracter 21 (posiciona dentro do ficheiro)
			fseek(fp, 21, SEEK_SET);
			// Função fgets para receber informação
			fgets(linha, 10, fp);
			// exibir informação
			printf(" Depois de usar o metodo SEEK_SET a partir do caracter 21:\n %s \n\n", linha);
		  // ou printf("%s",linha);
			// utiliza seek_cur e retira 10 caracteres colando o cursor num determinado local
			fseek(fp, -25, SEEK_CUR);
			// Função fgets para receber informação
			fgets(linha, 100, fp);
			// exibir informação
			printf(" Depois de usar o metodo SEEK_CUR e retirar 25 caracteres da posição atual:\n %s \n\n", linha);
			// utiliza seek_end e le a partir de uma posição especifica
			fseek(fp, -35, SEEK_END);
			// Função fgets para receber informação
			fgets(linha, 10, fp);
			// exibir informação
			printf("%s \n\n", linha);
		
		
		}
		//encerramento do ficheiro
		fclose(fp);
}
void exercicio4(){

}
void main() {
	//exercicio1();
	exercicio2();
	//exercicio3();
	
}