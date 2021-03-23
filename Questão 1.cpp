#include<stdio.h>
int main () {
	int HORAS, MINUTOS, SEGUNDOS;
	printf("Coloque aqui qual valor, em horas, deseja converter: \n");
	scanf("%d", &HORAS);
	MINUTOS = HORAS * 60;
	SEGUNDOS = HORAS * 3600;
	printf("O valor, em minutos, corresponde a: %d\n", MINUTOS);
	printf("O valor, em segundos, correponde a: %d\n", SEGUNDOS);
	return 0;
	
}
