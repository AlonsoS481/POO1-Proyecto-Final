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
    TipoDoble calificacionh;
    TipoCaracter tipo='H';
public:
    Hoteles();
    Hoteles(TipoString n,TipoString d,TipoEntero e,TipoString di,TipoCaracter color,
            TipoEntero posX, TipoEntero posY,TipoDoble ch,TipoCaracter f,TipoEntero t);
    TipoDoble getCalificacionh();
 //   TipoCaracter getTipo()override ;
   // TipoEntero getCali()override;

};


#endif //PROYECTOFINALPOO_HOTELES_H
