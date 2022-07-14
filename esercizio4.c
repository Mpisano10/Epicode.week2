#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numero;
	int conta;
	float somma;
	float media;

	somma=0;
	conta=0;

	printf("Inserire unaserie di numeri,la condizione di terminazione è il numero zero.\n");
	printf("Inserisci numero: ");
	scanf("%d", &numero );
 	while (numero!=0)
{
		somma= somma+numero;
		conta= conta+1;
		printf("inserisci numero: ");
		scanf("%d", &numero);
}

	media=somma/conta;
	printf("\n");
	printf("Numeri inseriti %d, somma %f, media %f \n", conta, somma, media);
	exit(0);
}
