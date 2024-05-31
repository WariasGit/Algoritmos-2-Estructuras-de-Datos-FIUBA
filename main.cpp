#include <iostream>
#include <string>
#include "Herta.hpp"

const int CONSULTAR = 1;
const int SALIR = 2;

void mostrar_menu(){
    std::cout << "1. Hacer una consulta" << std::endl;
    std::cout << "2. Salir" << std::endl;
}
bool es_opcion_valida(int opcion){
    return opcion == CONSULTAR || opcion == SALIR;
}

int main() {
    int opcion;
    Herta Chat;
    do{
        std::cout << "Que desea hacer?" << std::endl;
        mostrar_menu();
        std::cin >> opcion;
        while(!es_opcion_valida(opcion)){
            std::cout << "Esa opcion no es valida, intende de nuevo:"<<std::endl;
            mostrar_menu();
            std::cin >> opcion;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if(opcion == CONSULTAR) {
            std::string consulta;
            std::cout << "Ingrese su consulta:  ";
            std::getline(std::cin, consulta);
            Chat.responder(consulta);
        }
    }while(opcion != SALIR);
    std::cout << "Adiós!" << std::endl;
    return 0;
}