#include<stdio.h>
#include<cstring>

int main ( ) {
	char nome[20], genero;
	int matricula, horasemana, horatotal, valia, salario;
	
	printf ("Insira seu nome: ");
	gets (nome);
	
	printf ("Defina seu genero (M ou F): ");
	scanf("%c", &genero);
	
	printf ("Insira seu numero de matricula: ");
	scanf ("%d", &matricula);
	
	printf ("Escreva sua carga horaria semanal: ");
	scanf ("%d", &horasemana);
	
	printf ("Quanto recebe por hora? ");
	scanf ("%d", &valia);
	horatotal = horasemana * 4; // 4 semanas por mês.
	salario = horatotal * valia;
	printf ("\n Nome do usuario: %s \n Genero: %c \n Numero de matricula: %d \n horas trabalhadas: %d \n valor que recebe por hora: %d \n salario: %d",
	nome, genero, matricula, horatotal, valia, salario);
	return 0;
}
