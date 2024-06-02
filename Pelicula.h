//
// Pelicula.h
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//
// En el desarollo de esta clase, aprendi a aplicar herencia en clases, en este caso, 
// la clase Pelicula hereda de la clase Video.

#ifndef Pelicula_h
#define Pelicula_h

#include <string>
#include "Video.h"
#include <iostream>

using namespace std;

// Clase Pelicula que hereda de Video
class Pelicula : public Video{

    private:
    int oscares;

    public:
    // constructores
    Pelicula();
    Pelicula(string _id, string _titulo, int _duracion, string _genero, int _calificacion, int _oscares);

    // getters
    int getOscares();


    // setters
    void setOscares(int _oscares);

    // metodos
    string str();

};

#endif /* Pelicula_h */