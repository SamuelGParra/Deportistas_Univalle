#ifndef FUTBOLISTA_H
#define FUTBOLISTA_H
#include <string>
#include "Deportista.h"
using namespace std;
//Clase Futbolista que hereda de "deportista"
class Futbolista: public Deportista{
    public:
        Futbolista();
        int goles, asistencias, faltas, posicion;
        void set_goles(int goles);
        int get_goles();
        void set_asistencias(int asistencias);
        int get_asistencias();
        void set_faltas(int faltas);
        int get_faltas();
        void set_posicion(int posicion);
        int get_posicion();
};
#endif