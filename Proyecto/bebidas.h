/*
Proyecto McRonald Irish Pub
César Daniel Aguilar Kuri
A01712823
15/05/2025

Esta clase es la hija de
alimentos, obtiene de sus
sus atributos protected para
poder trabajar con ellos y añadir
un poco mas de atributos.
*/

#ifndef BEBIDAS_H
#define BEBIDAS_H

#include "alimentos.h"
#include <iostream>
#include <string>

using namespace std;

class Bebidas : public Alimentos {
    private:
        int volumenLiquido;
        string tipo;
    public:
        Bebidas(); //sobrecarga
        Bebidas(string, float, string, int, string);
        void mostrar_info() const override;


};

Bebidas::Bebidas(string _nombre, float _costo, string _descripcion, int _vL, string _tipo) 
: Alimentos(_nombre, _costo, _descripcion){
    volumenLiquido = _vL;
    tipo = _tipo;
}

void Bebidas::mostrar_info() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Costo: " << costo << endl;
    cout << "Descripcion: " << descripcion << endl;
    cout << "Volumen: " << volumenLiquido << "ml\n";
    cout << "Tipo: " << tipo << endl;
}
#endif
