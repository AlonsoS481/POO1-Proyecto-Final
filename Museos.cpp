//
// Created by Luis on 2/07/2019.
//

#include "Museos.h"

Museos::Museos(): direccion{}, eactual{},calificacionm{} {}

Museos::Museos(TipoString n, TipoString d, TipoString e,TipoCaracter color,
               TipoEntero posX, TipoEntero posY,TipoDoble cm,TipoCaracter f,TipoEntero t):Objeto(n,color,posX,posY,f,t) {
    direccion=d;
    eactual=e;
    calificacionm=cm;
}

TipoDoble Museos::getCalifiacionm() {
    return calificacionm;
}

//TipoCaracter Museos::getTipo() {
  //  return tipo;
//}

//TipoEntero Museos::getCali() {
  //  return calificacionm;
//}
