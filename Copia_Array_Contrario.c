#include <stdio.h>

/****************************************************************************/
/* copia il contenuto di array1 dentro array2 scrivendolo al contrario   */
/****************************************************************************/

void main() {
  int i,j;
  int array1[6] = {1,2,3,4,5,6}; //array1 contiene gia' i valori
  int array2[6];

  //copio il contenuto di array1 dentro array2 in ordine inverso
  j=5;
  for (i=0; i<6; i++) {
    array2[j] = array1[i];
    j--;
  }

  /*metodo alternativo per copiare array1 dentro ad array2 invertendo
    l'ordine dei valori contenuti nelle celle
  j=0;
  for (i=5; i>=0; i--) {
    array2[j] = array1[i];
    j++;
  }
  */

  //stampo array1
  for (i=0; i<6; i++) {
    printf("%d\t",array1[i]);
  }
  
  printf("\n\n");

  //stampo array2
  for (i=0; i<6; i++) {
    printf("%d\t",array2[i]);
  }
  printf("\n");
}
