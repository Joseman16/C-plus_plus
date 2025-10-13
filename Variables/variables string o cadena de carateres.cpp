//JMLC - variables de tipo cadena de caracteres o string

#include<iostream>
#include<string.h>
#include<cstring> //para usar el strlen()

using namespace std;

int main (){
	string saludo1 = "Hola lola";
	char saludo2[30] = "Como estamos chicos";
	char saludo3[6] = "Hola";
	
	cout<<"\n\t Variables tipo char y string"<<endl;
	cout<<"String: "<<saludo1<<endl;
	cout<<"Char[n]: "<<saludo2<<endl; 
	
	cout<<"\n\tEjemplo de cadena de caracteres por elemento"<<endl;
	cout<<"Saludo: "<<saludo3<<endl;
	cout<<"posicion[0]: "<<saludo3[0]<<endl;
	cout<<"posicion[1]: "<<saludo3[1]<<endl;
	cout<<"posicion[2]: "<<saludo3[2]<<endl;
	cout<<"posicion[3]: "<<saludo3[3]<<endl;
	cout<<"posicion[4]: "<<saludo3[4]<<endl;
	
	cout << "\nCuantos caracteres tiene Hola: " << strlen(saludo3) << endl;

 

	return 0;
}

