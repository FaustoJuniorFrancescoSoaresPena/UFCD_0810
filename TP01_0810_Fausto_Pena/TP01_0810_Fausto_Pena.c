//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//
//void exercicio1() {
//	// declaração de um vetor com 4 elementos
//	int vetor[4];
//	// estrutura de repetição automatica (for) para automatizar o processo da obtenção da indormação
//	// 1 parametro : valor maximo a processar
//	// 2 parametro :condição maxima que pode atingir
//	// 3 parametro : incrementar +1 de cada vez que retir a estrutura de repetição
//	for (int i = 0; i < 4; i++) {
//		// mostrar a mensagem do indice que esta a percorrer atualmente
//		printf("valor do indice %d: ", i);
//		// ler o valor do teclado e colocar no indice do vetor atual
//		scanf("%d", &vetor[i]);
//	}
//	// como ler um vetor e mostrar os valores dos indices 
//	for (int i = 0; i < 4; i++) {
//		printf("valor do indice %d: %d\n", i, vetor[i]);
//
//	}
//}
//void exercicio2() {
//	// declaração de um vetor com 5 elementos
//	int lista[5];
//	// variaveis para guradar positivos e negativos 
//	int pares = 0;
//	int impares= 0;
//
//	// estrutura de repetição automatica (for) para pedir valores decimais
//
//	for (int i = 0; i < 5; i++) {
//		// mostrar a mensagem do indice que esta a percorrer atualmente
//		printf("valor do indice %d: ", i);
//		// pedir o valor decimal para ler no vetor 
//		scanf("%d", &lista[i]);
//	}
//	// estrutura de repetição para ler os valor do vetor
//	for (int i = 0; i < 5; i++) {
//		// estrutura de decisão dulpa para avaliar valor do vetor
//		if (lista[i] % 2==0) {
//			pares++; // soma dos negativos
//		}
//		else {
//			impares++; // soma dos positivos
//		}
//		
//	}
//	// mostrar quantos positivos e negativos detetou
//	printf("Numero de pares %d e impares %d\n ", pares, impares);
//}
//void exercicio3() {
//	// declaração de um vetor com 6 elementos
//	int valores[6];
//	int valor = 0;
//	// estrutura de repetição automatica (for) para automatizar o processo da obtenção da informação
//	// 1 parametro : valor maximo a processar
//	// 2 parametro :condição maxima que pode atingir
//	// 3 parametro : incrementar +1 de cada vez que retir a estrutura de repetição
//	for (int i = 0; i < 6; i++) {
//		// estrutura de repetição for para inserir valor num vetor
//		printf(" insira o valor do indice %d: ", i);
//		// ler o valor do teclado e colocar no indice do vetor atual
//		scanf("%d", &valores[i]);
//	}
//	printf("Qual o valor que deseja procurar?");
//	// pedir o valor decimal para ler no vetor 
//	scanf("%d", &valor);
//	// estrutura de repetição for para ler valores 
//	for (int i = 0; i < 6; i++) {
//		printf("valor do indice %d: %d\n", i, valores[i]);
//		if (valores[i] == valor) {
//			printf("encontramos o valor: %d\n", valor);
//		}
//	}
//}
//
//	
//
//
//void main() {
//	//exercicio1();
//	//exercicio2();
//	exercicio3();
//	 
//
//}
