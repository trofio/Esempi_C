/***********************************************************************/
/* Calcola le radici (x1, x2) di una equazione di secondo grado        */
/*                                                                     */																	                                   */
/***********************************************************************/

#include <stdio.h>
#include <math.h>  //libreria delle funzioni matematiche

void main() {
	float a, b, c;			//coefficienti dell'equazione
	float delta, x1, x2;		//delta e radici dell'equazione

	//acquisisco i dati dall'utente
	printf("data la generica equazione di II grado ax^2+bx+c=0 \ninserisci i coefficienti a, b e c:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	//faccio un po' di debug
  	printf("Hai inserito: a=%f, b=%f, c=%f\n\n",a,b,c);

	//elaboro
	if (a == 0)
		printf("Non e' un'equazione di II grado\n");
	else {
		delta= b * b - 4 * a *c;  //calcolo il delta e poi lo analizzo
		if (delta < 0)
			printf("Non esistono soluzioni reali a questa equazione\n");
		else {
			x1= (-b+sqrtf(delta)) / 2*a;
			x2= (-b-sqrtf(delta)) / 2*a;
			printf("Le soluzioni dell'equazione %.0fx^2+%.0fx+%.0f=0 sono\n x1=%.2f\n x2=%.2f\n\n\n",a,b,c,x1,x2);
		}
	}

}
