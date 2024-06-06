#include "../include/Herta.hpp"
#include <iostream>



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
        std::cout << RESPUESTAS_KURU1 << std::endl;
    }
    else if(numero_aleatorio==2){
        std::cout << RESPUESTAS_KURU2 << std::endl;
    }
    else{
        std::cout << RESPUESTAS_KURU3 << std::endl;
    }
}

bool Herta::contiene_clave_hola(std::string mensaje) {
    return mensaje.find(HOLA) != std::string::npos;
}

void Herta::responder_hola() {
    std::cout << RESPUESTA_HOLA << std::endl;
}

bool Herta::contiene_clave_problema(std::string mensaje) {
    return mensaje.find(PROBLEMA) != std::string::npos;
}

void Herta::responder_problema() {
    std::cout << RESPUESTA_PROBLEMA << std::endl;
}

bool Herta::contiene_clave_preocupado(std::string mensaje) {
    return mensaje.find(PREOCUPADO) != std::string::npos || mensaje.find(PREOCUPADA) != std::string::npos;
}

void Herta::responder_preocupado() {
    std::cout << RESPUESTA_PREOCUPADO << std::endl;
}

bool Herta::contiene_clave_simulado(std::string mensaje) {
    return mensaje.find(SIMULADO) != std::string::npos;
}

void Herta::responder_simulado() {
    std::cout << RESPUESTA_SIMULADO << std::endl;
}

bool Herta::contiene_clave_quien_eres(std::string mensaje) {
    size_t pos = mensaje.find(ERES_HERTA);
    if (pos != std::string::npos) {
        size_t next_pos = pos + ERES_HERTA.length();
        if (next_pos == mensaje.length() || std::isspace(mensaje[next_pos]) || mensaje[next_pos] == '\n') {
            return true;
        }
    }
    return false;
}

void Herta::responder_quien_eres() {
    std::cout <<RESPUESTA_ERES_HERTA<< std::endl;
}

bool Herta::contiene_clave_marioneta(std::string mensaje) {
    size_t pos = mensaje.find(MARIONETA);
    if (pos != std::string::npos) {
        size_t next_pos = pos + MARIONETA.length();
        if (next_pos == mensaje.length() || std::isspace(mensaje[next_pos]) || mensaje[next_pos] == '\n') {
            return true;
        }
    }
    return false;
}

void Herta::responder_marioneta() {
    std::cout << RESPUESTA_MARIONETA << std::endl;
}

void Herta::respuesta_desentendida(int numero_aleatorio){
    if(numero_aleatorio==1){
        std::cout << RESPUESTAS_INDETERMINADO1 << std::endl;
    }
    else if(numero_aleatorio==2){
        std::cout << RESPUESTAS_INDETERMINADO2 << std::endl;
    }
}


Herta::Herta(){
    contador_respuestas = 0; 
    max_respuestas = 5; 
    RESPUESTA_AUTOMATICA = "[Respuesta automatica] Hola. En este momento no estoy disponible, y no me pondre en contacto contigo mas tarde.";
    KURU = "kuru";
    KURURIN = "kururin";
    RESPUESTAS_KURU1 = "KURU";
    RESPUESTAS_KURU2 = "KURU KURU";
    RESPUESTAS_KURU3 = "KURURIN";
    HOLA = "hola";
    RESPUESTA_HOLA = "Hola.";
    PROBLEMA = "problema";
    RESPUESTA_PROBLEMA = "No te preocupes. Ya esta solucionado.";
    PREOCUPADO = "preocupado";
    PREOCUPADA = "preocupada";
    RESPUESTA_PREOCUPADO = "De que te preocupas si yo estoy aqui?";
    SIMULADO = "simulado";
    RESPUESTA_SIMULADO = "La actualizacion del Universo Simulado ya esta lista, ven a probarla.";
    ERES_HERTA = "eres herta?";
    RESPUESTA_ERES_HERTA = "Quieres una selfie para demostrartelo o que?";
    MARIONETA = "y tu marioneta?";
    RESPUESTA_MARIONETA = "Vaya, parece que la perdi. No me extrania que no la encuentre.";
    RESPUESTAS_INDETERMINADO1 = "Oh.";
    RESPUESTAS_INDETERMINADO2 = "...";
}

/*
 * Precondiciones: Recibe una cadena de caracteres ingresada por el usuario.
 * Postcondiciones: Evalua el mensaje y responde segun corresponda.
 */
void Herta::responder(std::string mensaje) {
    if (contador_respuestas == 0){
        std::cout<<RESPUESTA_AUTOMATICA<<std::endl;
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





