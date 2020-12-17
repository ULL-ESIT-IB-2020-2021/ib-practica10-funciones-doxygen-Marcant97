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
#include <string>
int cont(std::string linea);
char cesar(std::string cadena , int x);
char cesar1(std::string cadena , int x);
char xor1(std::string clave, std::string linea);