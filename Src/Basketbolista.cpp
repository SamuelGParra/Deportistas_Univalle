#include "Basketbolista.h"
Basketbolista::Basketbolista() {
    puntos = 0;
    asistencias = 0;
    rebotes = 0;
    faltas = 0;
}
void Basketbolista::set_puntos(int puntos) {
    this->puntos = puntos;
}
int Basketbolista::get_puntos() {
    return puntos;
}
void Basketbolista::set_asistencias(int asistencias) {
    this->asistencias = asistencias;
}
int Basketbolista::get_asistencias() {
    return asistencias;
}
void Basketbolista::set_rebotes(int rebotes) {
    this->rebotes = rebotes;
}
int Basketbolista::get_rebotes() {
    return rebotes;
}
void Basketbolista::set_faltas(int faltas) {
    this->faltas = faltas;
}
int Basketbolista::get_faltas() {
    return faltas;
}