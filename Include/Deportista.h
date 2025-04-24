#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include <string> 
#include <iostream>
using namespace std;
//Superclase que hereda de "deportista"

class Deportista{
    public:
        void set_nombre(string nombre);
        string get_nombre();
        void set_programa(string programa);
        string get_programa();
        void set_edad(int edad);
        int get_edad();
        void set_cedula(int cedula);
        int get_cedula();
        void set_codigo(int codigo);
        int get_codigo();
    protected:
        string nombre, programa;
        int edad, cedula, codigo;
};
#endif