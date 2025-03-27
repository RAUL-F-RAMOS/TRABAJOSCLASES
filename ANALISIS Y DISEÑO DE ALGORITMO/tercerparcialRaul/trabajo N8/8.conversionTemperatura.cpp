//Raúl Fernando Ramos Lara
//202510050022
//ConversionTemperatura
#include<iostream>
using namespace std;
int main ()
{
	double Cel, Fah;
	cout<<"Ingrese los grados celcius"<<endl;
	cin>>Cel;
	Fah=(Cel*9/5)+32;
	
	cout<<"Y la temperatura en grados Fahrenheit es: "<<Fah<<endl;
	
	return 0;
}