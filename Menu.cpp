//
// Created by utec on 21/06/19.
//

#include  "Menu.h"
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
enum class Opciones { Agregar=1, Remover, Mostrar,Mejores}; // se usa un tipo enumerado para indicar las opciones
Tierra barranco(900,900);
void limpiar() {
    cout << "\033[2J\033[0;0H";
}

void esperar() {
    TipoCaracter w;
    do {
        w = input<TipoCaracter>("Presione C y Enter para continuar...");
    }while (toupper(w) != 'C');
}

void Menu::imprimirMenu() {
    limpiar();
    cout << "MENU\n";
    cout << string(4, '-') << "\n\n";
    cout << "1. Agregar un nuevo objeto\n";
    cout << "2. Remover objeto\n";
    cout << "3. Dibujar Mapa\n\n";
    cout << "4. Mejores Lugares\n\n";
    cout << "0. Para Salir\n\n";
}

void Menu::agregarObjeto()
{
    auto nombre = input<TipoString>("Ingrese Nombre : ");
    auto x = input<TipoEntero>("Ingrese posicion X : ");
    while (x < 0 || x >= tierra.getAncho()) {
        cout << "Posicion X Incorrecta, los limites son: 0, "
             << tierra.getAncho() - 1 << "\n";
        x = input<TipoEntero>("Ingrese posicion X : ");
    }

    auto y = input<TipoEntero>("Ingrese posicion Y : ");
    while (y < 0 || y >= tierra.getAncho()) {
        cout  << "Posicion Y Incorrecta, los limites son: 0, "
              << tierra.getAltura() - 1 << "\n";
        y = input<TipoEntero>("Ingrese posicion Y : ");
    }
    auto tipo = input<TipoCaracter >("Ingrese el tipo de objeto('H','R','M'): ");
    switch(tipo){
        case 'H':{
            auto direccionh=input<TipoString>("Ingrese la direccion: ");
            auto estrellas=input<TipoEntero>("Ingrese el numero de estrellas: ");
            auto disponibilidad=input<TipoString>("Ingrese la disponibilidad: ");
            auto calih=input<TipoDoble >("Ingrese la calificacion: ");
            auto formah=input<TipoCaracter >("Ingrese la forma: ");
            auto tamanoh=input<TipoEntero >("Ingrese el tamaño: ");
            barranco.adicionarObjeto(new Hoteles(nombre,direccionh,estrellas,disponibilidad,'R',x,y,calih,formah,tamanoh));
            break;}
        case 'R':{
            auto direccionr=input<TipoString>("Ingrese la direccion: ");
            auto tipodecomida=input<TipoString>("Ingrese el tipo de comida: ");
            auto edeldia=input<TipoString>("Ingrese la especialidad del dia: ");
            auto calir=input<TipoDoble >("Ingrese la calificacion: ");
            auto formar=input<TipoCaracter >("Ingrese la forma: ");
            auto tamanor=input<TipoEntero >("Ingrese el tamaño: ");
            barranco.adicionarObjeto(new Restaurantes(nombre,direccionr,tipodecomida,edeldia,'G',x,y,calir,formar,tamanor));
            break;}
        case 'M':
            auto direccionm=input<TipoString>("Ingrese la direccion: ");
            auto eactual=input<TipoString>("Ingrese la exposcion actual: ");
            auto calim=input<TipoDoble >("Ingrese la calificacion: ");
            auto formam=input<TipoCaracter >("Ingrese la forma: ");
            auto tamanom=input<TipoEntero >("Ingrese el tamaño: ");
            barranco.adicionarObjeto(new Museos(nombre,direccionm,eactual,'B',x,y,calim,formam,tamanom));
            break;
    }
}

void Menu::removerObjeto() {
    auto nombre = input<TipoString>("Ingrese Nombre: ");
    auto obj = barranco.removerObjeto(nombre);  //-- separa el objeto de la tierra
    if (obj == nullptr) {
        cout << "Objeto No existe\n";
    }
    else {
        delete obj;
        cout << "Objeto: " << nombre << " ha sido removido\n";

    }
    esperar();
}

void Menu::dibujarMapa() {
    barranco.dibujarTierra();

}
void Menu::mejoreslugares() {}

void Menu::ejecutar() {
    do {
        imprimirMenu();
        cin >> opcion;
        seleccionarOpcion();
    } while (opcion != 0);
    cout << "Fin del programa...\n";
}

void Menu::seleccionarOpcion() {
    limpiar();
    switch(Opciones(opcion)) {
        case Opciones::Agregar:  // Agregar Objeto
            agregarObjeto();
            break;
        case Opciones::Remover:  // Remover Objeto
            removerObjeto();
            break;
        case  Opciones::Mostrar: // Dibujando Tierra
            dibujarMapa();
            break;
   //     case  Opciones::Mejores: // Dibujando Tierra
     //       mejoreslugares();
       //     break;
    }
}


