//JMLC - Ciclo while parte 2 

#include<iostream>

using namespace std;

int main(){
	bool bandera = true;
	string tieneSueno;
	
	while(bandera){
		
		cout<<"Tienes sueño[s/n]: ";
		cin>>tieneSueno;
		
		if(tieneSueno == "s" || tieneSueno == "S" ){
			cout<<"Procede a dormir";
			bandera = false;
		}else{
			cout<<"Vamos a lokiar :)";
			bandera = true;
		}
		
	}
	
	return 0;
}
