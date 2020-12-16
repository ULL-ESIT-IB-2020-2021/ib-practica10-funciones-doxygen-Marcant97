 
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

//Este programa es la base para extraer texto de *.txt
int main()
{
    std::string nombre;
    std::string linea;
 
    std::cout << "Dime el nombre del fichero: ";    
    getline(std::cin, nombre);
 
    std::ifstream fichero(nombre.c_str());
    if( fichero.fail() ){
      std::cout << "No existe el fichero!" << std::endl;
      exit(1);
    }
 
    while (! fichero.eof()){
      getline(fichero,linea);
      std::cout << linea << std::endl;
    }
    fichero.close();
 
    return 0;
}
/*int main(){
std::cout << "Dime el nombre del fichero: ";
    std::string nombre;
    getline(std::cin, nombre);
 
    std::ifstream fichero(nombre.c_str());
    std::string linea;
 
    getline(fichero,linea);
    std::cout << "Se ha leido: " <<std::endl;
    std::cout << linea <<std::endl;
 
    fichero.close();
 
    return 0;
  
}*/