/****************************************************************/
/* Esempio di utilizzo del costrutto "for" per il calcolo della	*/
/* media di un insieme di valori numerici inseriti dall'utente	*/
/****************************************************************/
#include <stdio.h>

void main()
{
	int numero; // Numero inserito dall'utente
	int somma = 0; // Somma dei numeri inseriti
	int conta = 0; // Contatore dei numeri inseriti
	float media;

	printf("Inserisci i voti, [0] per uscire\n");
	do {
		scanf("%d", &numero);
		somma += numero; // equivalente a: totale = totale + numero;
		if(numero == 0) {
			printf("Grazie. Fine routine.\n");
			if (conta==0)
				conta=1; 	//serve per non causare un divide by 0
							//quando calcolo la media
		}
		else conta++;
	} while (numero != 0);

	media = (float)somma/conta;  //utilizzo del cast
	printf("Il valore medio e' %0.2f\n", media); //visualizzo solo 2 decimali
}
