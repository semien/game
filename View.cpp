#include <stdio.h>
#include "View.h"

View::View(sf::RenderWindow* win):window(win){}

View::~View(){}

void View::draw(const sf::Drawable& drawable){
    window->draw(drawable);
}
void View::display(){
    window->display();
}
