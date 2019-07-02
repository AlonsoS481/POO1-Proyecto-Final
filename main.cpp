#include <iostream>
#include <SFML/Graphics.hpp>
#include "Menu.h"
int main() {
    Tierra barranco(900,900);
    barranco.adicionarObjeto(new Hoteles("Utec","cinco","Avenido xd","Abierto",'R',30,30));
    barranco.adicionarObjeto(new Museos("Museo de Cera","Satelite Chico Francia","Chupetin Trujillo",'B',90,90));
    barranco.adicionarObjeto(new Restaurantes("Bao","Avenida Larco","Marina","Cangre Burguer",'G',30,90));
    barranco.dibujarTierra();
    return 0;
}


//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
//
//    return 0;
//}