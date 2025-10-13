//JMLC - if else parte 

#include<iostream>

using namespace std;

int main(){
	string respuesta; 
	
	cout<<"Aceptas el cupo a la carrera [s/n]: ";
	cin>>respuesta;
	
	//Aqui  uso el operador logico de OR
	if(respuesta == "s" || respuesta == "S"){
		cout<<"\nBienvenido a la carrera";
	}else{
		cout<<"\nCupo rechazado";
	}
	
	return 0;
}
