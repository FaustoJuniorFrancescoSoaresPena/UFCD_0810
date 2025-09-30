// instru��o para permitir ultrapassar a mensagem de erro
// do scanf()
#define _CRT_SECURE_NO_WARNINGS

//importar bilbiotecas para o nosso projeto
#include <stdio.h>
#include <stdlib.h>
 
// exercicio 1 - criar estrutura Filmes
struct Filmes{
	
	int ID;
	char Nome[50];
	char Tipo_filme[35];
	float Duracao;
	float Classificacao;


};

// exercicio 1 - criar estrutura Realizador
struct Realizador {
	int ID;
	char Nome[25];
	char Produtora[35];
	int Idade;
	float Salario;

};
// procedimento para ler as informa��es

void Mostra_Filmes(struct Filmes registo) {

		printf("Id:%d\n", registo.ID);
		printf("Nome:%s\n", registo.Nome);
		printf("Tipo de filme:%s\n", registo.Tipo_filme);
		printf("Dura��o:%f\n", registo.Duracao);
		printf("Classifica��o:%2.f\n", registo.Classificacao);
		
}
void Mostra_Realizador(struct Realizador registo) {

	printf("ID:%d\n", registo.ID);
	printf("Nome:%s\n", registo.Nome);
	printf("Produtora:%s\n", registo.Produtora);
	printf("idade:%d\n", registo.Idade);
	printf("Salario:%f\n", registo.Salario);

}
void exercicio1() {
// declara��o da estrutura baseada no Filmes
	struct Filmes registos_filmes[3];
	// inserir informa��es com uma estrutura de repeti��o
	for (int i = 0; i < 3; i++) {
		// limpar os dados do teclado em memoria 
	fflush(stdin);
		

				printf("\n Dados dos Filmes %d\n", i + 1);
		
				printf("Insira o ID:\n");
				scanf("%d", &registos_filmes[i].ID);

				printf("Insira o Nome:\n");
				scanf("%s", registos_filmes[i].Nome);

				printf("Insira o Tipo de Filme:\n");
				scanf("%s", registos_filmes[i].Tipo_filme);
		
				printf("Insira a Dura��o do Filme:\n", i);
				scanf("%f",&registos_filmes[i].Duracao);

				printf("Insira a Classifica��o do Filme:\n", i);
				scanf("%f",&registos_filmes[i].Classificacao);

		
				
	}
	//ler a informa��o da estrutura Filmes
	for (int i = 0; i < 3; i++) {
		// limpar os dados do teclado em memoria 
		fflush(stdin);
		// mostrar a mensagem do registo que esta a percorrer
		printf(" \n Filmes em Exibi��o %d\n", i + 1);
		// invoca o procedimento mostra Filmes
		Mostra_Filmes(registos_filmes[i]);
	}
}
void exercicio2() {
	// declara��o da estrutura baseada no realizador
	struct Realizador registo_realizadores[4];
	// inserir informa��es com uma estrutura de repeti��o
	for (int i = 0; i < 4; i++) {
		// limpar os dados do teclado em memoria 
		fflush(stdin);


		printf("\n Dados dos Realizadores %d\n", i + 1);

		printf("Insira o ID:\n");
		scanf("%d", &registo_realizadores[i].ID);

		printf("Insira o Nome:\n");
		scanf("%s", registo_realizadores[i].Nome);

		printf("Insira a Produtora:\n");
		scanf("%s", registo_realizadores[i].Produtora);

		printf("insira a Idade:\n", i);
		scanf("%d", &registo_realizadores[i].Idade);
				
		printf("insira o Salario:\n", i);
		scanf("%f", &registo_realizadores[i].Salario);
		



	}
	//ler a informa��o da estrutura 
	for (int i = 0; i < 4; i++) {
		// limpar os dados do teclado em memoria 
		fflush(stdin);
		// mostrar a mensagem do registo que esta a percorrer
		printf(" \n registos da Produ��o Artistica %d\n", i + 1);
		// invoca o procedimento mostra realizador
		Mostra_Realizador(registo_realizadores[i]);
	}
}

 
void main() {
	//exercicio1();
	//exercicio2();


}