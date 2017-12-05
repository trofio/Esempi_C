#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*********************************************************************/
/* genera una matrice 10x10 di numeri casuali                        */
/*********************************************************************/

void main() {
  int matrice[10][10];  //matrice di array 10x10
  int i, j;             //indici per scorrere gli array
  int num_casuale;

  srand(time(NULL)); 

  //riempo la matrice di numeri casuali compresi tra 1 e 10
  for (i=0; i<10; i++) {
    for (j=0; j<10; j++) {
      num_casuale = rand() % 10 + 1; //senza il '+ 1' avrei valori
                                     //casuali tra 0 e 9
        matrice[i][j] = num_casuale;
    }
  }

  //ne stampo a schermo il contenuto
  for (i=0; i<10; i++) {
    for (j=0; j<10; j++) {
      printf("%d\t",matrice[i][j]);
    }
    printf("\n\n");
  }
}
