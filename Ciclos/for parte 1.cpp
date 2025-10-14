//JMLC - for parte1

#include<iostream>

using namespace std;

int main(){
	
	int num; 
	
	cout<<"Digite un valor: ";
	cin>>num; 
	
	cout<<"\n******** TABLA DE MULTIPLICAR DE "<<num<<" ********"<<endl;
	for(int i = 0; i<=15; i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	
	cout<<"\n******** TABLA DE MULTIPLICAR DE "<<num<<" PERO CON NUMEROS PARES ********"<<endl;
	for(int i = 0; i<=15; i = i +2){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	
	return 0;
}
