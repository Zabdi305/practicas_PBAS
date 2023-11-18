#include<iostream>
#include<string>
using namespace std;
int main(){
	const int numestudiante = 5;
	int asistencia[numestudiante];
	
	for(int k=0; k<numestudiante; k++){
	asistencia[k]=0;
    }
	cout<<"bienvenido sea al sistema de asistencia"<<endl;
	cout<<"registra la asistencia de los alumnos"<<endl;
	cout<<"registra el nombre de los alumnos e indica si asistio:"<<endl;
	for(int k=0; k<numestudiante; k++){
		string nombre;
		char asistio;
		cout<<"alumno:"<<k+1<<":";
		cin>>nombre;
		cout<<"¿si asistio? (si/no)";
		cin>>asistio;
		
		if(asistio == 's'or asistio =='s'){
			asistencia[k] == 1;
		}
	}
	int faltas = 0;
	for(int k=0; k<numestudiante; k++){
		if(asistencia[k]== 0){
			faltas++;
		}
	}
    	int asistio = 0;
	for(int k=0; k<numestudiante; k++){
		if(asistencia[k] == 0){
			asistio++;
			}	
	   }
	cout<<"numero de faltas"<<faltas<<endl;
	cout<<"numero asistieron"<<asistencia<<endl;
	return 0;
}
