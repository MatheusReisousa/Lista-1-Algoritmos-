#include <stdio.h>
int main () {
	double A, B, MEDIA;
	printf("Insira aqui a primeira nota: ");
	scanf("%d", &A);
	printf("Agora, insira a segunda nota: ");
	scanf("%d", &B);
	MEDIA = (3.5 * A + 7.5 * B)/11;
	printf("A media das notas e igual a %d", MEDIA);
	return 0;
}
