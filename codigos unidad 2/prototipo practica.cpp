 #include<cstdlib>
#include<iostream>
#include<conio.h> // version de id conio conio2
#include<string.h>
#include<vector>
// definimos teclas
#define ENTER 13
#define BACKSPACE 8
using namespace std;
// declaramos las variables para las operaciones
int num1 , num2, num3 ,res;
// declaramos la funcion principal
int main(){
// declaramos las variables de las opciones a elegir
int opc;
int opc1;
// declaramos los vectores para usuarios y contraseñas
vector<string> usuarios;
vector<string> pass;
// se definen los usuarios de el vector
usuarios.push_back("luis");
usuarios.push_back("Diego");
usuarios.push_back("Emi");
usuarios.push_back("Ariane");
// se definen los password de el vector
pass.push_back("12345");
pass.push_back("54321");
pass.push_back("hola");
pass.push_back("usuario");
// se declarar las variables de login
string usuario, password;
// se declara la variable al contador
int contador = 0;
bool ingresa = false;
// declaramos el ciclo para verificar el password
do{
   system("cls");
   cout<<"\t\t\t login de usuario IscjlchavezG"<<endl;
   cout<<"\t\t\t-------------------------------"<<endl;
   cout<<"\n\t Usuario: ";
   getline(cin,usuario);
   char caracter;
   cout<<"\t Password: ";
   caracter = getch();
   password = "";
   while(caracter != ENTER){
    if(caracter != BACKSPACE){
        password.push_back(caracter);
        cout<<"*";
       }
       else{
        if(password.length()>0){
            cout<<"\b \b";
            password = password.substr(0, password.length()-1);
           }
       }
       caracter = getch();
   }
   for(int i = 0; i< usuarios.size(); i++){
    if(usuarios[i] == usuario && pass[i] == password){
        ingresa = true;
        break;
       }
   }
   if(!ingresa){
    cout<<"\n\n El usuario y/o contraseña no son correctos."<<endl;
    cout<<"\n Tienes 3 intentos para ingresar al sistema: Total de intentos: "<<contador+1<<endl;
    cin.get();
    contador++;
   }
} // termina do de login 
while(ingresa == false && contador < 3);
    if(ingresa == false){
        cout<<"\n Revaso el numero de intentos permitidos. Hasta luego"<<endl;
    }
else{
do{
    system("cls");
    cout<<"\n";
    cout<<"\t\t\t Bienvenido al Menu de Usuario: "<< usuario<<endl;
    cout<<"\t\t\t ------------------------------------------"<<endl;
    cout<<"\t\t\t 1.- Suma"<<endl;
    cout<<"\t\t\t 2.- Resta"<<endl;
    cout<<"\t\t\t 3.- Multiplicacion"<<endl;
    cout<<"\n";
    cout<<"\t\t\t Ingrese una opcion: ";
    cin>>opc;
    switch(opc){ // inicia el ciclo do while 
        case 1:
           system("cls");
           cout<<"\n\n";
           cout<<"\t\t\t Bievenido al apartado de suma"<<endl;
           cout<<"\t\t\t ------------------------------"<<endl;
           cout<<"\t\t\t Digita los numero enteros a sumar"<<endl;
           cout<<"\t\t\t Digita el primer numero: ";
           cin>>num1;
           cout<<"\t\t\t Digita el segundo numero: ";
           cin>>num2;
           cout<<"\t\t\t Digita el tercer numero: ";
           cin>>num3;
           res = num1+num2+num3;
           cout<<"\n";
           cout<<"\t\t\t El resultado de la suma de: "<<num1<<"+"<<num2<<"+"<<num3<<"= "<<res<<endl;
        break;
        case 2:
          system("cls");    
           cout<<"\t\t\t Bienvenido a la resta"<<endl;
           cout<<"\t\t\t ------------------------------"<<endl;
           cout<<"\t\t\t Digita los numero enteros a restar"<<endl;
           cout<<"\t\t\t Digita el primer numero";
           cin>>num1;
           cout<<"\t\t\t Digita el segundo numero :";
           cin>>num2;
           cout<<"\t\t\t Digita el tercer numero :";
           cin>>num3;
           res = num1-num2-num3;
           cout<<"\t\t\t El resultado de la resta es: "<<res;
        break;
        case 3:
           system("cls");   
           cout<<"bienvenido a la multiplicacion"<<endl;
           cout<<"Digita los numero enteros a multiplicacion"<<endl;
           cout<<"Digita el primer numero";
           cin>>num1;
           cout<<"Digita el segundo numero :";
           cin>>num2;
           cout<<"Digita el tercer numero :";
           cin>>num3;
           res = num1*num2*num3;
           cout<<"El resultado de la multiplicacion es: "<<res;
        break;
        default:
            system("cls");
            cout<<"\t\t\t Seleccionaste una opcion no valida"; 
        break;  
    } // termina el do
    cout<<"\t\t\t Deceas seguir con el programa?"<<endl;
    cout<<"\t\t\t 1.- Si"<<endl;
    cout<<"\t\t\t 2.- No"<<endl;
    cout<<"\t\t\t Selecciona una opcion: ";
    cin>>opc1;
} // termina do while
while(opc1 == 1);
} 
cin.get();
return 0;
}
