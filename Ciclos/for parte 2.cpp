//JMLC - for parte 2

#include<iostream>
#include<cstring>

using namespace std;

int main(){
	string nombre = "Jaime";
	string palabra; 
	
	for(int i = 0; i<nombre.length(); i++){
		cout<<nombre[i]<<endl;
	}
	
	cout<<"\nDigite una palabra: ";
	cin>>palabra;
	
	cout<<"\n\tLa palabra: "<<endl;
	for(int i = 0; i<palabra.length(); i++){
		cout<<" - "<<palabra[i];
	}
	
	
	return 0;
}
