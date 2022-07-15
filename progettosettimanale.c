#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string ();

int main ()
{
	char scelta= '\0' ;   //qui abbiamo tolto le graffe
	do{	//inseriamo il do poiche alla fine del ciclo se non si dovessero avverare le condizioni si ripresentaall'utente menu 
	menu ();

	scanf (" %c", &scelta); //abbiamo cambiato %d in %c perchè la prima fa riferimento ad un intero menre la seconda ad un carattere 
 //scanf com era scritto è errore perchè il tipo di argomento non è un intero

	switch(scelta)
	{
		case'A':
		moltiplica ();
		break;
		case'B':
		dividi();
		break;
		case'C':
		ins_string();
		break;
		default:	//aggiunta di controllo per  inserimento di comando non corretto
		printf("comando non valido\n");
	}
		}while(scelta != 'A' && scelta != 'B' && scelta != 'C');

	return 0;
}

void menu()
{
	printf("Benvenuto sono un assistente digitale, posso aiutartia sbrigare alcuni compiti\n");
	printf("Come posso aiutarti\n");
	printf("A >> Moltiplica due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica ()
{
	float a,b = 0;   //cambiamo variabile in modo da far uscire anche numero decimali
	printf("Inserisci i due numeri da moltiplicare:\n");

	scanf("%f", &a);

	scanf("%f", &b);

	float prodotto = a * b;

	printf("Il prodotto tra %1.1f e %1.1f è : %1.1f" , a,b,prodotto); //spostiamo i doppi apici per avere lgiusto risultato
}

void dividi ()
{
	int a,b = 0;
        printf("Inserisci il numeratore:");
        scanf("%d", &a);
        printf("Inserisci il denumeratore");
        scanf("%d", &b);

	float divisione = (float) a /  b;// facendo il cast inserendo il float  la divisione può dare anche un numero decimale

	printf ("La divisone tra %d e %d è : %f", a,b,divisione); //spostiamo i doppi apici per avere il giustttto risultato
}

void ins_string()
{
	char stringa[10];

	printf("inserisci la stringa");
	scanf("%s", &stringa);

}
