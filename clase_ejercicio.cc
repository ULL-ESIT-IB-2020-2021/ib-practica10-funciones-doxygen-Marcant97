#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include "cripto.h"

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
  std::cout << "Selecciona opción (4) para contar cuantas veces aparece la vocal a en tu archivo." << std::endl;
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
  //Modificación ejercicio de clase, cuantás veces esta la vocal a en el archivo *.txt.
  if (opcion==4){
    int resultado{0};
    int var5{};
    while (! fichero.eof()){
      getline(fichero,linea);
      var5=cont (linea);
      resultado+=var5;
    }
    std::cout<<"El número de veces que aparece la vocal a es = "<<resultado<<std::endl;
    
  }

  fichero.close();
  return 0;
  }