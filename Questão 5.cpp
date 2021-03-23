#include<stdio.h>
int main () {
	int avulsos, rolos, metros;
	printf("Insira aqui a quantidade de metros necessarios:\n");
	scanf("%d", &metros);
	rolos = metros / 50;
	avulsos = metros - rolos * 50;
	printf("A quantidade de rolos necessaria sera igual a %d\nA quantidade de metros avulsos e %d", rolos, avulsos);
	return 0;
}
