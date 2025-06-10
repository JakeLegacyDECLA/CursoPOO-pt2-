/*
Proyecto McRonald Irish Pub
César Daniel Aguilar Kuri
A01712823
15/05/2025

Esta clase es el inventario
donde se añaden los alimentos
primero para poder agregarlos
al ticket.
*/

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include "platillos.h"
#include "bebidas.h"

class Inventario {
private:
    vector<Platillos*> platillosDisponibles;
    vector<Bebidas*> bebidasDisponibles;

public:
    void agregarPlatillo(Platillos* p) {
        platillosDisponibles.push_back(p);
    }

    void agregarBebida(Bebidas* b) {
        bebidasDisponibles.push_back(b);
    }

    void mostrarInventario() {
        cout << "\nPlatillos en Inventario\n";
        for (Platillos* p : platillosDisponibles) 
        p->mostrar_info();
        cout << "\n-- Bebidas en Inventario --\n";
        for (Bebidas* b : bebidasDisponibles)
        b->mostrar_info();
    }

    vector<Platillos*> getPlatillos() { 
        return platillosDisponibles; 
    }
    vector<Bebidas*> getBebidas() {
        return bebidasDisponibles; 
    }
};

#endif
