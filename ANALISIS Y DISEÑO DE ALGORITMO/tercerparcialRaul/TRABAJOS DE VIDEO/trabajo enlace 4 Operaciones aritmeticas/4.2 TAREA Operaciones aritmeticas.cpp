//Raúl Fernando Ramos Lara 
//202510050022
//Tarea de Operaciones aritmeticas
#include <iostream>
using namespace std;
int main(){
	
	int precioP,precioF, IVA;
	cout<<"ingrese el precio del producto"<<endl;
	cin>>precioP;
 
	IVA=precioP*0.15;
	precioF=precioP+IVA;
	
	cout<<"el precio total del producto con el IVA es: "<<precioF<<endl;
	
	
	return 0;
}