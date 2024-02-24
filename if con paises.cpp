#include <iostream>
using namespace std;

int main(){
	string pais = "";
	
	cout<<"Ingrese el pais: ";
	cin>>pais;
	
	if (pais == "guatemala"){
		
		cout<<"Orgullosamente soy de "<<pais<<" :)))"<<endl;
	}else{
		
		cout<<pais<<endl;
		
	}
	
	system("pause");
	return 0;
}
