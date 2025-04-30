#ifndef BASKETBOLISTA_H
#define BASKETBOLISTA_H
#include <string>
#include "Deportista.h"
using namespace std;
//Clase Basketbolista que hereda de "deportista"
class Basketbolista: public Deportista{
    public:
        Basketbolista();
        int puntos, asistencias, rebotes, faltas;
        void set_puntos(int puntos);
        int get_puntos();
        void set_asistencias(int asistencias);
        int get_asistencias();
        void set_rebotes(int rebotes);
        int get_rebotes();
        void set_faltas(int faltas);
        int get_faltas();
        void set_posicion(int posicion);
        int get_posicion();
};
#endif