//
// Serie.cpp
//
// Created by Marco Emilio Salinas Villarreal on 17/05/2024.
// A01286072 ITC
//

#include "Serie.h"

    // constructores
    Serie::Serie(){
        cantidad = 0;
    }
    Serie::Serie(string _id, string _titulo, int _duracion, string _genero, int _calificacion)
    : Video(_id, _titulo, _duracion, _genero, _calificacion){
        cantidad = 0;
    }


    // getters
    Episodio Serie::getEpisodio(int posicion){
        // Crea un episodio con constructor default
        Episodio e;
        
        // Si la posicion es valida
        if(posicion >= 0 && posicion < cantidad){
            // Regresa el episodio en la posicion
            return episodios[posicion];
        }
        // Regresa el episodio default si la posicion no es valida
        return e;
    }
    int Serie::getCantidad(){
        return cantidad;
    }


    // setters
    void Serie::setEpisodio(int posicion, Episodio episodio){
        // Si la posicion es valida
        if(posicion >= 0 && posicion < cantidad){
            // Asigna el episodio en la posicion
            episodios[posicion] = episodio;
        }

    }
    void Serie::setCantidad(int _cantidad){
        cantidad = _cantidad;
    }


    // metodos
    double Serie::calculaPromedio(){
        double acum = 0;

        // Suma la calificacion de cada episodio
        for(int index = 0; index < cantidad; index++){
            acum += episodios[index].getCalificacion();
        }
        // Si hay episodios
        if (cantidad>0){
            // Divide la suma entre la cantidad de episodios
            return acum/cantidad;
        }
        else{
            // Si no hay episodios, regresa 0
            return 0;
        }
    }
    void Serie::agregaEpisodio(Episodio episodio){
        // Si hay espacio en el arreglo
        if(cantidad < 5){
            // Agrega el episodio al final y aumenta la cantidad
            episodios[cantidad++] = episodio;
        }
    }
    void Serie::calculaDuracion() {
        int acum = 0;
        // Suma la duracion de cada episodio
        for(int index = 0; index < cantidad; index++){
            acum += episodios[index].getTemporada();
            
        }
        duracion = acum;
    }
    string Serie::str(){
        calculaDuracion();
        
        // regresa serie + episodios
        string strPrint = Video::str() + ' ' + to_string(cantidad) + '\n';
        for (int index = 0; index < cantidad; index++){
           strPrint+= episodios[index].str() + '\n';
        }
        return strPrint;
    }

   


