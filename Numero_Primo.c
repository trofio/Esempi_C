/*************************************************************/
/*  calcola se un numero inserito dall'utente è primo        */
/*                                                           */
/*************************************************************/

#include <stdio.h>

int main() { //il main e' di tipo integer
  int numero;
  int indice = 2;
  int resto;

  printf("Inserisci il numero che ti interessa: ");
  scanf("%d",&numero);

  //nella condizione del while posso anche fare operazioni
  //matematiche
  while(indice <= numero/2) {
    resto = numero % indice; //l'operatore modulo in C e' "%"
                             //restituisce il resto di una divisione
                             //tra interi
    if (resto == 0) {
      printf("il numero %d non è primo\n",numero);
      return 0; //se il numero non e' primo, il programma termina
                //con il comando "return 0"
                //e le istruzioni successive non vengono eseguite
    }
    else
      indice = indice + 1;
  }

  //se il programma arriva a questo punto il numero fornito in
  //input e' certamente primo, percio' lo comunico all'utente
  //e termino l'esecuzione
  printf("il numero %d è primo\n",numero);
  return 0;
}
