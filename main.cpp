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

void pedir_consulta(std::string& consulta){
    std::cout << "Ingrese su consulta: ";
    std::getline(std::cin, consulta);
}

void procesar_opcion(int opcion){
    switch (opcion) {
    case CONSULTAR:{
        std::string consulta;
        pedir_consulta(consulta);
        Herta.responder(consulta);
        break;}
    case SALIR:
        std::cout << "Adios";
        break;
    default:
        std::cout << "Error: opcion invalida";
    }
}

int main() {
    int opcion;
    Herta Herta;
    do{
        std::cout << "Bienvenido! ¿que desea hacer?" << std::endl;
        mostrar_menu();
        std::cin >> opcion;
        while(!es_opcion_valida(opcion)){
            std::cout << "Esa opcion no es valida, intende de nuevo:";
            mostrar_menu();
            std::cin >> opcion;
        }
        procesar_opcion(opcion);
    }while(opcion != SALIR);
    return 0;
}