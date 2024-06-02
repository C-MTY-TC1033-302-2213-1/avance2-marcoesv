//
// Video.cpp
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//

#include "Video.h"

// constructores
Video::Video(){

    id="0000";
    titulo="El señor de los anillos";
    duracion=180;
    genero="Fantasia";
    calificacion=100.0;
}
Video::Video(string _id, string _titulo, int _duracion, string _genero, double _calificacion){
    id = _id;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacion = _calificacion;
}


// getters
string Video::getId(){
    return id;
}
string Video::getTitulo(){
    return titulo;
}
int Video::getDuracion(){
    return duracion;
}
string Video::getGenero(){
    return genero;
}
double Video::getCalificacion(){
    return calificacion;
}


// setters
void Video::setId(string _id){
    id = _id;
}
void Video::setTitulo(string _titulo){
    titulo = _titulo;
}
void Video::setDuracion(int _duracion){
    duracion = _duracion;
}
void Video::setGenero(string _genero){
    genero = _genero;
}
void Video::setCalificacion(double _calificacion){
    calificacion = _calificacion;
}


// metodos
string Video::str(){
    return id + ' ' + titulo + ' ' + to_string(duracion) + ' ' + genero + ' ' + to_string(calificacion);
}