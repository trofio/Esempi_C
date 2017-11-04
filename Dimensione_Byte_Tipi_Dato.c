#include <stdio.h>
#include <stdbool.h>

/****************************************************************/
/* programma per visualizzare la dimensione in byte dei         */
/* principali tipi di dato del linguaggio C                     */
/*                                                              */
/****************************************************************/

void main()
{
   int ch, in, sh, lo, fl, dd, ld, bl;

   ch = sizeof(char);   //il comando sizeof() mi restituisce la dimensione
   in = sizeof(int);    //in byte del tipo di dato passato come argomento
   sh = sizeof(short);
   lo = sizeof(long);
   fl = sizeof(float);
   dd = sizeof(double);
   ld = sizeof(long double);
   bl = sizeof(bool);

   //stampo nella console i risultati
   printf("\n");
   printf(" Tipo      Dimensione\n");
   printf("-----------------------\n");
   printf("char        %d byte\n", ch);
   printf("short       %d byte\n", sh);
   printf("int         %d byte\n", in);
   printf("long        %d byte\n", lo);
   printf("float       %d byte\n", fl);
   printf("double      %d byte\n", dd);
   printf("long double %d byte\n", ld);
   printf("boolean     %d byte\n", ld);
}
