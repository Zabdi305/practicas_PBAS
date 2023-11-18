#include<iostream>
using namespace std;
int main(){
	const int misarreglos = 5;
	int numeros[misarreglos];
	
	for(int j=0; j< misarreglos;j++){
		cout<<"ingrese el numero"<<j+1<<":";
		cin>>numeros[j];
	}
	cout<<"los numeros ingreados son :";
	for(int k=0; k<misarreglos; k++){
		cout<<numeros[k]<<"";
		
	}
	cout<<endl;
	return 0;
}
