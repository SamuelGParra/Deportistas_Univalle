#ifndef NADADOR_H
#define NADADOR_H
#include <string>
#include "Deportista.h"
#include <vector>
using namespace std;
//Clase Nadador que hereda de "deportista"
class Nadador: public Deportista{
    public:
        Nadador();
        int estilo, peso; 
        
        int tiempo_general;
        void set_medallas(int medallas);
        int get_medallas();
        void set_tiempo(int tiempo);
        int get_tiempo();
        void set_distancia(int distancia);
        int get_distancia();
        void set_estilo(int estilo);
        int get_estilo();
};
#endif