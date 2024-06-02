//
// Video.h
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//
// En esta clase, aprendi a como usar el concepto de protected, 
// para poder acceder a los atributos de la clase Video desde las clases hijas.

#ifndef Video_h
#define Video_h

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Video{
    protected:
    string id;
    string titulo;
    int duracion;
    string genero;
    double calificacion;

    public:
    // constructores
    Video();
    Video(string _id, string _titulo, int _duracion, string _genero, double _calificacion);

    // getters
    string getId();
    string getTitulo();
    int getDuracion();
    string getGenero();
    double getCalificacion();

    // setters
    void setId(string _id);
    void setTitulo(string _titulo);
    void setDuracion(int _duracion);
    void setGenero(string _genero);
    void setCalificacion(double _calificacion);

    // metodos
    virtual string str();

};


#endif /* Video_h */