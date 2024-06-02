//
// Serie.h
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//
// En el desarrollo de esta clase, aprendi a aplicar herencia y composicion en clases, 
// en este caso, heredamos de la clase Video y componemos de la clase Episodio.

#ifndef Serie_h
#define Serie_h

// Para herecia
#include "Video.h"
// Para composicion
#include "Episodio.h"

#include <iostream>
#include <string>
using namespace std;


class Serie : public Video{
    private:
    Episodio episodios[5];
    int cantidad;

    public:
    // constructores
    Serie();
    Serie(string _id, string _titulo, int _duracion, string _genero, int _calificacion);
    

    // getters
    Episodio getEpisodio(int posicion);
    int getCantidad();


    // setters
    void setEpisodio(int posicion, Episodio episodio);
    void setCantidad(int _cantidad);


    // metodos
    double calculaPromedio();
    void agregaEpisodio(Episodio episodio);
    void calculaDuracion();

    string str();
    
};

#endif /* Serie_h */