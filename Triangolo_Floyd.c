/*********************************************************************/
/* algoritmo che costruisce il triangolo di Floyd di altezza 'x'     */
/* scelta dall'utente. Ad es:                                        */
/* 1                                                                 */
/* 23                                                                */
/* 456                                                               */
/* 78910                                                             */
/* ........                                                          */
/*********************************************************************/

#include <stdio.h>
#include <math.h>

void main() {
  int tot_righe; //altezza del triangolo,cioe' di quante righe e' formato
  int indice = 1;
  int colonne = 1;
  int numero = 1; //numero che scrivero' nel triangolo

  printf("inserisci l'altezza del triangolo di Floyd ");
  scanf("%d",&tot_righe);

  //finche' ci sono righe
  while(righe <= tot_righe) {
    //finche' ci sono colonne 
    while (indice <= colonne) {
      printf("%2d",numero);
      numero = numero +1;
      indice = indice +1;
    }
    printf("\n");
    indice = 1;
    colonne = colonne + 1; //in alternativa colonne++;
  }

}
