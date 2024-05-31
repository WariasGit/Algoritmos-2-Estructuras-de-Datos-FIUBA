#ifndef TP1_1C2024_HERTA_HPP
#define TP1_1C2024_HERTA_HPP

#include <string>
#include <random>

class Herta{
public:
    void responder(std::string mensaje);
    Herta();

private:
    int contador_respuestas;
    int max_respuestas;
    std::string RESPUESTA_AUTOMATICA;
    std::string KURU;
    std::string KURURIN;
    std::string RESPUESTAS_KURU1;
    std::string RESPUESTAS_KURU2;
    std::string RESPUESTAS_KURU3;
    std::string HOLA;
    std::string RESPUESTA_HOLA;
    std::string PROBLEMA;
    std::string RESPUESTA_PROBLEMA;
    std::string PREOCUPADO;
    std::string PREOCUPADA;
    std::string RESPUESTA_PREOCUPADO;
    std::string SIMULADO;
    std::string RESPUESTA_SIMULADO;
    std::string ERES_HERTA;
    std::string RESPUESTA_ERES_HERTA;
    std::string MARIONETA;
    std::string RESPUESTA_MARIONETA;
    std::string RESPUESTAS_INDETERMINADO1;
    std::string RESPUESTAS_INDETERMINADO2;

    /*
     * Precondiciones: Recibe dos numeros enteros.
     * Postcondiciones: Genera numeros aleatorios distribuidos uniformemente dentro del rango dado por los dos numeros ingresados.
     */
    int generar_numero_aleatorio(int min, int max);

    /*
     * Precondiciones: Recibe una cadena de caracteres.
     * Postcondiciones: Devuelve una cadena de caracteres convertidos a minuscula.
     */
    std::string convertir_a_minuscula(const std::string& mensaje);

    /*
     * Precondiciones: Se espera que el parametro 'mensaje' este definido y que no sea vacio.
     * Postcondiciones: Devuelve un valor booleano que indica si la clave esta presente en el mensaje o no.
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