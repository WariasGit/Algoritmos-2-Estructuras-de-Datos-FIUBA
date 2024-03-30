#ifndef TP1_1C2024_HERTA_HPP
#define TP1_1C2024_HERTA_HPP
#include "Mensajes.hpp"
#include <string>


class MensajeProblema;

class MensajeProblema;

class Herta {
private:
    MensajeKuru Mensaje_kuru;
    MensajeHola Mensaje_hola;
    MensajeProblema mensaje_problema;
    MensajePreocupado mensaje_preocupado;
    MensajeSimulado mensaje_simulado;
    MensajeQuienEres mensaje_quien_eres;
    MensajeMarioneta mensaje_marioneta;
    MensajeEquivocado mensaje_equivocado;
    int contador_respuestas = 0;
    const int max_respuestas = 5;
    const std::string respuesta_automatica = "Hola. En este momento no estoy disponible y no me pondré en contacto contigo más tarde.";
public:
    Herta();
    /*
     * Precondiciones: Se espera que el parametro mensaje este declarado y no este vacio.
     * Postcondiciones: Evalua el mensaje y responde segun corresponda.
     */
    void responder(std::string mensaje);
};

#endif