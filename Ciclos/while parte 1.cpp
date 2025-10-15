//JMLC - Ciclo while parte 1

#include<iostream>

using namespace std;

int main(){

	int indice = 1, num; 
	
	cout<<"Digite el valor a multiplicar: ";
	cin>>num;
	
	while(indice<=20){
		cout<<num<<" * "<<indice<<" = "<<num*indice<<endl;
		indice++; //indice = indice + 1
	}
	
	return 0;
}

