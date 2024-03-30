#include "Herta.hpp"
#include <iostream>

Herta::Herta(): MensajeKuru(),
                MensajeHola(),
                MensajeProblema(),
                MensajePreocupado(),
                MensajeSimulado(),
                MensajeQuienEres(),
                MensajeMarioneta(),
                MensajeEquivocado() {}


void Herta::responder(std::string mensaje) {
    if (contador_respuestas == 0 || contador_respuestas >= max_respuestas){
        std::cout<<respuesta_automatica<<std::endl;
    }
    else{
        if(mensaje_kuru.contiene_clave_kuru(mensaje)){
            mensaje_kuru.responder_kuru();
        }
        else if(mensaje_hola.contiene_clave_hola(mensaje)){
            mensaje_hola.responder_hola();
        }
        else if(mensaje_problema.contiene_clave_problema(mensaje)){
            mensaje_problema.responder_problema()
        }
        else if(mensaje_preocupado.contiene_clave_preocupado(mensaje)){
            mensaje_preocupado.responder_preocupado();
        }
        else if(mensaje_simulado.contiene_clave_simulado(mensaje)){
            mensaje_simulado.responder_simulado();
        }
        else if(mensaje_quien_eres.contiene_clave_quien_eres(mensaje)){
            mensaje_quien_eres.responder_quien_eres();
        }
        else if(mensaje_marioneta.contiene_clave_marioneta(mensaje)){
            mensaje_marioneta.responder_marioneta();
        }
        else{
            mensaje_equivocado.respuesta_desentendida();
        }
    }
}