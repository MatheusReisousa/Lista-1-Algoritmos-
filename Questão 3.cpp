#include<stdio.h>
int main () {
	double RESULTADO, A, B, C;
	printf("Insira aqui o primeiro valor:\n");
	scanf("%lf", &A);
	printf("Insira aqui o segundo valor:\n");
	scanf("%lf", &B);
	printf("Agora, o terceiro valor:\n");
	scanf("%lf", &C);
	RESULTADO = (A + B+ C)/3;
	printf("O resultado da media aritmetica e igual a : %lf", RESULTADO);
	return 0;
	
}
