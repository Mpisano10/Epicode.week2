#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	float a, b, media;
	printf("Digita il primo numero:\n");
	scanf("%f", &a);

	printf("Digita il secondo numero:\n");
	scanf("%f", &b);
	media=(a+b)/2;
	printf("la media è: %6.2f", media);
}
