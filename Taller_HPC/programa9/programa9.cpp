/************************
* Luis Angel Rodriguez Calderon
*Programa #11
*Realizar un programa que calcule el importe a pagar por un vehículo 
*al circular por una autopista. El vehículo puede ser una bicicleta, 
*una moto, un coche o un camión.
**************************/

#include <iostream>
#include <math.h>
#include <stdio.h>

//Esta funcion contiene un switch que permite elegir el vehiculo
void importe(int opc){
	
	int tarifabici=100, motos=30, carros=30, camiones=30, Toneladas=25;
	int km, resultado, num_tonelada;
	switch (opc){
	
		case 1:
		std::cout<<"El importe a pagar por circular con la bicicleta es: "<<tarifabici<<std::endl;
		break;
		
		case 2:
		std::cout<<"Digite el numero de kilometros recorridos con la moto: "<<std::endl;
		std::cin>>km;
		resultado = motos*km;
		std::cout<<"El importe a pagar por la moto es: "<<resultado<<std::endl;
		break;
		
		case 3:
		std::cout<<"Digite el numero de kilometros recorridos en el coche: "<<std::endl;
		std::cin>>km;
		resultado = carros*km;
		std::cout<<"El importe a pagar por el coche es: "<<resultado<<std::endl;
		break;
		
		case 4:
		std::cout<<"Digite el numero de kilometros recorridos en el camion: "<<std::endl;
		std::cin>>km;
		std::cout<<"Digite el numero de toneladas de su camion: "<<std::endl;
		std::cin>>num_tonelada;
		resultado = (camiones*km)+(num_tonelada*Toneladas);
		std::cout<<"EL usuario del camion debe pagar: "<<resultado<<std::endl;
		break;
		
		case 5:
		std::cout<<"Usted ha salido del programa"<<std::endl;
		break;
		
		default:
		std::cout<<"La opcion seleccionada no esta disponible"<<std::endl;
		break;
	}

}

//Funcion menu que desplegara el texto con las opciones a elegir
void menu(){

	int opc;
	
	std::cout<<"Bienvenido usuario, digite la opcion a realizar: "<<std::endl;
	std::cout<<"\n1. calcular su importe a pagar por el uso de bicicleta: "<<std::endl;
	std::cout<<"\n2. calcular su importe a pagar por el uso de su motocicleta: "<<std::endl;
	std::cout<<"\n3. calcular su importe a pagar por el uso de su vehiculo: "<<std::endl;
	std::cout<<"\n4. calcular su importe a pagar por el uso de su camion: "<<std::endl;
	std::cout<<"\n5. Salir: "<<std::endl;
	std::cout<<"Opcion: ";
	std::cin>>opc;
	
	importe(opc);
}

int main(){
	menu();
	return 0;
}
