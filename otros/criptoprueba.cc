/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @file cripto.cc
  * @author Marco Barroso alu0101386560@ull.edu.es
  * @date 16 Dec 2020
  * @brief El programa encripta y desencripta mediante el metodo cesar y xor.
  * @bug No hay bugs conocidos
  * @see https://www.cs.cmu.edu/~410/doc/doxygen.html
  */


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

//Cifrado de César
char cesar(std::string cadena , int x){
  for (unsigned int i=0; i<cadena.length(); i++){
    cadena[i]+=x;
    std::cout<<cadena[i];
    }
}
//Descifrado de César
char cesar1(std::string cadena , int x){
  for (unsigned int i=0; i<cadena.length(); i++){
    cadena[i]-=x;
    std::cout<<cadena[i];
    }
}

//Cifrado Xor función

char xor1(std::string clave, std::string linea){
  std::vector<std::string> clavexor{};
  std::vector<std::string> resultxor{};
  int var{};
  int var1{};
  int var2{};
  int resultado{};
  for (unsigned int i=0;i<clave.length();i++){
    var=((clave[i])^128);
    clavexor.emplace_back(var);
  }

  for (unsigned int i=0; i<=linea.length(); i++){
    var1=(linea[i]);
    for (unsigned int j=0; i<clavexor.size(); i++){
      if(j==(clavexor.size())){
        j=0;
      }
      var2=(clavexor[j]); 
      resultado=char((var1)^(var2));
      resultxor.emplace_back(resultado);  
    }
  }
//Mostar elemntos del vector final, es decir mensaje cifrado.
  for (unsigned int i=0; i<resultxor.size();i++){
    std::cout<<resultxor[i]<<std::endl;
  }
 

}
void Foreword(){
    std::cout<<"Este programa cifra y descifra"<<std::endl;
    
}
int main() {
  Foreword();  
  std::string nombre;
  std::string linea;
  int opcion{};
  int numero{0};
   
  std::cout << "Dime el nombre del fichero: ";    
  getline(std::cin, nombre);
  std::ifstream fichero(nombre.c_str());

  if( fichero.fail() ){
    std::cout << "No existe el fichero!" << std::endl;
    exit(1);
  }
  std::cout<<"Elige entre cifrar(1) o descifrar(2) por Cesar o encriptar/desencriptar por xor(3)"<<std::endl;
  std::cin>>opcion;
  

  if (opcion==1){
    std::cout<<"Dime el numero clave"<<std::endl;
    std::cin>> numero;
    while (! fichero.eof()){
      getline(fichero,linea);
      //std::cout << linea << std::endl;
      std::cout <<cesar(linea, numero) <<std::endl;
    }
  }
  if (opcion==2){
    std::cout<<"Dime el numero clave"<<std::endl;
    std::cin>> numero;
    while (! fichero.eof()){
      getline(fichero,linea);
      //std::cout << linea << std::endl;
      std::cout <<cesar1(linea, numero) <<std::endl;
    }
  }
  if (opcion==3){
    std::string clave1{};
    std::cout<<"Dime la clave"<<std::endl;
    std::cin>>clave1;  
    while (! fichero.eof()){
      getline(fichero,linea);
      std::cout<<xor1(linea, clave1)<<std::endl;  
    }
  }
  
  fichero.close();
  return 0;
  }