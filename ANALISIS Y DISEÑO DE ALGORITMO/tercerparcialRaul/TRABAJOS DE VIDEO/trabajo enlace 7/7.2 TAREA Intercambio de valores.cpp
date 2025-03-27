//Raúl Fernando Ramos Lara 
//202510050022
//TAREA Intercambio de valores *
#include<iostream>+
using namespace std;
int main(){

    float a,b,c,d, final = 0;
	
	cout<<"Digite la nota del primer estudiante: ";cin>>a;
	cout<<"Digite la nota del segundo estudiante:";cin>>b;
	cout<<"Digite la nota del tercer estudiante: ";cin>>c;
	cout<<"Digite la nota del cuarto estudiante: ";cin>>d;
	
	final = (a + b + c + d) / 4;
	
	
	cout<<"\nEl promedio final de los 4 estudiantes es de: "<<final<<endl;
	

	return 0;
}
