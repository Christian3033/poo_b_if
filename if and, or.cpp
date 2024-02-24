#include <iostream>
using namespace std;

int main(){
	//and (y) &&
	//or (O) ||
	char lapiz, lapicero, cuaderno;
	
	/*cout<<"Trae lapiz(s/n): ";
	cin>>lapiz;
	
	cout<<"Trae lapicero(s/n): ";
	cin>>lapicero;
	
	if(lapiz == 's' && lapicero == 's'){
		
		cout<<"Ingrese"<<endl;
		
	}else{
		
		cout<<"Lo siento, no puede ingresar :((("<<endl;
		
	}*/
	
		cout<<"Trae lapiz(s/n): ";
	cin>>lapiz;
	
	cout<<"Trae lapicero(s/n): ";
	cin>>lapicero;
	
	cout<<"Trae cuaderno(s/n): ";
	cin>>cuaderno;
	
	if((lapiz == 's' || lapicero == 's') && cuaderno == 's'){
		
		cout<<"Ingrese"<<endl;
		
	}else{
		
		cout<<"Lo siento, no puede ingresar :((("<<endl;
		
	}
	
	system("pause");
}
