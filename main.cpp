#include <Foco.hpp>
#include <iostream>

int main(int argc, char const *argv[])
{
   Foco foco1;
   Foco foco2;

    std::cout<<"Encendiendo foco"<<std::endl;
   
   foco1.Encender();
   foco2.Apagar();
    std::cout<<"Apagando foco"<<std::endl;
    return 0;
} 
