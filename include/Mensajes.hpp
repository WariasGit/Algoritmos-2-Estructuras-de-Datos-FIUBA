
#include "Herramientas.hpp"
#include <iostream>


class MensajeKuru {
private:
    const std::string ClaveKuru = "kuru";
    const std::string ClaveKururin = "kururin";
    const std::string RespuestaKuru1 = "KURU";
    const std::string RespuestaKuru2 = "KURU KURU";
    const std::string RespuestaKuru3 = "KURURIN";
public:
    MensajeKuru();
    /*
     * Precondiciones: Se espera que el parametro 'mensaje' este definido y que no sea vacio.
     * Postcondiciones: Devuelve un valor booleano que indica si la clave esta presente en el mensaje o no.
     *                  Este metodo no modifica el estado de ningun objeto.
     */
    bool contiene_clave_kuru(std::string mensaje);

    /*
     * Precondiciones:
     * Postcondiciones: Obtiene un numero aleatorio mediante una funcion definida en 'Herramientas' y muestra por pantalla una de las tres posibles respuestas para estas claves.
     */
    void responder_kuru();
};


class MensajeHola {
private:
    const std::string ClaveHola = "hola";
    const std::string RespuestaHola = "Hola.";
public:
    MensajeHola();
    /*
     * Precondiciones: Se espera que el parametro 'mensaje' este definido y que no sea vacio.
     * Postcondiciones: Devuelve un valor booleano que indica si la clave esta presente en el mensaje o no.
     *                  Este metodo no modifica el estado de ningun objeto.
     */
    bool contiene_clave_hola(std::string mensaje);

    /*
     * Precondiciones:
     * Postcondiciones: Muestra por pantalla la respuesta a esta clave.
     */
    void responder_hola();
};


class MensajeProblema {
private:
    const std::string ClaveProblema = "problema";
    const std::string RespuestaProblema = "No te preocupes. Ya esta solucionado.";
public:
    MensajeProblema();
    /*
     * Precondiciones: Se espera que el parametro 'mensaje' este definido y que no sea vacio.
     * Postcondiciones: Devuelve un valor booleano que indica si la clave esta presente en el mensaje o no.
     *                  Este metodo no modifica el estado de ningun objeto.
     */
    bool contiene_clave_problema(std::string mensaje);

    /*
     * Precondiciones:
     * Postcondiciones: Muestra por pantalla la respuesta a esta clave.
     */
    void responder_problema();
};


class MensajePreocupado {
private:
    const std::string ClavePreocupado = "preocupado";
    const std::string ClavePreocupada = "preocupada";
    const std::string RespuestaPreocupado = "De que te preocupas si yo estoy aqui?";
public:
    MensajePreocupado();
    /*
     * Precondiciones: Se espera que el parametro 'mensaje' este definido y que no sea vacio.
     * Postcondiciones: Devuelve un valor booleano que indica si la clave esta presente en el mensaje o no.
     *                  Este metodo no modifica el estado de ningun objeto.
     */
    bool contiene_clave_preocupado(std::string mensaje);

    /*
     * Precondiciones:
     * Postcondiciones: Muestra por pantalla la respuesta a esta clave.
     */
    void responder_preocupado();
};


class MensajeSimulado {
private:
    const std::string ClaveSimulado = "simulado";
    const std::string RespuestaSimulado = "La actualizacion del Universo Simulado ya esta lista, ven a probarla.";
public:
    MensajeSimulado();
    /*
     * Precondiciones: Se espera que el parametro 'mensaje' este definido y que no sea vacio.
     * Postcondiciones: Devuelve un valor booleano que indica si la clave esta presente en el mensaje o no.
     *                  Este metodo no modifica el estado de ningun objeto.
     */
    bool contiene_clave_simulado(std::string mensaje);

    /*
     * Precondiciones:
     * Postcondiciones: Muestra por pantalla la respuesta a esta clave.
     */
    void responder_simulado();
};


class MensajeQuienEres {
private:
    const std::string ClaveQuienSoy = "Eres herta?";
    const std::string RespuestaQuienSoy = "Quieres una selfie para demostrartelo o que?";
public:
    MensajeQuienEres();
    /*
     * Precondiciones: Se espera que el parametro 'mensaje' este definido y que no sea vacio.
     * Postcondiciones: Devuelve un valor booleano que indica si la clave esta presente en el mensaje o no.
     *                  Este metodo no modifica el estado de ningun objeto.
     */
    bool contiene_clave_quien_eres(std::string mensaje);

    /*
     * Precondiciones:
     * Postcondiciones: Muestra por pantalla la respuesta a esta clave.
     */
    void responder_quien_eres();
};


class MensajeMarioneta {
private:
    const std::string ClaveMarioneta = "y tu marioneta?";
    const std::string RespuestaMarioneta = "Vaya, parece que la perdi. No me extrania que no la encuentre.";
public:
    MensajeMarioneta();
    /*
     * Precondiciones: Se espera que el parametro 'mensaje' este definido y que no sea vacio.
     * Postcondiciones: Devuelve un valor booleano que indica si la clave esta presente en el mensaje o no.
     *                  Este metodo no modifica el estado de ningun objeto.
     */
    bool contiene_clave_marioneta(std::string mensaje);

    /*
     * Precondiciones:
     * Postcondiciones: Muestra por pantalla la respuesta a esta clave.
     */
    void responder_marioneta();
};


class MensajeEquivocado {
private:
    const std::string RespuestaDesentendida1 = "Oh";
    const std::string RespuestaDesentendida2 = "...";
public:
    MensajeEquivocado();
    /*
     * Precondiciones:
     * Postcondiciones: Obtiene un numero aleatorio mediante una funcion definida en 'Herramientas' y muestra por pantalla una de las dos posibles respuestas para el caso en el que el mensaje ingressado no se comprenda.
     */
    void respuesta_desentendida();
};
