#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;


struct Equipo {
    string deporte;
    string nombre;
    int partidosJugados;
    int juegosGanados;
    float porcentajeEfectividad;

    void calcularEfectividad() {
        if (partidosJugados > 0) {
            porcentajeEfectividad = (static_cast<float>(juegosGanados) / partidosJugados) * 100;
        } else {
            porcentajeEfectividad = 0;
        }
    }
};

vector<Equipo> equipos;

void mostrarMenu() {
    cout << "Menu:\n";
    cout << "1. Altas\n";
    cout << "2. Bajas\n";
    cout << "3. Cambios\n";
    cout << "4. Reportes\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opcion: ";
}















int main() {
    int opcion;


    do {
        mostrarMenu();
        cin >> opcion;


        switch (opcion) {
            case 1: altaEquipo(); break;
            case 2: bajaEquipo(); break;
            case 3: modificarEquipo(); break;
            case 4: mostrarReportes(); break;
            case 5: cout << "Saliendo...\n"; break;
            default: cout << "Opcion no valida.\n";
        } 
        if (cin.fail()) {
        cin.clear(); // Limpia el estado de error
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descarta la entrada inválida
        cout << "Entrada inválida. Por favor, ingrese un número entre 1 y 5.\n";
        continue; // Vuelve a solicitar la opción
    }
    } while (opcion != 5);


    return 0;
}