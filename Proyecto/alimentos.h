/*
Proyecto McRonald Irish Pub
César Daniel Aguilar Kuri
A01712823
15/05/2025

Esta clase es la padre de
platillos y bebidas, hereda
sus atributos protected.
*/

#ifndef ALIMENTOS_H
#define ALIMENTOS_H

#include <iostream>
#include <string>

using namespace std;

class Alimentos {
protected:
    string nombre;
    float costo;
    string descripcion;

public:

    Alimentos(string _nom, float _cos, string _des){
        nombre = _nom;
        costo = _cos;
        descripcion = _des;
    }

    virtual void mostrar_info() const = 0; 
    // const porque no se modifica
    // metodo virtual puro, clase abstracta
    virtual ~Alimentos() {} // destructor virtual (lo necesito porque si no, no compila)



};


#endif
