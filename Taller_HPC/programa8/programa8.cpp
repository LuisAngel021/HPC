/************************
* Luis Angel Rodriguez Calderon
*Programa #8
*Este programa recibe 3 datos, para poder realizar
*la serie 1/x+ay, se le solicitara las 3 entradas al usuario
*para posteriormente mostrar el resultado.
*************************/
#include <iostream>
#include <math.h>
#include <stdio.h>

// Esta funcion permite evaluar la serie e la sumatoria de b cuando a=0
// donde 1/x+a*y
void evaluar_serie(double x, double y, double b){
	
	double a;
	double suma=0;
	double total=0;	
	
	for(a=0;a<=b;a++){
	total=1/(x+a*y);
	suma=suma+total;
	}
	std::cout<<"El valor de la serie es: "<<suma<<std::endl;

	
}

int main(){
	//El valor de x no puede ser 0 en su primera iteracion o dara error.
	double b,x,y;
	
	std::cout<<"Digite el valor para x: "<<std::endl;
	std::cin>>x;
	std::cout<<"Digite el valor para y: "<<std::endl;
	std::cin>>y;
	std::cout<<"Digite el valor para b: "<<std::endl;
	std::cin>>b;
	if(x>0){
	evaluar_serie(x,y,b);
	}
	else{
	std::cout<<"x no puede ser 0 en su primera iteracion"<<std::endl;
	}
	return 0;
}
