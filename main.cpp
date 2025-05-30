#include <iostream>
#include <string>
#include <vector>
#include "platillos.h"
#include "bebidas.h"

using namespace std;

int main() {
    int opcion, cantidad;
    float costo;
    string nombre, descripcion;

    vector<Alimentos*> ticket; // Punteros a clase base para polimorfismo

    cout << "Bienvenidos al sistema de mesa de McRonald Irish Pub" << endl;
    cout << "¿Desea agregar 1. Platillo  2. Bebida?" << endl;
    cin >> opcion;

    cout << "¿Cuántos desea ingresar?: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        cin.ignore(); // Limpia el buffer

        cout << "\nElemento #" << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, nombre);

        cout << "Costo: ";
        cin >> costo;
        cin.ignore();

        cout << "Descripción: ";
        getline(cin, descripcion);

        if (opcion == 1) {
            ticket.push_back(new Platillos(nombre, costo, descripcion));
        } else if (opcion == 2) {
            ticket.push_back(new Bebidas(nombre, costo, descripcion));
        }
    }

    cout << "\n==== TICKET DEL CLIENTE ====\n";
    float total = 0;
    for (auto alimento : ticket) {
        alimento->mostrar_info();  // Polimorfismo: ejecuta el método adecuado
        total += alimento->get_costo();
        cout << "-----------------------------\n";
    }

    cout << "Total a pagar: $" << total << endl;

    // Liberar memoria (por el Heap)
    for (auto alimento : ticket) {
        delete alimento;
    }

    return 0;
}
