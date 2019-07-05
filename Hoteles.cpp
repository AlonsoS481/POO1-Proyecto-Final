//
// Created by Luis on 2/07/2019.
//

#include "Hoteles.h"

Hoteles::Hoteles(): direccion{}, Estrellas{}, disponibilidad{}{}

Hoteles::Hoteles(TipoString n, TipoString d, TipoEntero e, TipoString di,TipoCaracter color,
                 TipoEntero posX, TipoEntero posY,TipoDoble ch,TipoCaracter f,TipoEntero t):Objeto(n,color,posX,posY,f,t) {
    direccion=d;
    Estrellas=e;
    disponibilidad=di;
    calificacionh=ch;
}
