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
    TipoDoble calificacionm;
public:
    Museos();
    Museos(TipoString n,TipoString d,TipoString e,TipoCaracter color,
           TipoEntero posX, TipoEntero posY,TipoDoble cm,TipoCaracter f,TipoEntero t);
    TipoDoble getCalifiacionm();
 //   TipoCaracter getTipo()override ;
   // TipoEntero getCali()override;
};


#endif //PROYECTOFINALPOO_MUSEOS_H
