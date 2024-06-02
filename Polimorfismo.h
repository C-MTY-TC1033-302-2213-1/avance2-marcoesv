//
// Polimorfismo.h
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//
// En el desarrollo de la clase Polimorfismo aprendí a usar y aplicar la herencia y polimorfismo en C++ para poder crear un programa que pueda leer un archivo CSV 
// y crear objetos de diferentes clases dependiendo de la información que se encuentre en el archivo. También aprendí a utilizar apuntadores y arreglos de apuntadores para poder almacenar los objetos creados en el archivo CSV.

#ifndef Polimorfismo_h
#define Polimorfismo_h

#include <typeinfo>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Pelicula.h"
#include "Serie.h"
#include "Episodio.h"
#include "Video.h"
#include <stdio.h>
using namespace std;

const int MAX_VIDEOS = 100;

class Polimorfismo{
    private:
        Video* arrPtrVideos[MAX_VIDEOS];
        int cantidad;
    
    public:
        Polimorfismo();
        void leerArchivo(string _nombre);

        // setters
        void setPtrVideo(int index, Video *video);
        void setCantidad(int _cantidad);

        // getters
        Video* getPtrVideo(int _index);
        int getCantidad();

        // metodos
        void reporteInventario();
        void reporteCalificacion(double calificacion);
        void reporteGenero(string _genero);
        void reportePeliculas();
        void reporteSeries();

};

#endif /* Polimorfismo_h */