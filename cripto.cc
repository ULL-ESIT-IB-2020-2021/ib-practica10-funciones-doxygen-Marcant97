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
#include "cripto.h"
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
  std::vector<char> clavexor{};
  std::vector<char> resultxor{};
  char var{};
  int var1{};
  int var2{};
  int resultado{};
  for (unsigned int i=0;i<clave.length();i++){
    var=((clave[i])^128);
    clavexor.emplace_back(var);
  }
  for (unsigned int i=0; i<=linea.length(); i++){
    var1=(linea[i]);
    for (unsigned int j=0; j<clavexor.size(); j++){
      if(j==(clavexor.size())){
        j=0;
      }
      var2=(clavexor[j]); 
      resultado=((var1)^(var2));
      resultxor.emplace_back(resultado);  
    }
  }
//Mostar elemntos del vector final, es decir mensaje cifrado.
  for (unsigned int i=0; i<resultxor.size();i++){
    std::cout<<resultxor[i]<<std::endl;
  }
 

}