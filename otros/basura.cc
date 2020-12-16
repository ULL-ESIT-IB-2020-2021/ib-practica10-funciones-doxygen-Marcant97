#include <iostream>
#include <string>

int main(){
  int a,b,c;
  int j;
  std::string frase;
  std::string clave;
  std::string res;//Entrada de Datos
  std::cout << "Este programa encripta una frase usando el operador XOR"<<std::endl;
  std::cout << "Introduce la frase para encriptar: ";
  getline(std::cin,frase);
  std::cout << "clave:";
  std::cin >> clave;

  res = frase;//Se aplica el operador XOR

  for(unsigned int i = 0; i < frase.length() ; i++){
    a = int (frase[i]);
    j = i % clave.length();
    b = int (clave[j]);
    c = a ^ b;
    res[i] = char( c );

  //Resultados en pantalla
    std::cout << frase[i]<<" XOR "<<clave[j]<<std::endl;
    std::cout << " = " << res[i]<<std::endl; 
    std::cout << "n"<<std::endl;
  }
  std::cout << "La frase encriptada es:"<<std::endl;
  std::cout << res<<std::endl;
  std::cout << "hasta aqui"<<std::endl;
  return 0;
}