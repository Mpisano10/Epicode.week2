#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        int numero;
        int numeroIncrementato;
        int numeroDecrementato;

        printf("Inserisci numero \n");
        scanf("%d", &numero);

        numeroIncrementato= numero +2;

        printf("Numero incrementato: %d\n", numeroIncrementato);

        numeroDecrementato= numero -2;

        printf("Numero decrementato: %d\n", numeroDecrementato);

return 0;
}
