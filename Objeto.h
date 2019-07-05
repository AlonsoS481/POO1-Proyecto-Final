//
// Created by utec on 21/06/19.
//

#ifndef GAME_OBJETO_H
#define GAME_OBJETO_H
#include <iostream>
#include "Tipos.h"
using namespace std;

class Objeto {
private:
    TipoCaracter  color;
    TipoEntero    posX;
    TipoEntero    posY;
protected:
    TipoString nombre;
    TipoCaracter forma;
    TipoEntero tamano;
    TipoCaracter tipo;
public:
    Objeto();
    Objeto(const TipoString& nombre, TipoCaracter color,
           TipoEntero posX, TipoEntero posY,TipoCaracter f,TipoEntero t);
    virtual ~Objeto();
    void setNombre(const TipoString& nombre);
    string     getNombre();
    TipoEntero getPosX();
    TipoEntero getPosY();
    char getColor();
    void moverse(TipoEntero x, TipoEntero y);
    string mostrarPosicion();
    char getForma();
    TipoEntero getTamano();
   // virtual TipoCaracter getTipo();
    //virtual TipoEntero getCali();

};


#endif //GAME_OBJETO_H
