
#include "Polimorfismo.h"

// constructor
Polimorfismo::Polimorfismo(){
    for (int index = 0; index < MAX_VIDEOS; index++){
        arrPtrVideos[index] = nullptr;
    }
    cantidad = 0;
}

// metodo leer archivo
void Polimorfismo::leerArchivo(string _nombre){

    Serie *arrPtrSeries[50];
    Pelicula *arrPtrPeliculas[50];
    Episodio episodio;
    fstream entrada;
    string row[7];
    string line, word;
    int cantidadPeliculas = 0;
    int cantidadSeries = 0;
    int iR = 0, index;
    double promedio;

    entrada.open(_nombre, ios::in);

    while (getline(entrada, line)){
        stringstream s(line);
        iR = 0;

        while(getline(s,word,',')){
            row[iR++] = word;
        }

        if (row[0] == "P"){
            arrPtrPeliculas[cantidadPeliculas] = new Pelicula(row[1], row[2], stoi(row[3]), row[4], stoi(row[5]), stoi(row[6]));
            //cout << arrPtrPeliculas[cantidadPeliculas] -> str() << endl;
            cantidadPeliculas++;
        }
        else if (row[0] == "S"){
            arrPtrSeries[cantidadSeries] = new Serie(row[1], row[2], stoi(row[3]), row[4], stoi(row[5]));
            //cout << arrPtrSeries[cantidadSeries] -> str() << endl;
            cantidadSeries++;
        }
        else if (row[0] == "E"){
            index = stoi(row[1])-500;
            arrPtrSeries[index]->agregaEpisodio(*(new Episodio(row[2], stoi(row[3]),stoi(row[4]))));
            //cout << arrPtrSeries[index] -> str() << endl;
        }
    }
    for(int index = 0; index < cantidadSeries; index++){
        promedio = arrPtrSeries[index] -> calculaPromedio();
        arrPtrSeries[index] -> setCalificacion(promedio);
        arrPtrVideos[cantidad++] = arrPtrSeries[index];
    }
    for(int index = 0; index < cantidadPeliculas; index++){
        arrPtrVideos[cantidad++] = arrPtrPeliculas[index];
    }
    for(int index = 0; index < cantidad; index++){
        //cout << arrPtrVideos[index] -> str() << endl;
    }
    entrada.close();
}

// setters
void Polimorfismo::setPtrVideo(int index, Video *video){
    if (index >= 0 && index < MAX_VIDEOS){
        arrPtrVideos[index] = video;
    }
}
void Polimorfismo::setCantidad(int _cantidad){
    if (_cantidad >= 0 && _cantidad < MAX_VIDEOS){
        cantidad = _cantidad;
    }
}

// getters
Video* Polimorfismo::getPtrVideo(int _index){
    if (_index >= 0 && _index < MAX_VIDEOS){
        return arrPtrVideos[_index];
    }
    return nullptr;
}
int Polimorfismo::getCantidad(){
    return cantidad;
}

// metodos
void Polimorfismo::reporteInventario(){
    //delcaracion de los contadores pelicula y serie
    int cPeliculas, cSeries;

    //inicializar
    cPeliculas = 0;
    cSeries = 0;

    for(int index = 0; index < cantidad; index++){
        cout << arrPtrVideos[index] -> str() << endl;
        if (typeid(*arrPtrVideos[index]) == typeid(Pelicula)){
            cPeliculas++;
        }
        else if (typeid(*arrPtrVideos[index]) == typeid(Serie)){
            cSeries++;
        }
    }
    cout << "Peliculas = " << cPeliculas << endl;
    cout << "Series = " << cSeries << endl;

}
void Polimorfismo::reporteCalificacion(double _calificacion){
    //contador total
    int total;

    //inicializar el contador
    total = 0;

   for(int index = 0; index < cantidad; index++){
        //Verificar si tiene la calificacion == _calificacion
        //si es un apuntador se usa la notacion ->
        if(arrPtrVideos[index]->getCalificacion() == _calificacion){
            cout << arrPtrVideos[index]->str() << endl;
            total++;
        }
         
   }
   // desplegar el total fuera del for 
   cout << "Total = " << total << endl;
   //cout << cantidad << endl;
}
void Polimorfismo::reporteGenero(string _genero){
    //contador total
    int total;

    //inicializar el contador
    total = 0;

    for(int index = 0; index < cantidad; index++){
          //Verificar si tiene la genero == _genero
          //si es un apuntador se usa la notacion ->
          if(arrPtrVideos[index]->getGenero() == _genero){
                cout << arrPtrVideos[index]->str() << endl;
                total++;
            }
    }
    // desplegar el total fuera del for
    cout << "Total = " << total << endl;
}
void Polimorfismo::reportePeliculas(){
    //contador peliculas
    int cPeliculas;

    //inicializar el contador
    cPeliculas = 0;

    for(int index = 0; index < cantidad; index++){
        if (typeid(*arrPtrVideos[index]) == typeid(Pelicula)){
            cout << arrPtrVideos[index] -> str() << endl;
            cPeliculas++;
        }
    }
    cout << "Total Peliculas = " << cPeliculas << endl;    
}
void Polimorfismo::reporteSeries() {
    // Inicializar el contador
    int cSeries = 0;

    for (int index = 0; index < cantidad; index++) {
        if (typeid(*arrPtrVideos[index]) == typeid(Serie)) {
            cout << arrPtrVideos[index]->str() << endl;
            cSeries++;
        }
    }

    // Mostrar el conteo de series solo si hay al menos una serie
    if (cSeries > 0) {
        cout << "Total Series = " << cSeries << endl;
    } else {
        cout << "No series" << endl;
    }
}
