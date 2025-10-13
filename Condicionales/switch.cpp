//JMLC - Switch

#include<iostream>

using namespace std;

int main (){
	//Atletismo
	int posicion;
	
	cout<<"Indicar en que posición termino: ";
	cin>>posicion;
	
	
	switch(posicion){
		case 1: cout<<"Medalla de Oro"; 
			break;
		case 2: cout<<"Medalla de Plata";
			break;
		case 3: cout<<"Medalla de Bronce";
			break;
		default: cout<<"Diploma Olimpico";
	}
	
	return 0;
}
