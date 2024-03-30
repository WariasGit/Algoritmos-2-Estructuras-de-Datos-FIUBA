#ifndef TP1_1C2024_HERTA_HPP
#define TP1_1C2024_HERTA_HPP
#include <iostream>
#include <string>
#include <random>

class Herta{
public:
    Herta();
    void responder(std::string mensaje);
private:
    int contador_respuestas;
    int max_respuestas =5;
    const std::string RespuestaAutomatica = "Hola. En este momento no estoy disponible y no me pondré en contacto contigo más tarde.";
    const std::string KURU = "kuru";
    const std::string KURURIN = "kururin";
    const std::string RespuestaKuru1 = "KURU";
    const std::string RespuestaKuru2 = "KURU KURU";
    const std::string RespuestaKuru3 = "KURURIN";
    const std::string HOLA = "hola";
    const std::string RespuestaHola = "Hola.";
    const std::string PROBLEMA = "problema";
    const std::string RespuestaProblema = "No te preocupes. Ya esta solucionado.";
    const std::string PREOCUPADO = "preocupado";
    const std::string PREOCUPADA = "preocupada";
    const std::string RespuestaPreocupado = "De que te preocupas si yo estoy aqui?";
    const std::string SIMULADO = "simulado";
    const std::string RespuestaSimulado = "La actualizacion del Universo Simulado ya esta lista, ven a probarla.";

    const std::string QuienSoy = "Eres herta?";
    const std::string RespuestaQuienSoy = "Quieres una selfie para demostrartelo o que?";
    const std::string LaMarioneta = "y tu marioneta?";
    const std::string RespuestaMarioneta = "Vaya, parece que la perdi. No me extrania que no la encuentre.";
    const std::string RespuestaDesentendida1 = "Oh";
    const std::string RespuestaDesentendida2 = "...";

    /*
     * Precondiciones: Recibe dos numeros enteros.
     * Postcondiciones: Genera numeros aleatorios distribuidos uniformemente dentro del rango dado por los dos numeros ingresados.
     */
    int generar_numero_aleatorio(int min, int max);

    /*
     * Precondiciones: Recibe una cadena de caracteres ingresada por el usuario.
     * Postcondiciones: Devuelve una cadena de caracteres convertidos a minuscula.
     */
    std::string convertir_a_minuscula(const std::string& mensaje);

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
    void responder_kuru(int numero_aleatorio);

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

    /*
     * Precondiciones:
     * Postcondiciones: Obtiene un numero aleatorio mediante una funcion definida en 'Herramientas' y muestra por pantalla una de las dos posibles respuestas para el caso en el que el mensaje ingressado no se comprenda.
     */
    void respuesta_desentendida(int numero_aleatorio);
};
#endif