//Raúl Fernando Ramos Lara
//202510050022
//Area
#include<iostream>
using namespace std;
int main()

{
	double base,altu,area,perimetro;
	cout<<"Ingrese la base y altura del rectangulo"<<endl;
	cin>>base>>altu;
	area=base*altu;
	perimetro=2*(base+altu);
	
	cout<<"El area del rectangulo es: "<<area<<endl;
	cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;
	
	return 0;
}