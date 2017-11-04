/******************************************/
/* Questo programma consente di calcolare */
/* l'area di un rettangolo inserendo la   */
/* base e l'altezza                       */
/******************************************/

#include <stdio.h>

/* Inizio del main */
void main() //anche il main potrebbe essere di un "tipo"
            //in questo caso è void, cioè di nessun tipo
{
  int base,altezza,area;
  printf("Inserire base e altezza in cm\n");
  scanf("%d %d",&base,&altezza); /* & restituisce l’indirizzo*/

  /* Codici di formato per la scanf
  Codice  Tipo Dato Nome C
  %d      intero    int
  %c      carattere char
  %f      float     float
  %lf     double    double
   */

  area = base * altezza;

  printf("L'area del rett. di base");
  printf(" %dcm e alt. %dcm e' %dcm^2\n",base,altezza,area);

} /* Fine del main */
