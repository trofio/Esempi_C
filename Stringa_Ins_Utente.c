#include <stdio.h>

/******************************************************************************/
/* programma che dichiara 2 stringhe (come array di char) e le fa riempire    */
/* all'utente con due metodi diversi                                          */
/******************************************************************************/

void main() {
	
  int i; //contatore
  char parolaScanf[10];  /* dichiara le stringhe */
  char parolaGets[80];     
  
  printf("inserisci la stringa\n");
  
  for (i=0; i<10; i++) {      /* riceve l'input */
  	scanf("%c", &parolaScanf[i]);  
  }
  
  for (i=0; i<10; i++) {     /* fornisce l'output */
  	printf("%c",parolaScanf[i]);
  }
  printf("\n");
  
  fflush(stdin); 
  
  //funzioni alternative della libreria stdio.h
  gets(parolaGets);        /* riceve l'input */
  puts(parolaGets);        /* fornisce l'output */
  
}

/*******************************************************************************/
/* ESERCIZIO: modificare il presente programma in modo che l'inserimento da    */
/* parte dell'utente termini con la pressione del tasto enter e non per forza  */
/* al 10mo carattere inserito.                                                 */
/* DOMANDA: a cosa serve il comando fflush() prima di gets() e puts()?         */
/*******************************************************************************/
