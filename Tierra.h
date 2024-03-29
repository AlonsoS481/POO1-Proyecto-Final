//
// Created by utec on 21/06/19.
//

#ifndef GAME_TIERRA_H
#define GAME_TIERRA_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include "Tipos.h"
#include "Objeto.h"
using namespace std;
// Valores constantes
const TipoEntero ALTURA = 900;
const TipoEntero ANCHO  = 900;
class Tierra {
private:
    sf::RenderWindow* plano;
    vector<Objeto*> objetos;
public:
    Tierra();
    Tierra(TipoEntero altura, TipoEntero ancho);
    virtual ~Tierra();
    void adicionarObjeto(Objeto* objeto);
    Objeto* removerObjeto(string& nombre);
    TipoEntero getAltura();
    TipoEntero getAncho();
    TipoEntero getCantidadObjectos();
    void dibujarTierra();
    void actualizarTierra();
    void mejorsito();

};


#endif //GAME_TIERRA_H
