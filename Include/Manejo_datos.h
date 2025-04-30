#ifndef MANEJO_DATOS_H
#define MANEJO_DATOS_H
#include <string>
#include "Futbolista.h"
#include "Basketbolista.h"
#include "Nadador.h"
#include "Deportista.h"
#include <iostream>
using namespace std;
//Funciones para manejar los datos de los deportistas
class Manejo_datos: public Deportista{
    private:
        string deporte;
        Futbolista futbolista;
        Basketbolista basketbolista;
        Nadador nadador;
    public:
        void crear_deportista();
        void mostrar_datos_futbolista();
        void mostrar_datos_basketbolista();
        void mostrar_datos_nadador();
        void mostrar_goleador();
        void mostrar_mas_faltas();
        void mostrar_promedio_tiempos_natacion();

};
#endif