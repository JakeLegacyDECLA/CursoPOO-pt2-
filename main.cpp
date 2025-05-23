/*
    Proyecto: Restaurante tipo Irish Pub
    Cesar Daniel Aguilar Kuri
    A01712823
    18/05/25
*/

// LIBRERIAS
#include <iostream>
#include <string>
#include <vector>
#include "platillos.h"

using namespace std;

int main() {
    int opcion, cantidadPlatillos;
    float costoP;
    string nombreP, descripcionP;

    vector<Platillos> ticket; // Vector para guardar los platillos

    cout << "Bienvenidos al sistema de mesa de McRonald Irish Pub" << endl;
    cout << "¿Desea agregar 1. Platillo  2. Bebida?" << endl;
    cin >> opcion;

    if (opcion == 1) {
        cout << "¿Cuántos platillos ingresará?: ";
        cin >> cantidadPlatillos;

        for (int i = 0; i < cantidadPlatillos; i++) {
            cin.ignore(); // Limpia el buffer

            cout << "\nPlatillo #" << i + 1 << endl;

            cout << "¿Qué nombre lleva su platillo?: ";
            getline(cin, nombreP);

            cout << "¿Qué costo tiene su platillo?: ";
            cin >> costoP;
            cin.ignore(); // Limpia el buffer de nuevo

            cout << "¿Cuál es la descripción del platillo?: ";
            getline(cin, descripcionP);

            // Crear el platillo y agregarlo al ticket
            Platillos miplato(nombreP, costoP, descripcionP);
            ticket.push_back(miplato);
        }

        // Mostrar todos los platillos del ticket
        cout << "\n==== TICKET DEL CLIENTE ====\n";
        float total = 0;
        for (int i = 0; i < ticket.size(); i++) {
            ticket[i].mostrar_info();
            total += ticket[i].get_costo();
            cout << "-----------------------------\n";
        }
        cout << "Total a pagar: $" << total << endl;
    }

    return 0;
}