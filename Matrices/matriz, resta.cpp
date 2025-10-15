//JMLC - Matriz resta

#include<iostream>

using namespace std;

int main(){
	int fila, column;
	
	cout<<"Digite el numero de fila: ";
	cin>>fila;
	
	cout<<"Digite el numero de columna: ";
	cin>>column;
	
	int matriz1[fila][column];
	int matriz2[fila][column];
	
	
	cout<<"\n********* MATRIZ 1 *********"<<endl;
	for(int i= 0; i<fila; i++){
		for(int j= 0; j<column; j++){
			cout<<"Digite el valor ("<<i<<") ("<<j<<"): ";
			cin>>matriz1[i][j];
		}
	}
	
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < column; j++){
			cout<<matriz1[i][j]<<" - ";
		}
		cout<<endl;
	}
	
	
	cout<<"\n********* MATRIZ 2 *********"<<endl;
	for(int i= 0; i<fila; i++){
		for(int j= 0; j<column; j++){
			cout<<"Digite el valor ("<<i<<") ("<<j<<"): ";
			cin>>matriz2[i][j];
		}
	}
	
	for(int i = 0; i < fila; i++){
		
		for(int j = 0; j < column; j++){
			cout<<matriz2[i][j]<<" - ";
		}
		cout<<endl;
	}
	
	return 0;
}
