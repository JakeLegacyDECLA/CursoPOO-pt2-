#ifndef ALIMENTOS_H
#define ALIMENTOS_H

#include <iostream>
#include <string>

using namespace std;

class Alimentos{
    protected:
        string nombre;
        float costo;
        string descripcion;
    public:
        Alimentos(string nom, float cos, string des){
            nombre = nom;
            costo = cos;
            descripcion = des;
        }

        void mostrar_info(){
            cout << "Alimento: " << nombre << ", $: " << costo << ", Descripcion: " << descripcion; 
        }

        string get_nombre() const { //const porque no modifican nada
            return nombre; 
        }
        float get_costo() const { //const porque no modifican nada
            return costo; 
        }
        string get_descripcion() const { //const porque no modifican nada
            return descripcion; 
        }

};

#endif