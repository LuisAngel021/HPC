/************************
* Luis Angel Rodriguez Calderon
*Programa #5
*Este programa lo que hace es un ciclo
*repetitivo donde primero se toma el valor
*inicial de a y lo divide en 10 para despues
*mostrarlo, este proceso lo realiza 4 veces
*************************/
#include <stdio.h>



void fnx(int x){
	if (x) printf("Los resultados de la division en base 10 son: %d \n", x);
}


int main() {
	int i, a = 1234;
	for (i = 0; i < 4; i++)
	fnx(a = a/10);

}
