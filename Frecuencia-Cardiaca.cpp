#include <iostream>

using namespace std;

void clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        cout << "Tiene bradicardia. Mucho ojo." << endl;
    }
    else if (lpm >= 60 && lpm <= 100) {
        cout << "Su estado es normal." << endl;
    }
    else {
        cout << "Tiene taquicardia. Consulte a un profesional de la salud." << endl;
    }
}

int main() {

    int lpm;

    cout << "Programa de frecuencia cardiaca - Biomedical-Engineering-Fabian" << endl;
    cout << "Ingrese sus pulsaciones por minuto: ";
    cin >> lpm;

    clasificarFrecuencia(lpm);

    return 0;
}