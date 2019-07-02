//
// Created by Luis on 2/07/2019.
//

#include "Museos.h"

Museos::Museos(): direccion{}, eactual{} {}

Museos::Museos(TipoString n, TipoString d, TipoString e,TipoCaracter color,
               TipoEntero posX, TipoEntero posY):Objeto(n,color,posX,posY) {
    direccion=d;
    eactual=e;
}
