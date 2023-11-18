#define tope 2023
#define meses 12
#define dias 24
#define horas 60
#define minutos 60
#define segundos 60
//definimos variables de el cidigo de cuanto has vivido
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string> 
#include<stdio.h>
using namespace std;
const int MAX_USERS = 10; // Número máximo de usuarios
const string USERS[] = {"luis", "ricardo", "raul"}; // arreglo para usuarios
const string PASSWORDS[] = {"12345", "hola2", "ingresar"}; // areglo para password
// validacion de usuarios utilizando un dato tipo bolleano 
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
}
int main() {
	int m;
	string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (isValidUser(username, password)){
	}
        cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
        	int m;
			//declaramos variable
				cout<<"EN ESTOS MOMENTOS  SE TE MOSTRARA UNA LISTA QUE PUEDES EJECUTAR  ESCRIBE EL NUMERO DE LA OPCION QUE DESEAS"<<endl;
				//escrivimos e pantalla 
				do{
			cout<<"1-) hola_mundo"<<endl;
			cout<<"2-) promedio"<<endl;
			cout<<"3-) tarea portada stdio.h"<<endl;
			cout<<"4-) variables"<<endl;
			cout<<"5-) lados de un triangulo"<<endl;
			cout<<"6-) for del 1 al 100"<<endl;
			cout<<"7-) for del 100 al 0"<<endl;
			cout<<"8-) numeros pares del 0 al 100"<<endl;
			cout<<"9-) numeros impares del 1 al 100"<<endl;
			cout<<"10-) cronometro"<<endl;
			cout<<"11) tablas multi"<<endl;
			cout<<"12-) switch dia de las semanas"<<endl;
			cout<<"13-) mi arreglo nombres"<<endl;
			cout<<"14-) mi arreglo "<<endl;
			cout<<"15-) asistencias y faltas"<<endl;
			cin>>m;
		}
			//escrivimos las obciones y guardamos en l variable
			
			switch(m){
			//colocamos la variabel que compararemos 
		
			 	case 1:{
			 		//si m es 1
			 		cout<<"HOLA MUNDO COMO ESTAMOSSS"<<endl;
					break;
				    }
				   case 2:{
				   	//si m es 2
				  	int a,b,c,d,e,suma,promedio;
                 	cout<<"hola aqui te voy adar tu promedio"<<endl;
	                 cout<<"ingresa el primer promedio"<<endl;
	                 cin>>a;
                   	cout<<"ingresa el segundo promedio"<<endl;
	                 cin>>b;
                  	cout<<"ingresa el tercer promedio"<<endl;
                  	cin>>c;
                 	cout<<"ingresa el cuarto promedio"<<endl;
                 	cin>>d;
	                 cout<<"ingresa el quinto promedio"<<endl;
                 	cin>>e;
                 	promedio = (a+b+c+d+e)/5;
	                 cout<<"tu promedio general es es de:"<<promedio<<endl;
	                 if(promedio >=7){
	                 	cout<<"tu calificacion es aprobatoria"<<endl;
					 }
					 else{
					 	cout<<"lo lamento tu promedio no es aprobado";
					      }
					      cout<<"gracias por preguntarme por tu promedio";
					      return 0;
					      break;
					      case 3:{
					      	//si m es 3
						  {
							printf(" /n Zabdi Berenice Barragan Garcia.\n");
							printf(" Escuela Conalep Nucalpan 1.\n");
							printf(" Modulo Programacion basica.\n");
							printf(" Maestro Jose Luis Chavez Gomez.\n");
							printf(" Carrera tecnico en bachiller en informatica.\n");
							printf(" Grupo 305.\n");
							printf(" Tercer semestre de bachillerato.\n");
							printf(" Edad 16 años.\n");
							printf(" Correo dcardoso2122@conalepmex.edu.mx.\n");
							
							return 0;
							
							}
							break;
						  }
						  case 4:{
						  	//si m es 4
						  	{
						  	char letra1;
						  	cout<<"Ingresa una letra";
						  	cin>>letra1;
						  	if(letra1 =='a'){
						  	cout<<"es vocal";
							  }
							  if(letra1 == 'e'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'i'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'o'){
							  	cout<<"es vocal";
							  }
							  if(letra1 == 'u'){
							  	 cout<<"es vocal";
							  }
							 else {
							 	cout<<"es consonante";
							 }
							 
							  }
							break;
						  }
						  case 5:{
						  	//si m es 5
						  	{
						  	int num1,num2,num3;
						  	cout<<"dame tu primer numero"<<endl;
						  	cin>>num1;
						  	cout<<"dame tu segundo numero"<<endl;
						  	cin>>num2;
						  	cout<<"dame tu tercer numero"<<endl;
						  	cin>>num3;
						  	
						  	if(num1==num2 and num2==num3){
						  	cout<<"tu triangulo equilatero";
							  }
							else if(num1==num2 and num2==num3){
							cout<<"tu triangulo es isoseles";
							}
							else if(num1 != num2 and num2 != num3){
							cout<<"tu triangulo es escaleno";
							}
							else{
								cout<<" no es un triangulo";
							}
							return 0;
							  }
							break;
						  }
						  case 6:{
						  	//si m es 5
						  	{
						  	int i;
						  	for(i=1;i<100;i++){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 7:{
						  	//si m es 7
						  	{
						  	int e;
						  	for(e=100;e>0;e--){
						  		cout<<e<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 8:{
						  	//si m es 8
						  	{
						  	int i;
						  	for(i=0;i<=100;i+=2){
						  		cout<<i<<endl;
							  }
							  return 0;
							  }
							break;
						  }
						  case 9:{
						  	//si m es 9
						   {
						 int i;
						for(i=1;i<=100;i+=2){
						  	cout<<i<<endl;
								  }
								  return 0;
							  }
							break;
						  }
						  case 10:{
						  	//si m es 10
						  	{
						  	int h = 0, m = 0, s = 0;
							while(1){
							if(s<=60){
							s = 0;
							m++;
							if(m>=60){
							m = 0;
							h++;
							 }
							 }
						     system("cls");
							cout<<h<<":"<<m<<":"<<s;
							Sleep(1000);
							 s++;
							  }
							 cin.get();
							  }
							break;
						  }
						   case 11:{
						   	//si m es 11
				         	{
						    int i;
						    int num;
						  	int multiplicacion;
						     cout<<"Inserta el numero de la tabla de multiplicar que deseas"<<endl;
						  	 cin>> num;
						  	 for(i=1;i<=50;i++){
						  	multiplicacion= num*i;
						  	cout<<num<<"x"<<i<<"="<<multiplicacion<<endl;
							   }
							return 0;
							  }
							break;
						  }
						  case 12:{
						  	//si m es 12
						  	{
						  	 int pro;
						  	 cout<<"Digita el numero del 1 al 7";
						  	 cin>> pro;
						  	 switch(pro){
						  	  case 1:
		                     cout<<"Hoy es lunes -_-";break;
		                     case 2:
	                      	cout<<"Hoy es martes";break;
	                     	case 3:
		                     cout<<"Hoy es miercoles";break;
	                      	case 4:
	                     	cout<<"Hoy es jueves";break;
	                     	case 5:
	                     	cout<<"Hoy es viernes :)";break;
		                     case 6:
		                     cout<<"Hoy es sabado";break;
	                      	case 7:
		                     cout<<"Hoy es domingo";break;
		                     default: cout<<"NO ES UN DIA DE LA SEMANA TONTO";break;
							   }
							   return 0;
							  }
							break;
						  }
						  case 13:{
						  	

                        {
	                    int miarreglo[5];
	                    string nombres[3];
	
	                    miarreglo[0] = 10;
                        miarreglo[1] = 20;
	                    miarreglo[2] = 30;
                        miarreglo[3] = 40;
                     	miarreglo[4] = 50;
	
	                    nombres[0]="pollo";
                     	nombres[1]="brenda";
	                    nombres[2]="kalid";
	
	                    for(int j=0; j<=4; j++){
	                   	cout<<"arreglos:"<<j<<":"<<miarreglo[j]<<endl;
                    	}
                     	for(int k=0; k<=2; k++){
	                	cout<<"tan bien troncos:"<<nombres[k]<<endl;
                    	}
                        }
							break;
						  
						  case 14:{
						  	const int miarreglo = 5;
						  	int numeros[miarreglo];
						  	
						  	for(int e=0; e<miarreglo; e++){
						  		cout<<"ingresa el numero"<<e+1<<":";
						  		cin>>numeros[e];
						  		
							  }
							  cout<<"los numeros ingresados son :";
							  for(int a=0; a<miarreglo; a++){
							  	cout<<numeros[a]<<"";
							  	
							  }
							  cout<<endl;
							  return 0;
				
							break;
						  
						  	const int alumnos = 6;
	int asistencia[alumnos];
	
	for(int z=0; z<alumnos; z++){
	asistencia[z]=0;
	}
	cout<<"biebenido al sentro de asistencia:"<<endl;
	cout<<"registra la asistencia de los alumnos:"<<endl;
	cout<<"registra el nombre de los alumnos e indica si asistio"<<endl;
	for(int z=0; z<alumnos; z++){
		string nombres;
		char asistio;
		cout<<"alumno:"<<z+1<<"  :  ";
		cin>>nombres;
		cout<<"¿si asistio? (s/n)";
		cin>>asistio;
		
		if(asistio == 's' || asistio == 's'){
			asistencia[z] = 1;
		}
		
	}
	int faltas = 0;
	for(int z=0; z<alumnos; z++){
		if(asistencia[z] == 0){
			faltas++;
		}
	}
	
	int asistio = 0;
	for(int z=0; z<alumnos; z++){
		if(asistencia[z] == 0){
			asistio++;
		}
	}
cout<<"numero de faltas"<<faltas<<endl;
cout<<"numero de asistio"<<asistio<<endl;
return 0;	
        
		}
		
	}
	

 	  
        

        else{
        cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
    }
    return 0;

}
