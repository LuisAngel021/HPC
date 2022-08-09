/************************
* Luis Angel Rodriguez Calderon
*Programa #7
*Este programa recibira el dia, mes y año de nacimiento
*De ahi realizara una suma para despues desglosarla el numero
*hasta obtener el numero correspondiente del tarot del usuario
*************************/
#include <iostream>
#include <math.h>
#include <stdio.h>

/*Funcion que permite saber su tarot mediante condicionales y metodos matematicos*/
void tarot(int dia,int mes,int anio){
	
	
	int suma,aux, tarot;
	//Condicional que valua los parametros ingresados
	if((dia<32 and dia>0) && (mes<13 and mes>0) && (anio<2022))
	{
		//La variable suma, sumara el dia mes y año
		suma=dia+mes+anio;
		//aux se encarga de desglozar el resultado de la suma numero por numero y sumarlos
		aux=(suma%10)+((suma/10)%10)+((suma/100)%10)+(suma/1000);
		//Hecho lo anterior, tarot desglozara el resultado de aux y dara a conocer su numero de tarot
		tarot=(aux%10)+(aux/10);
		
		std::cout<<"Su numero de tarot es "<<tarot<<std::endl;
	
	}
	else{
	std::cout<<"Los parametros ingresados no son correctos"<<std::endl;
	}
}
//Funcion principal
int main(){
	int dia, mes, anio;
	
	
	std::cout<<"Digite su dìa de nacimiento: "<<std::endl;
	std::cin>>dia;
	std::cout<<"Digite el numero del mes de su nacimiento: "<<std::endl;
	std::cin>>mes;
	std::cout<<"Digite el año de su nacimiento: "<<std::endl;
	std::cin>>anio;
	
	tarot(dia,mes,anio);
	

	return 0;
}
