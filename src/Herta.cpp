#include "Herta.hpp"
#include <iostream>

Herta::Herta() : contador_respuestas(0) {}

int Herta::generar_numero_aleatorio(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}


std::string Herta::convertir_a_minuscula(const std::string& mensaje) {
    std::string mensaje_minuscula = mensaje;
    std::transform(mensaje_minuscula.begin(), mensaje_minuscula.end(), mensaje_minuscula.begin(), ::tolower);
    return mensaje_minuscula;
}


bool Herta::contiene_clave_kuru(std::string mensaje) {
    return mensaje.find(KURU) != std::string::npos || mensaje.find(KURURIN) != std::string::npos;
}

void Herta::responder_kuru(int numero_aleatorio) {
    if(numero_aleatorio==1){
        std::cout << RespuestaKuru1 << std::endl;
    }
    else if(numero_aleatorio==2){
        std::cout << RespuestaKuru2 << std::endl;
    }
    else{
        std::cout << RespuestaKuru3 << std::endl;
    }
}

bool Herta::contiene_clave_hola(std::string mensaje) {
    return mensaje.find(HOLA) != std::string::npos;
}

void Herta::responder_hola() {
    std::cout << RespuestaHola << std::endl;
}

bool Herta::contiene_clave_problema(std::string mensaje) {
    return mensaje.find(PROBLEMA) != std::string::npos;
}

void Herta::responder_problema() {
    std::cout << RespuestaProblema << std::endl;
}

bool Herta::contiene_clave_preocupado(std::string mensaje) {
    return mensaje.find(PREOCUPADO) != std::string::npos || mensaje.find(PREOCUPADA) != std::string::npos;
}

void Herta::responder_preocupado() {
    std::cout << RespuestaPreocupado << std::endl;
}

bool Herta::contiene_clave_simulado(std::string mensaje) {
    return mensaje.find(SIMULADO) != std::string::npos;
}

void Herta::responder_simulado() {
    std::cout << RespuestaSimulado << std::endl;
}

bool Herta::contiene_clave_quien_eres(std::string mensaje) {
    return mensaje.find(QuienSoy) != std::string::npos;
}

void Herta::responder_quien_eres() {
    std::cout << RespuestaQuienSoy << std::endl;
}

bool Herta::contiene_clave_marioneta(std::string mensaje) {
    return mensaje.find(LaMarioneta) != std::string::npos;
}

void Herta::responder_marioneta() {
    std::cout << RespuestaMarioneta << std::endl;
}

void Herta::respuesta_desentendida(int numero_aleatorio){
    if(numero_aleatorio==1){
        std::cout << RespuestaDesentendida1 << std::endl;
    }
    else if(numero_aleatorio==2){
        std::cout << RespuestaDesentendida2 << std::endl;
    }
}




/*
 * Precondiciones: Recibe una cadena de caracteres ingresada por el usuario, convertida a minuscula.
 * Postcondiciones: Evalua el mensaje y responde segun corresponda.
 */
void Herta::responder(std::string mensaje) {
    if (contador_respuestas == 0){
        std::cout<<RespuestaAutomatica<<std::endl;
    }
    else{
        std::string mensaje_minuscula = convertir_a_minuscula(mensaje);
        if(contiene_clave_kuru(mensaje_minuscula)){
            int numero_aleatorio = generar_numero_aleatorio(1,3);
            responder_kuru(numero_aleatorio);
        }
        else if(contiene_clave_hola(mensaje_minuscula)){
            responder_hola();
        }
        else if(contiene_clave_problema(mensaje_minuscula)){
            responder_problema();
        }
        else if(contiene_clave_preocupado(mensaje_minuscula)){
            responder_preocupado();
        }
        else if(contiene_clave_simulado(mensaje_minuscula)){
            responder_simulado();
        }
        else if(contiene_clave_quien_eres(mensaje_minuscula)){
            responder_quien_eres();
        }
        else if(contiene_clave_marioneta(mensaje_minuscula)){
            responder_marioneta();
        }
        else {
            int numero_aleatorio = generar_numero_aleatorio(1,2);
            respuesta_desentendida(numero_aleatorio);
        }

    }
    ++contador_respuestas;

    if (contador_respuestas > max_respuestas) {
        contador_respuestas = 0;
    }
}





