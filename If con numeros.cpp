#include <iostream>

using namespace std;

int main (){
	//Numero es positivo o negativo
	int numero = 0;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if(numero > 0){
		
		cout<<"El numero ingresado es positivo"<<endl;
	}else{
		
		if(numero == 0){
		
				cout<<"El numero ingresado es neutro"<<endl;
		
				}else{
		
					cout<<"El numero ingresado es negativo"<<endl;
			}
		
	}
	
		
	
	system("pause");
	return 0;
}
