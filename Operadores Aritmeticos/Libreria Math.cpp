//JMLC - Libreria math.h

#include<iostream>
#include<math.h>

using namespace std;

int main (){
	int numeroEntero = 64;
	float numeroFlotante = 120.91; //numero de tipo decimal
 	
	cout<<"************Numero Entero************"<<endl;
	cout<<"Valor absoluto: "<<abs(numeroEntero)<<endl;
	cout<<"Raiz cuadrada: "<<sqrt(numeroEntero)<<endl;
	cout<<"Raiz cubica: "<<cbrt(numeroEntero)<<endl; 
	cout<<"Potencia: "<<pow(numeroEntero, 2)<<endl; //64*64
	cout<<"Potencia: "<<pow(numeroEntero, 3)<<endl; //64*64*64
	cout<<"Seno: "<<sin(numeroEntero)<<endl;
	cout<<"Coseno: "<<cos(numeroEntero)<<endl;
	cout<<"Tangente: "<<tan(numeroEntero)<<endl;
	cout<<"Logaritmo natural: "<<log(numeroEntero)<<endl;
	cout<<"Logaritmo de base 10: "<<log10(numeroEntero)<<endl;
	cout<<"Exponencial: "<<exp(numeroEntero)<<endl;
	
	cout<<"\n************Numero Flotante o Decimal************"<<endl;
	cout<<"Valor absoluto: "<<abs(numeroFlotante)<<endl;
	cout<<"Raiz cuadrada: "<<sqrt(numeroFlotante)<<endl;
	cout<<"Raiz cubica: "<<cbrt(numeroFlotante)<<endl; 
	cout<<"Potencia: "<<pow(numeroFlotante, 2)<<endl; // (120.91 * 120.91)
	cout<<"Potencia: "<<pow(numeroFlotante, 3)<<endl; //(120.91 * 120.91 * 120.91)
	cout<<"Seno: "<<sin(numeroFlotante)<<endl;
	cout<<"Coseno: "<<cos(numeroFlotante)<<endl;
	cout<<"Tangente: "<<tan(numeroFlotante)<<endl;
	cout<<"Logaritmo natural: "<<log(numeroFlotante)<<endl;
	cout<<"Logaritmo de base 10: "<<log10(numeroFlotante)<<endl;
	cout<<"Exponencial: "<<exp(numeroFlotante)<<endl;
	cout<<"Redondeo hacia abajo: "<<floor(numeroFlotante)<<endl;
	cout<<"Redondeo hacia arriba: "<<ceil(numeroFlotante)<<endl;
	
	return 0;
}
