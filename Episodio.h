//
// Episodio.h
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//
// En esta clase, aprendi como crear una clase con atributos privados y metodos publicos.

#ifndef Episodio_h
#define Episodio_h

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Episodio{
    private:
    string titulo;
    int temporada;
    int calificacion;

    public:
    // constructores
    Episodio();
    Episodio(string _titulo, int _temporada, int _calificacion);

    // getters
    string getTitulo();
    int getTemporada();
    int getCalificacion();

    // setters
    void setTitulo(string _titulo);
    void setTemporada(int _temporada);
    void setCalificacion(int _calificacion);

    // metodos
    string str();

};



#endif /* Episodio_h */