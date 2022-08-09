/************************
* Luis Angel Rodriguez Calderon
*Programa #4
*Este programa lo que hace es un ciclo
*repetitivo donde en su primera ejecucion
*Ejecutara otro ciclo e imprimira el valor
*Este proceso lo realizara hasta llegar al 
*limite indicado y mostrara los numeros del 6 al 1
*************************/



#include <stdio.h>
int main(){
	int x = 0, y = 0;
	for (x = 6; x > 0; x -= 2)
	for (y = 0; y < 2; y++)
	printf("%d ", x-y);
	return 0;
}
