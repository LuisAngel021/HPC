/************************
* Luis Angel Rodriguez Calderon
*Programa #3
*Este programa lo que hace es un ciclo
*repetitivo donde primero se toma el valor de a
*en el abecedario, posteriormente tomara la letra
*que este 10 espacios despues de la a y asi sucesivamente
*************************/


#include <stdio.h>


int main() {
	int x = 0;
	for (x = 'a'; x <= 'z'; x += 10)
	{
	printf("la letra es: %c \n", x);
	}
	return 0;
}
