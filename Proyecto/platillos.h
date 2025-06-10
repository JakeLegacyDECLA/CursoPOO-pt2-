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

#ifndef PLATILLOS_H
#define PLATILLOS_H

#include "alimentos.h"
#include <iostream>
#include <string>

using namespace std;

class Platillos : public Alimentos {
    private:
        int gramosProteina;
        int gramosCarbohidrato;
        int gramosVegetales;
        string region;
    
    public:
        Platillos(); //sobrecarga
        Platillos(string, float, string, int, int, int, string);
        void mostrar_info();
};

Platillos::Platillos(string _nombre, float _costo, string _descripcion, int _gP, int _gC, int _gV, string _region) 
: Alimentos(_nombre, _costo, _descripcion){
    gramosProteina = _gP;
    gramosCarbohidrato = _gC;
    gramosVegetales = _gV;
    region = _region;
}

void Platillos::mostrar_info(){
    Alimentos::mostrar_info();
    cout << "Gramos de Proteina: " <<gramosProteina<<endl;
    cout << "Gramos de Carbohidrato: " <<gramosCarbohidrato<<endl;
    cout << "Gramos de Vegetales: " <<gramosVegetales<<endl;
    cout << "Region originaria del platillo: " << region << endl;
}
#endif
