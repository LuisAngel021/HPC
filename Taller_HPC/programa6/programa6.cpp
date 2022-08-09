/************************
* Luis Angel Rodriguez Calderon
*Programa #6
*Este programa recibe dos numeros, los cuales
*validara si no son negativos y ademas el primer valor
*no debe de ser mayor al segundo. Posteriormente
*hara un rango de multiplos de 5 y mostrara el resultado final
*************************/

#include <iostream>
#include <math.h>
#include <stdio.h>

/*Funcion para evaluar los numeros y hacer el rango para mstrar y sumar los multiplos de 5*/
void evaluarNumeros(int a, int b){
	//Se crea una variable suma que se encargara de sumar los multiplos de 5
	int suma=0;
	for(int i=a;i<b;i++){
		if(i%5==0){
			std::cout<<"\nLos multiplos son: "<<i<<std::endl;
			suma=suma+i;
		}	
		}
	std::cout<<"\nEl total de la suma de los multiplos es: "<<suma<<std::endl;
}

/*Funcion para intercambiar los valores de a y b en caso de a ser mayor que b*/
void cambiar(int a,int b){
	//Se crea una variable temporal que almacene el valor de a y asi poder hacer el cambio
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	evaluarNumeros(a,b);
	
}


int main(){
	int a,b;
	
	std::cout<<"Digite el valor de a"<<std::endl;
	std::cin>>a;
	
	std::cout<<"Digite el valor de b"<<std::endl;
	std::cin>>b;
	
	if(a<0 or b<0){
	std::cout<<"No puede ingresar numeros negativos"<<std::endl;
	main();
	}
	else{
	if(a<b){evaluarNumeros(a,b);}
	else{cambiar(a,b);}
	}
	
	return 0;
}



