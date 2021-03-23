#include<stdio.h>
int main (){
	double RAIO, AREA;
	printf("Insira o raio do circulo cuja area sera calculada:");
	scanf("%lf", &RAIO);
	AREA = RAIO * RAIO * 3.14;
	printf("A area do circulo equivale a: %lf", AREA);
	return 0;
}
