#include <stdio.h>
#include <conio.h>
int main(void)
{
  int n1, n2, resto, quociente;
  
  printf ("\nDigite um numero:");
  scanf ("%d", &n1);
  
  printf ("\nAgora, digite outro:");
  scanf ("%d", &n2);
  
  resto = n1 % n2;
  quociente = n1 / n2;
  
  printf ("O resto da divisao e %d",resto);
  printf ("e o quociente da divisao e %d.", quociente);
  

  getch();
  return(0);
}
