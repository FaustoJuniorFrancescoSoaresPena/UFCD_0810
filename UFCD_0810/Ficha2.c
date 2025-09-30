//// instrução para permitir ultrapassar a mensagem de erro
//// do scanf()
//#define _CRT_SECURE_NO_WARNINGS
//
////importar bilbiotecas para o nosso projeto
//#include <stdio.h>
//#include <stdlib.h>
//void teste_ponteiro() {
//	//declarar variaveis normais 
//	int x = 1, y = 2;
//	//declarar a varivel tipo ponteiro
//	int* p;
//	// colocar em p o enedereço de x e p agora aponta para x
//	p = &x;
//	printf("valor de p: %d\n", p);
//	// coloca em y po valor do objeto apontado por p
//	y = *p;
//	printf("valor de y: %d\n", y);
//	printf("valor de *p: %d\n", *p);
//	 // coloca no objeto apontado por o valor 0 e x agora vale 0
//	*p = 0; 
//	printf("valor de x: %d\n", x);
//}
//void exercicio1() {
//	//declarar variaveis normais 
//	int num1 = 7, * num2;
//	//utilizar o & para copiar o endereço do num1 para num2
//	num2 = &num1;
//	// mostrar as informações das variaveis e apontador
//	printf("valor de num1: %d\n", num1);
//	printf("valor de num2: %d\n", num2);
//	printf("valor de num2 com *: %d\n", *num2);// valor do ponteiro num1
//}
//void exercicio2() {
//	//declarar variaveis normais 
//	int valor1 = 1;
//	float valor2 = 2.6;
//	char letra = 'a';
//	//declarar a varivel tipo ponteiro
//	int* ponteiro_valor1;
//	float* ponteiro_valor2;
//	char* ponteiro_letra;
//	// associação de ponteiros a variaveis 
//	ponteiro_valor1 = &valor1;
//	ponteiro_valor2 = &valor2;
//	ponteiro_letra = &letra;
//
//	// mostrar os valores dos apontadores
//	printf("valor de ponteiro_valor1 : %d\n",*ponteiro_valor1 );
//	printf("valor de ponteiro_valor2: %f\n", *ponteiro_valor2);
//	printf("valor de ponteiro_letra: %c\n",*ponteiro_letra);
//
//	// mudar os valores dos ponteiros nas variaveis originais
//	*ponteiro_valor1 = 5;
//	*ponteiro_valor2 = 2.5;
//	*ponteiro_letra = 'A';
//
//	// mostrar os valores dos apontadores
//	printf("valor de ponteiro_valor1 depois da operação: %d\n", *ponteiro_valor1);
//	printf("valor de ponteiro_valor2 depois da operação: %f\n", *ponteiro_valor2);
//	printf("valor de ponteiro_letra depois da operação: %c\n", *ponteiro_letra);
//
//}
//void exercicio3() {
//	//declarar variaveis normais 
//	int x = 5, y = 10;
//
//	if (&x > &y) {
//		printf("valor de x: %d e valor de y: %d, logo x maior\n", &x, &y);
//	}
//	else {
//		printf("valor de x: %d e valor de y: %d, logo y maior\n", &x, &y);
//	}
//
//}
//void verifica_numeros(int v1,int v2) {
//	if (v1 > v2) {
//		printf("v1 maior\n");
//	}
//	else if (v2 > v1) {
//		printf("v2 maior\n");
//	}else {
//		printf("valor iguais\n");
//	}
//	
//}
//void exercicio4() {
//	//declarar variaveis normais 
//	int valor1 = 10, valor2 = 15;
//	//invocar o procedimento para verificar qual dos numeros é maior
//
//	verifica_numeros(valor1, valor2);  
//	
//
//}
//void recebe_valores(int *n1, int *n2) {
//	*n1=30;
//	*n2 = 75;
//	printf("valor de n1:%d\n",*n1);
//	printf(" valor de n2:%d\n", *n2);
//	
//}
//void exercicio5() {
//	//declarar variaveis normais 
//	int num1 = 5, num2 = 10;
//	//invocar o procedimento para verificar qual dos numeros é maior
//	recebe_valores(&num1, &num2);
//	printf("valor de n1:%d\n", num1);
//	printf("valor de n2:%d\n", num2);
//
//}
//
//
//void main() {
//	//teste_ponteiro();
//	//exercicio1();
//	//exercicio2();
//	//exercicio3();
//	//exercicio4();
//	//exercicio5();
//	
//}