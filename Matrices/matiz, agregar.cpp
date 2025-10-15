//JMLC - CREACION DE MATRICES

#include<iostream>

using namespace std;

int main(){
	int fila, column;
	cout<<"Digite el numero de filas: ";
	cin>>fila;
	
	cout<<"Digite el numero de columnas";
	cin>>column;

	int matriz[fila][column];
	
	for(int i= 0; i<fila; i++){
		for(int j = 0; j<column; j++){
			cout<<"Digite el valor ("<<i<<")"<<" ("<<j<<"): ";
			cin>>matriz[i][j];	
		}
	}
	
	for(int i=0; i<fila ;i++){
		for(int j=0; j<column;j++){
			cout<<matriz[i][j]<<" - ";
		} 
	}
	
	return 0;
}
