//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//void exercicio1(){
//// declaração do vetor com 5 elementos
//	int numeros[5];
//	// colocar os valores dentro do vetor (de forma manual)
//	numeros[0] = 12;
//	numeros[1] = 10;
//	numeros[2] = 14;
//	numeros[3] = 16;
//	numeros[4] = 20;
//	// mostrar os valor dentro do vetor (forma manual)
//	printf("valor do indice 0:%d \n", numeros[0]);
//	printf("valor do indice 1:%d \n", numeros[1]);
//	printf("valor do indice 2:%d \n", numeros[2]);
//	printf("valor do indice 3:%d \n", numeros[3]);
//	printf("valor do indice 4:%d \n", numeros[4]);
//}
//void exercicio2() {
//	// declaração de um vetor com 5 elementos
//	int lista[5];
//	// estrutura de repetição automatica (for) para automatizar o processo da obtenção da indormação
//	// 1 parametro : valor maximo a processar
//	// 2 parametro :condição maxima que pode atingir
//	// 3 parametro : incrementar +1 de cada vez que retir a estrutura de repetição
//	for (int i = 0; i < 5; i++) {
//		// mostrar a mensagem do indice que esta a percorrer atualmente
//		printf("valor do indice %d: ", i);
//		// ler o valor do teclado e colocar no indice do vetor atual
//		scanf("%d", &lista[i]);
//	}
//	// como ler um vetor e mostrar os valores dos indices 
//	for (int i = 0; i < 5; i++) {
//		printf("valor do indice %d: %d\n", i, lista[i]);
//
//	}
//}
//void exercicio3() {
//	// declaração de um vetor com 6 elementos
//	float notas[6];
//	// variaveis para guradar positivos e negativos 
//	int positivos = 0;
//	int negativos = 0;
//
//	// estrutura de repetição automatica (for) para pedir valores decimais
//	 
//	for (int i = 0; i < 6; i++) {
//		// mostrar a mensagem do indice que esta a percorrer atualmente
//		printf("valor do indice %d: ", i);
//		// pedir o valor decimal para ler no vetor 
//		scanf("%f", &notas[i]);
//	}
//	// estrutura de repetição para ler os valor do vetor
//	for (int i = 0; i < 6; i++) {
//		// estrutura de decisão dulpa para avaliar valor do vetor
//		if (notas[i] < 0) {
//			negativos++; // soma dos negativos
//		}
//		else {
//			positivos++; // soma dos positivos
//		}
//	}
//	// mostrar quantos positivos e negativos detetou
//	printf("Numero de positivos %d e negativos %d\n ", positivos, negativos);
//}
//void exercicio4() {
//	// declaração de um vetor com 5 elementos
//	int valores[5];
//	// estrutura de repetição automatica (for) para inserir valor no vetor
//	// 1 parametro : valor maximo a processar
//	// 2 parametro :condição maxima que pode atingir
//	// 3 parametro : incrementar +1 de cada vez que retir a estrutura de repetição
//	for (int x = 0; x < 5; x++) {
//		//declaração de variavel so para correr dentro do for
//		int valor = 0;
//		do{	
//			printf("insira o valor para o indice %d: ", x);
//		// ler o valor do teclado e colocar no indice do vetor atual
//			scanf("%d", &valor);
//
//		} while (valor==1);
//	 //associar o valor recebido ao vetor, o valor introduzido é diferente de 1
//		valores[x] = valor;
//	}
//	// estrutura de repetição para ler os valores do vetor
//	for (int x = 0; x < 5; x++) {
//		printf("valor do indice %d: é %d\n", x, valores[x]);
//	}
//}
//void exercicio5() {
//	// declaração de um vetor com 5 elementos
//	int numeros[5];
//	// estrutura de repetição automatica (for) para automatizar o processo da obtenção da informação
//	// 1 parametro : valor maximo a processar
//	// 2 parametro :condição maxima que pode atingir
//	// 3 parametro : incrementar +1 de cada vez que retir a estrutura de repetição
//	for (int i = 0; i < 5; i++) {
//		// estrutura de repetição for para inserir valor num vetor
//		printf(" insira o valor do indice %d: ", i);
//		// ler o valor do teclado e colocar no indice do vetor atual
//		scanf("%d", &numeros[i]);
//	}
//	// estrutura de repetição for para ler valores 
//	for (int i = 0; i < 5; i++) {
//		printf("valor do indice %d: %d\n", i, numeros[i]);
//		if (numeros[i] == 5) {
//			printf("este indice tem o valor 5\n");
//		}
//	}
//
//}
//// função para verificar se existe um numero = no vetor e returnar 2 possiveis respostas 0 caso não encontre nenhum numero repetido e 1 se encontrar um numero repetido. 
//int verifica_numeros(int vetor[5], int valor ) {
//  // estrutura de repetição para ler os valores do vetor
//	for (int i = 0; i < 5; i++) {
//		// estrutura de decisão simples para verificar dentro do vetor
//		if (vetor[i] == valor) {
//			return 1;
//		}
//	}
//	// se não contecer nada dentro das repetição, significa que nenhum numero foi repetido
//	return 0;
//}
//// procedimento para calcular a media de numeros de 1 vetor 
//void calcula_media(int vetor[5]) {
//	// percorrer todos os elemetos do vetor e somar valores
//	float soma = 0;
//		//estrutura de repetição para ler o vetor
//		for (int i = 0; i < 5; i++) {
//			//somar valores do vetor
//			soma = soma + vetor[i];
//		}
//		// mostrar valores
//		printf("media dos numeros no vetor: %f", soma / 5);
//
//}
//
//void exercicio6() {
//	// declaração de um vetor com 5 elementos
//	int vetor[5];
//	// estrutura de repetição automatica (for) para inserir valores no vetor
//	// 1 parametro : valor maximo a processar
//	// 2 parametro :condição maxima que pode atingir
//	// 3 parametro : incrementar +1 de cada vez que retir a estrutura de repetição
//	for (int i = 0; i < 5; i++) {
//		// declarar variavel para armazenar o valor 
//		int valor = 0;
//		//estrutura de repetição do... while para receber e avaliar o valor inserido no teclado e deve repetir o codigo se a função verifica_numeros retornar 1
//		do {
//			// pedir a informação ao utilizador 
//			printf(" insira o valor do indice %d: \n", i);
//			// ler o valor do teclado e colocar no indice do vetor atual
//			scanf("%d", &valor);
//		} while (verifica_numeros(vetor,valor)==1);
//		//associar o valor recebido ao vetor, o valor introduzido é diferente de 1
//		vetor[i] = valor;
//
//	}
//	// invocar o procedimento e mostrar media 
//	calcula_media(vetor);
//}
//void exercicio7() {
//	// declaração de um array multidimensional (metriz)
//	//  uma matriz é composta por linhas e colunas
//	int matriz[3][3];
//	// matriz tem linhas e colunas, precisamos de duas estruturas de repetição
//	for (int i = 0; i < 3; i++) {// percurrer a linhas da matriz
//		for (int j = 0; j < 3; j++) {// percurre as colunas da linha 
//			// interceção do i com j permite colocar o valor da celula
//			printf("insira o valor da linha %d e da coluna %d:",i,j);
//			scanf("%d",&matriz[i][j]);
//		}
//	}
//		// ler valores
//	for (int i = 0; i < 3; i++) {// percurrer a linhas da matriz
//		for (int j = 0; j < 3; j++) {// percurre as colunas da linha 
//			// mostrar a interceção do i com j 
//			printf("insira o valor da linha %d e da coluna %d:%d\n", i, j, matriz[i][j]);
//		}
//	}
//}
//
//void main() {
//	//exercicio1();
//	//exercicio2();
//	//exercicio3();
//	//exercicio4();
//	//exercicio5();
//	//exercicio6();
//	//exercicio7(); 
//	
//}
