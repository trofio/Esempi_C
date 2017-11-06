/****************************************************************/
/* In questo programma si introduce l'uso dell'operatore 				*/
/* "cast". Formato: (nome del tipo) espressione 								*/
/* "espressione" in genere e' una variabile che viene		    		*/
/* convertita nel tipo specificato 							    						*/
/****************************************************************/

#include <stdio.h>
#include <math.h> //serve per usare la funzione sqrt

void main()
{
	int num_intero;
	double risultato;
	double appoggio;

	num_intero = 21;
	// converto num_intero in un double prima
	// di calcolarci ad es. la radice quadrata

	risultato = sqrt( (double) num_intero );
	printf("radice quadrata di %d = %f \n",num_intero,risultato);
	// nota : num_intero rimane inalterato
	printf("num_intero = %d \n",num_intero);

	//potevo anche usare una variabile di appoggio
	//prima del calcolo
	appoggio = (double) num_intero;
	risultato = sqrt(appoggio);
	printf("risultato con variabile di appoggio %f\n",risultato);
}
