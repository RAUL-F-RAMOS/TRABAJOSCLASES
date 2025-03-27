//Raúl Fernando Ramos Lara 
//202510050022
//Intercambio de valores *
#include<iostream>
using namespace std;
int main(){
	
	int x,y,aux;
	cout<<"ingrese el valor de x: ";cin>>x;
	cout<<"ingrese el valor de y: ";cin>>y;
	
	//x=10
	//y=5
	 	aux=x; //guarda la variable auxiliar la variable x
	 	x=y;//guarda el valor de la variable y
	 	y=aux;//Y intercambia el valor de x
	 	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<y<<endl;
	 	     
	 	
	
	return 0;
}