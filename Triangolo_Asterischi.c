#include <stdio.h>
#include <unistd.h>
#include <time.h>

/****************************************************************************/
/*   programmma per la stampa di un triangolo di asterischi di altezza      */
/*    stabilita dall'utente partendo dal flow chart                         */
/****************************************************************************/

void main() {
  int altezza;      //variabili
  int larghezza;
  int dx, sx;
  int colonna;
  int riga;

  printf("inserisci l'altezza del triangolo in righe");   //trapezio
  scanf("%d",&altezza);

  larghezza = altezza * 2 - 1;  //inizializzo le variabili
  dx = larghezza / 2 + 1;
  sx = dx;
  colonna = 1;
  riga = 1;

  while(riga <= altezza) {            //cicli while innestati
    while(colonna <= larghezza) {
      if (colonna < sx)
        printf(" ");
      else if (colonna <= dx)
        printf("*");
      else
        printf(" ");
      colonna++;
    }
    printf(" %d\n",riga);
    usleep(500000);   //temporizzo i printf in modo che il triangolo 
    riga++;           //sembri "costruito" un pezzo alla volta
    colonna = 1;
    sx--;
    dx++;
  }

}
