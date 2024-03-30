#include "Mensajes.hpp"
#include "Herramientas.hpp"

#include <iostream>

//Metodos para el primer mensaje.
MensajeKuru::MensajeKuru() {}

bool MensajeKuru::contiene_clave_kuru(std::string mensaje) {
    return mensaje.find(ClaveKuru) != std::string::npos || mensaje.find(ClaveKururin) != std::string::npos;
}

void MensajeKuru::responder_kuru() {
    int numero_aleatorio = herramientas::generar_numero_aleatorio(1,3);
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

//Metodos para el segundo mensaje.
MensajeHola::MensajeHola() {}


bool MensajeHola::contiene_clave_hola(std::string mensaje) {
    return mensaje.find(ClaveHola) != std::string::npos;
}

void MensajeHola::responder_hola() {
    std::cout << RespuestaHola << std::endl;
}

//Metodos para el tercer mensaje
MensajeProblema::MensajeProblema() {}


bool MensajeProblema::contiene_clave_problema(std::string mensaje) {
    return mensaje.find(ClaveProblema) != std::string::npos;
}

void MensajeProblema::responder_problema() {
    std::cout << RespuestaProblema << std::endl;
}

//Metodos para el cuarto mensaje
MensajePreocupado::MensajePreocupado() {}


bool MensajePreocupado::contiene_clave_preocupado(std::string mensaje) {
    return mensaje.find(ClavePreocupado) != std::string::npos || mensaje.find(ClavePreocupada) != std::string::npos;
}

void MensajePreocupado::responder_preocupado() {
    std::cout << RespuestaPreocupado << std::endl;
}

//Metodos para el quinto mensaje
MensajeSimulado::MensajeSimulado() {}


bool MensajeSimulado::contiene_clave_simulado(std::string mensaje) {
    return mensaje.find(ClaveSimulado) != std::string::npos;
}

void MensajeSimulado::responder_simulado() {
    std::cout << RespuestaSimulado << std::endl;
}

//Metodos para el sexto mensaje
MensajeQuienEres::MensajeQuienEres() {}


bool MensajeQuienEres::contiene_clave_quien_eres(std::string mensaje) {
    return mensaje.find(ClaveQuienSoy) != std::string::npos;
}

void MensajeQuienEres::responder_quien_eres() {
    std::cout << RespuestaQuienSoy << std::endl;
}

//Metodos para el septimo mensaje
MensajeMarioneta::MensajeMarioneta() {}


bool MensajeMarioneta::contiene_clave_marioneta(std::string mensaje) {
    return mensaje.find(ClaveMarioneta) != std::string::npos;
}

void MensajeMarioneta::responder_marioneta() {
    std::cout << RespuestaMarioneta << std::endl;
}

//Metodos para el ultimo mensaje
MensajeEquivocado::MensajeEquivocado() {}


void MensajeEquivocado::respuesta_desentendida() {
    int numero_aleatorio = herramientas::generar_numero_aleatorio(1,2);
    if(numero_aleatorio==1){
        std::cout << RespuestaDesentendida1 << std::endl;
    }
    else if(numero_aleatorio==2){
        std::cout << RespuestaDesentendida2 << std::endl;
    }
}