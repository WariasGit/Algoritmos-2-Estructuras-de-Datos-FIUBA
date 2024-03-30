

#include <string>

namespace herramientas{
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
}
