#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

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
  std::cout<<"Elige entre cifrar(1) o descifrar(2)"<<std::endl;
  std::cin>>opcion;
  std::cout<<"Dime el numero clave"<<std::endl;
  std::cin>> numero;

  if (opcion==1){
    while (! fichero.eof()){
      getline(fichero,linea);
      //std::cout << linea << std::endl;
      std::cout <<cesar(linea, numero) <<std::endl;
    }
  }
  if (opcion==2){
    while (! fichero.eof()){
    getline(fichero,linea);
    //std::cout << linea << std::endl;
    std::cout <<cesar1(linea, numero) <<std::endl;
  }
  }
  fichero.close();
  return 0;
}