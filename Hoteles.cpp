//
// Created by Luis on 2/07/2019.
//

#include "Hoteles.h"

Hoteles::Hoteles(): direccion{}, Estrellas{}, disponibilidad{}{}

Hoteles::Hoteles(TipoString n, TipoString d, TipoString e, TipoString di,TipoCaracter color,
                 TipoEntero posX, TipoEntero posY):Objeto(n,color,posX,posY) {
    direccion=d;
    Estrellas=e;
    disponibilidad=di;
}
