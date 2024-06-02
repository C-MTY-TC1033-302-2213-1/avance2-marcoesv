//
// Episodio.cpp
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//

#include "Episodio.h"

// constructores
Episodio::Episodio(){

    titulo="episodio 1";
    temporada=1;
    calificacion=100;
}
Episodio::Episodio(string _titulo, int _temporada, int _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

// getters
string Episodio::getTitulo(){
    return titulo;
}
int Episodio::getTemporada(){
    return temporada;
}
int Episodio::getCalificacion(){
    return calificacion;
}

// setters
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}
void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}
void Episodio::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}

// metodos
string Episodio::str(){
    return titulo + ' ' + to_string(temporada) + ' ' + to_string(calificacion);
}