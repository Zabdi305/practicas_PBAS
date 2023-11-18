#include<iostream>
using namespace std;
int n1,n2;
int main(){
	char z;
	int suma,resta,multi;
	cout<<"(a)suma";
	cout<<"(b)resta";
	cout<<"(c)multi";
	cin>>z;
switch(z){
    case'a':
	cout<<"digita el primer numero";
	cin>>n1;
	cout<<"digita el segundo numero";
	cin>>n2;
	suma=(n1+n2);
	cout<<"el resultado es"<<suma;
	break;
	case'b':
	cout<<"digita el primer numero";
	cin>>n1;
	cout<<"digita el segundo numero";
	cin>>n2;
	resta=(n1-n2);
	cout<<"el resultado es"<<resta;
	break;
	case'c':
	cout<<"digita el primer numero";
	cin>>n1;
	cout<<"digita el segundo numero";
	cin>>n2;
	multi=(n1*n2);
	cout<<"el resultado es"<<multi;
	break;
	defualt:
	cout<<"no es ninguna operacion basica";
	break;
	}
return 0;
}
	
