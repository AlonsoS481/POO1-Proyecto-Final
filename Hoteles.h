//
// Created by Luis on 2/07/2019.
//

#ifndef PROYECTOFINALPOO_HOTELES_H
#define PROYECTOFINALPOO_HOTELES_H
#include "Tipos.h"
#include "Objeto.h"
class Hoteles: public Objeto {
    TipoString direccion;
    TipoString Estrellas;
    TipoString disponibilidad;
public:
    Hoteles();
    Hoteles(TipoString n,TipoString d,TipoString e,TipoString di,TipoCaracter color,
            TipoEntero posX, TipoEntero posY);

};


#endif //PROYECTOFINALPOO_HOTELES_H
