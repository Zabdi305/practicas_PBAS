#include<iostream>
#include <regex>
int main(){
    std::cout <<"ingresa tu correo electronico";
    std::string correo;
    std::cin>>correo;
    
    std::regex patroncorreo("\\b[a-za-z0-9._%+-]+@[a-za-z0-9.-]+\\.[a-z|a-z]}\\b");
    
    if (std::regex_match(correo,patroncorreo)){
        std::cout<<"el correo electronico esvalido."<<std::endl;
        
    }
    else{
        std::cout<<"el correo no es valido."<<std::endl;
    }
    return 0;
}
