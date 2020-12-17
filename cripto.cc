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

char xor1(std::string linea, std::string clave){
  std::cout << "- - - -XOR- - - -" << std::endl;
  std::vector<char> clavexor;
  std::vector<char> resultxor;
  int counter{0};

  for (auto &character: clave){
    clavexor.emplace_back(character ^ 128);
  }

  for (auto character: linea){
    if(counter == clavexor.size()) counter = 0;
    char final_xor = character ^ clavexor[counter];
    resultxor.emplace_back(final_xor);
    counter++;
  }

  //Mostar elemntos del vector final, es decir mensaje cifrado.

  for (auto &element: resultxor){
    std::cout << element;
  }
}
