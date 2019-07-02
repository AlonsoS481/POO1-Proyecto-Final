//
// Created by Luis on 2/07/2019.
//

#ifndef PROYECTOFINALPOO_MUSEOS_H
#define PROYECTOFINALPOO_MUSEOS_H

#include "Tipos.h"
#include "Objeto.h"

class Museos: public Objeto {
    TipoString direccion;
    TipoString eactual;
public:
    Museos();
    Museos(TipoString n,TipoString d,TipoString e,TipoCaracter color,
           TipoEntero posX, TipoEntero posY);
};


#endif //PROYECTOFINALPOO_MUSEOS_H
