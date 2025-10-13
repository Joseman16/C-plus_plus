//JMLC - varibales numericas

#include<iostream>

using namespace std;

int main(){
	//Las hice constante para que no se modifique el valor
	const int numEntero = 10;
	const long numValorAlto = 10000000;
	const long long numeroLargo = 1000000000000;
	
	cout<<"\n\t Enteros"<<endl;  
	cout<<"Valor entero: "<<numEntero<<endl;
	cout<<"Valor de un valor alto: "<<numValorAlto<<endl;
	cout<<"Aqui usamos dos veces la propiedad long (ej: long long): "<<numeroLargo<<endl;
	
	
	const double numeroDecimal = 212.21259792387;
	const float numeroFLotante = 15.223212;
	
	cout<<"\n\t Decimales o Flotantes"<<endl;
	cout<<"Valor decimal: "<<numeroDecimal<<endl;
	cout<<"Valor Flotante: "<<numeroFLotante<<endl;
	
	return 0;
}
