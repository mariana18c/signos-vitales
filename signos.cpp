
#include <iostream>
// Función de la Persona A: convierte Fahrenheit a Celsius
double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    std::cout << "--- Modulo de Signos Vitales ---" << std::endl;
    
    // Prueba de la función de temperatura
    double tempF = 98.6;
    std::cout << tempF << " F equivale a " << fahrenheitACelsius(tempF) << " C" << std::endl;

    return 0;
}