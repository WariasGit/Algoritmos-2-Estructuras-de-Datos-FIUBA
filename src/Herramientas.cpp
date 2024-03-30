#include<iostream>
#include "Herramientas.hpp"
#include <random>
#include <algorithm>

int generar_numero_aleatorio(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}



std::string convertir_a_minuscula(const std::string& mensaje) {
    std::string mensaje_minuscula = mensaje;
    std::transform(mensaje_minuscula.begin(), mensaje_minuscula.end(), mensaje_minuscula.begin(), ::tolower);
    return mensaje_minuscula;
}