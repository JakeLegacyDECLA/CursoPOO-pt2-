/*
Proyecto McRonald Irish Pub
César Daniel Aguilar Kuri
A01712823
15/05/2025

Este es un proyecto que permite
ingresar alimentos a un inventario
para posteriormente poderlos ingresar
a un ticket que se les dará a los
clientes del restaurante.
*/

//LIBRERIAS
#include <iostream> //para imprimir
#include <string> //para hacer uso de strings
#include <vector> //para hacer vectores (acumuladores de variables)
//CLASES
#include "platillos.h"
#include "bebidas.h"
#include "inventario.h"

using namespace std;

int main() {
    int opcion, cantidad;
    float costo;
    string nombre, descripcion, tipo, region;
    int gP, gC, gV, vL;

    Inventario inventario;
    vector<Platillos*> ticketPlatillos;
    vector<Bebidas*> ticketBebidas;

    while (true) {
        cout << "\n--- McRonald Irish Pub ---" << endl;
        cout << "1. Agregar alimentos al inventario\n";
        cout << "2. Agregar alimentos al ticket\n";
        cout << "3. Mostrar inventario\n";
        cout << "4. Mostrar ticket\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "¿Desea agregar 1. Platillo o 2. Bebida?: ";
            cin >> opcion;
            cout << "¿Cuántos desea ingresar?: ";
            cin >> cantidad;

            for (int i = 0; i < cantidad; i++) {
                cout << "\nElemento #" << i + 1 << endl;
                cout << "Nombre: "; cin >> nombre;
                cout << "Costo: "; cin >> costo;
                cout << "Descripción: "; cin >> descripcion;

                if (opcion == 1) {
                    cout << "Gramos de Proteína (no.entero): "; cin >> gP;
                    cout << "Gramos de Carbohidratos (no.entero): "; cin >> gC;
                    cout << "Gramos de Vegetales (no.entero): "; cin >> gV;
                    cout << "Región: "; cin >> region;

                    inventario.agregarPlatillo(new Platillos(nombre, costo, descripcion, gP, gC, gV, region));
                } else {
                    cout << "Volumen del líquido (no.entero): "; cin >> vL;
                    cout << "Tipo: "; cin >> tipo;

                    inventario.agregarBebida(new Bebidas(nombre, costo, descripcion, vL, tipo));
                }
            }

        } else if (opcion == 2) {
            cout << "¿Desea añadir al ticket 1. Platillo o 2. Bebida?: ";
            cin >> opcion;

            if (opcion == 1) {
                auto lista = inventario.getPlatillos();
                if (lista.empty()) {
                    cout << "No hay platillos disponibles en el inventario.\n";
                    continue;
                }
                for (int i = 0; i < lista.size(); i++) {
                    cout << "[" << i << "] ";
                    lista[i]->mostrar_info();
                }
                cout << "Seleccione el índice del platillo a agregar al ticket: ";
                cin >> cantidad;
                if (cantidad >= 0 && cantidad < lista.size())
                    ticketPlatillos.push_back(lista[cantidad]);

            } else {
                auto lista = inventario.getBebidas();
                if (lista.empty()) {
                    cout << "No hay bebidas disponibles en el inventario.\n";
                    continue;
                }
                for (int i = 0; i < lista.size(); i++) {
                    cout << "[" << i << "] ";
                    lista[i]->mostrar_info();
                }
                cout << "Seleccione el índice de la bebida a agregar al ticket: ";
                cin >> cantidad;
                if (cantidad >= 0 && cantidad < lista.size())
                    ticketBebidas.push_back(lista[cantidad]);
            }

        } else if (opcion == 3) {
            inventario.mostrarInventario();

        } else if (opcion == 4) {
            cout << "\n--- Ticket Actual ---\n";
            for (Platillos* p : ticketPlatillos)
            p->mostrar_info();
            for (Bebidas* b : ticketBebidas)
            b->mostrar_info();

        } else if (opcion == 5) {
            cout << "Gracias por usar el sistema.\n";
            break; //para terminar de usar el if
                    // sin problemas de compilacion

        } else {
            cout << "Opción inválida.\n";
        }
    }

    return 0;
}
