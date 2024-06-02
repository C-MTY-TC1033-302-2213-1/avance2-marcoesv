//
// Pelicula.cpp
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//

#include "Pelicula.h"

    // constructores
    Pelicula::Pelicula(){
        oscares=2;
    }
    Pelicula::Pelicula(string _id, string _titulo, int _duracion, string _genero, int _calificacion, int _oscares)
    : Video(_id, _titulo, _duracion, _genero, _calificacion){
        oscares = _oscares;
    }

    // getters
    int Pelicula::getOscares(){
        return oscares;
    }


    // setters
    void Pelicula::setOscares(int _oscares){
        oscares = _oscares;
    }

    // metodos
    string Pelicula::str(){
        return id + ' ' + titulo + ' ' + to_string(duracion) + ' ' + genero + ' ' + to_string(calificacion) + ' ' + to_string(oscares);
    }
