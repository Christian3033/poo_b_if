#include <iostream>
using namespace std;

int main(){
	//determinar si un numero es par o impar
	int numero = 0;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if((numero%2) ==0){
		
		cout<<"El numero ingresado es par"<<endl;
		
	}else{
		
		cout<<"El numero ingresado es impar"<<endl;
		
	} 
	
	system("pause");
}
