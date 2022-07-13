/*Inclusione delle librerie*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	/*Dichiarazione delle varibili*/
	int scelta;
	char utente[21];
	int conta=0, x=0, y=0, z=0;
/*Presentazione del gioco*/
	printf("\nBenvenuti al Quizgame\n");
	printf("\nLo scopo del gioco e\' rispondere correttamenteal maggior numero di domande\n");

/*Inizio del do while*/
	do
	{

/*inserimento delle opzioni di scelta e utlizzo Switch*/

	printf("\nSelezionare l\'opzione 1 per iniziare la partita\n");
	printf("\nSelezionare l\'opzione 2 per uscire dal gioco\n");

	scanf("%d", &scelta);

	switch(scelta)
	{
		case 1:
		printf("\nScegliere il numero dell'utente");
		scanf("%s", &utente);

		printf("\nChi è il più grande giocatore al Mondo?\n");
		printf("\nA)Maradona\n");
		printf("\nB)Pelè\n");
		printf("\nC)Messi\n");
		scanf("%d", &x);
		if(x=0)
		{
			conta++;
		}
		printf("\nChi ha vinto i mondiali di calcio nel 2006\n");
		printf("\n1)Italia\n");
		printf("\n2)Germania\n");
		printf("\n3)Brasile\n");
		scanf("%d", &y);
		if(y=1)
		{
			conta++;
		}
		printf("\nChi è\' il CEO di Tesla?\n");
                printf("\n1)Bill Gates\n");
                printf("\n2)NicolaSjj gruoss\n");
                printf("\n3)Elon Mask\n");
                scanf("%d", &y);
		if(z=3)
		{
			conta++;
		}
		printf("\nIl punteggio di %s e\'%d", utente, conta);
		break;
		case 2:
		break;
	}
	}while(scelta=1);
	return 0;
}


