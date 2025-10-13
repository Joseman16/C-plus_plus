//JMLC - Condicional if-else parte 1

#include<iostream>

using namespace std;

int main(){
	string nombre;
	int edad;
	
	cout<<"********* Condicional if y else *********"<<endl;
	
	cout<<"\nIngresar su nombre: ";
	cin>>nombre; 
	
	cout<<"\nIngresar su edad: ";
	cin>>edad;
	
	if(edad>=18){
		cout<<"\n"<<nombre<<" es mayor de edad con "<<edad; 
	}else{
		cout<<"\n"<<nombre<<" es menor de edad con "<<edad;
	}
	
	return 0;
}
