#include "Futbolista.h"
Futbolista::Futbolista() {
    goles = 0;
    asistencias = 0;
    faltas = 0;
    posicion = 0;
}
void Futbolista::set_goles(int goles) {
    this->goles = goles;
}
int Futbolista::get_goles() {
    return goles;
}
void Futbolista::set_asistencias(int asistencias) {
    this->asistencias = asistencias;
}
int Futbolista::get_asistencias() {
    return asistencias;
}
void Futbolista::set_faltas(int faltas) {
    this->faltas = faltas;
}
int Futbolista::get_faltas() {
    return faltas;
}
void Futbolista::set_posicion(int posicion) {
    this->posicion = posicion;
}
int Futbolista::get_posicion() {
    return posicion;
}