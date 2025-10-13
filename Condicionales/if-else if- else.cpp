//JMLC - if, else if y else

#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	
	if(edad <= 11){
		cout<<"\nEs un niño";
		
	}else if(edad>=12 && edad<=17){
		cout<<"\nAdolescente";
		
	}else if(edad>=18 && edad<=40){
		cout<<"\nAdulto";
	}else if (edad>=41 && edad<=60){
		cout<<"\nMayor de edad";
	}else{
		cout<<"\nAnciano";
	}			
	
	return 0;
}
