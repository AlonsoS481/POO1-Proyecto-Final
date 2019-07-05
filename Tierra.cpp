//
// Created by utec on 21/06/19.
//

#include "Tierra.h"
#include <string>
#include <iomanip>
#include <algorithm>
#include <map>

map<char,sf::Color>colores ={{'R',sf::Color::Red},{'B',sf::Color::Blue},{'G',sf::Color::Green}};

using namespace std;
TipoEntero Tierra::getAltura() {
    return ALTURA;
}

TipoEntero Tierra::getAncho() {
    return ANCHO;
}

Tierra::Tierra() {
    plano=nullptr;
}
Tierra::Tierra(TipoEntero altura, TipoEntero ancho) {}
Tierra::~Tierra() {
    delete plano;
    plano= nullptr;
}

void Tierra::adicionarObjeto(Objeto* objeto) {
    objetos.emplace_back(objeto);
}

Objeto* Tierra::removerObjeto(string& nombre) {
    // Si vector esta vacio
    if (objetos.size() == 0)
        return nullptr;
    // Buscando objeto
    auto iter = find_if(begin(objetos), end(objetos),
                        [&nombre](Objeto* obj){ return obj->getNombre() == nombre; });
    if (iter != end(objetos)) {
        // Eliminando la referencia al puntero objeto dentro del vector objetos
        objetos.erase(iter);
        //-- si encuentra al objeto lo separa del vector,
        //-- (no libera de memoria el objeto encontrado), esto se hará en el menú,
        //-- donde fue asignado, debido a que el objeto no es parte sino el objeto es un visitante.
        return *iter;
    }
    // Si vector esta vacio
    return nullptr;
}

void Tierra::actualizarTierra() {
    for (auto &item: objetos) {
        switch(item->getForma()){
            case 'C': {
                sf::CircleShape shape(item->getTamano());
                shape.setFillColor(colores[item->getColor()]);
                shape.setPosition(item->getPosX(), item->getPosY());
                plano->draw(shape);
                break;
            }
            case 'S':{
                sf::CircleShape square(item->getTamano(), 4);
                square.setFillColor(colores[item->getColor()]);
                square.setPosition(item->getPosX(), item->getPosY());
                plano->draw(square);
                break;}
            case 'O':{
                sf::CircleShape octagon(item->getTamano(), 8);
                octagon.setFillColor(colores[item->getColor()]);
                octagon.setPosition(item->getPosX(), item->getPosY());
                plano->draw(octagon);
                break;}
            case'T':{
                sf::CircleShape triangle(item->getTamano(), 3);
                triangle.setFillColor(colores[item->getColor()]);
                triangle.setPosition(item->getPosX(), item->getPosY());
                plano->draw(triangle);
                break;
            }


        }



    }
}
TipoEntero Tierra::getCantidadObjectos() {
    return objetos.size();
}

void Tierra::dibujarTierra() {
    plano = new sf::RenderWindow(
            sf::VideoMode(900,900),"Proyecto Final");
    if(plano== nullptr) return;
    while (plano->isOpen()){
       sf::Event event;
        while (plano->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
               plano->close();
        }
        plano->clear();
        actualizarTierra();
        plano->display();
  }

}

//void Tierra::mejorsito() {
  //  for(int x=0;x<objetos.size();x++){
    //    if (objetos[x]->getTipo()=='H'){
      //      if(objetos[x]->getCali()<objetos[x+1]->getCali())
        //        objetos[x]->getCali();
        //}
        //if (objetos[x]->getTipo()=='R'){
         //   if(objetos[x]->getCali()<objetos[x+1]->getCali())
           //     objetos[x]->getCali();
            //}
        //if (objetos[x]->getTipo()=='M'){
          //  if(objetos[x]->getCali()<objetos[x+1]->getCali())
            //    objetos[x]->getCali();
            //}
    //}
//}


