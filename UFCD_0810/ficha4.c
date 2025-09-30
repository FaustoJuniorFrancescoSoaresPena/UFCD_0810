//// instru��o para permitir ultrapassar a mensagem de erro
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

	// a fun��o fopen tem 2 parametros: 1) localiza��o do ficheiro 2) modo de abertura
	/*fp = fopen("ficheiro1.txt", "r");*/
	if ((fp = fopen("ficheiro1.txt", "r")) == NULL) {
		printf("impossivel abrir criar o ficheiro pretendido\n");
		exit(1);
	}
	else {
		printf("informa��o do ficheiro: \n \n");
		
		// ler tudo at� ao final do ficheiro com uma estrutura de repeti��o do... while
		while (fgets(linha, 1000, fp) != NULL) {
			// enquanto n�o atingir o fim do ficheiro, le os elementos
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
	
	// a fun��o fopen tem 2 parametros: 1) localiza��o do ficheiro 2) modo de abertura
	/*fp = fopen("ficheiro1.txt", "r");*/
	if ((fp = fopen("ficheiro1.txt", "w")) == NULL) {
		printf("impossivel abrir criar o ficheiro pretendido\n");
		exit(1);
	}
	else {
		char texto[100]="A informa��o foi substituida com sucesso!!! \n Quebra de Texto ";
		// fun��o fputs para escrever 
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

		// a fun��o fopen tem 2 parametros: 1) localiza��o do ficheiro 2) modo de abertura
		/*fp = fopen("ficheiro1.txt", "r");*/
		if ((fp = fopen("teste.txt", "w+")) == NULL) {
			printf("impossivel abrir criar o ficheiro pretendido\n");
			exit(1);
		}
		else {
			// escrever frase dentro do ficheiro com fputs
			fputs("Isto � uma experincia sobre acesso a informa��o de forma direta", fp);
			// fun��o fseek serve para se posicionar no ficheiro tem 2 parametros
			//1 Parametro: indicar qual o ficheiro
			// 2 Parametro : quantos caracteres vai ler
			// 3 Parametro: Qual o posicionamento (inicio, especifico ou fim)
			fseek(fp, 0, SEEK_SET);
			// fun��o fgets para receber os dados 
			fgets(linha, 70, fp);
			// mostrar o que foi obtido
			printf(" Anets de usar a fun��o FSEEK: \n %s \n\n", linha);

			// utilizar a fun��o fseek para colocar a leitira da informa��o no caracter 21 (posiciona dentro do ficheiro)
			fseek(fp, 21, SEEK_SET);
			// Fun��o fgets para receber informa��o
			fgets(linha, 10, fp);
			// exibir informa��o
			printf(" Depois de usar o metodo SEEK_SET a partir do caracter 21:\n %s \n\n", linha);
		  // ou printf("%s",linha);
			// utiliza seek_cur e retira 10 caracteres colando o cursor num determinado local
			fseek(fp, -25, SEEK_CUR);
			// Fun��o fgets para receber informa��o
			fgets(linha, 100, fp);
			// exibir informa��o
			printf(" Depois de usar o metodo SEEK_CUR e retirar 25 caracteres da posi��o atual:\n %s \n\n", linha);
			// utiliza seek_end e le a partir de uma posi��o especifica
			fseek(fp, -35, SEEK_END);
			// Fun��o fgets para receber informa��o
			fgets(linha, 10, fp);
			// exibir informa��o
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