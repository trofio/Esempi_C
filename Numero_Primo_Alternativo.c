/*************************************************************/
/*  calcola se un numero è primo versione ALTERNATIVA, senza */
/*  l'uso del return per uscire dal programma                */
/*************************************************************/

#include <stdio.h>

void main() {
  int numero;
  int indice = 2;
  int resto;
  char primo = 't'; //utilizzo una variabile char come se fosse
                    //booleana, t=true e f=false

  printf("Inserisci il numero che ti interessa ");
  scanf("%d",&numero);

  while(indice <= numero/2 && primo == 't') { //posso creare condizioni
                                              //complesse con gli operatori
                                              //logici "&&" (and) e "||" (or)
    resto = numero % indice;   //"%" e' l'operatore di modulo
    if (resto == 0)
      primo = 'f';
    else
      indice = indice + 1;
  }

  if (primo == 't')
    printf("il numero %d è primo\n",numero);
  else
    printf("%d non è un numero primo\n",numero);
}
