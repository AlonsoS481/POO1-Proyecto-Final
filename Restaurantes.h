//
// Created by Luis on 2/07/2019.
//

#ifndef PROYECTOFINALPOO_RESTAURANTES_H
#define PROYECTOFINALPOO_RESTAURANTES_H
#include <iostream>
#include "Tipos.h"
#include "Objeto.h"

class Restaurantes: public Objeto {
    TipoString direccion;
    TipoString tcomida;
    TipoString Edeld;
public:
    Restaurantes();
    Restaurantes(TipoString n, TipoString d, TipoString t, TipoString e,TipoCaracter color,
                 TipoEntero posX, TipoEntero posY);

};


#endif //PROYECTOFINALPOO_RESTAURANTES_H
