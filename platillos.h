#ifndef PLATILLOS_H
#define PLATILLOS_H

#include "alimentos.h"
#include <iostream>
#include <string>

using namespace std;

class Platillos : public Alimentos {

    public:
    Platillos(string nom, float cos, string des) : Alimentos(nom, cos, des) {}

    string get_nombre() {
        return nombre;
    }

    float get_costo() const { //const porque no modifican nada
        return costo;
    }

    string get_descripcion() const { //const porque no modifican nada
        return descripcion;
    }

    void mostrar_info() { 
        cout << "Platillo: " << nombre << ", $:" << costo << ", Descripcion: " << descripcion << endl;
    }
};

#endif
