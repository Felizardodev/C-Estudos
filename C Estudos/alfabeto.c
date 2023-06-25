#include <stdio.h>

int main ()
{
	int letra;
	
	printf ("Lista com as letras do alfabeto: \n");
	
	for (letra = 'a'; letra <= 'z'; letra++)
	{
		printf ("%c", letra);
	}
	printf ("\n\n");
	
	return 0;                                
}
