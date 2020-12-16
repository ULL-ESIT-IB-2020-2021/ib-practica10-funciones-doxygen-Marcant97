#include <iostream>
#include <fstream>

int k;
std::string cadena1{};

//Función encriptado de César
char cesar(std::string cadena , int x){
  for (unsigned int i=0; i<cadena.length(); i++){
    cadena[i]+=x;
    std::cout<<cadena[i];
    }
}

std::vector<string> cesar1()


int main(){
    std::cout<<"Introduce k"<<std::endl;
    std::cin>>k;
    std::cout<<"Introduce cadena"<<std::endl;
    std::cin>>cadena1;

/*std::ofstream myfile;
    myfile.open ("example.txt");
    myfile << cadena1;
    myfile.close();
*/

//Encriptado César
  std::cout<<cesar(cadena1, k)<<std::endl;
  return 0;
//Encriptado César prueba  
  std::cout<<cesar1(cadena1, k)<<std::endl;
  return 0;


}