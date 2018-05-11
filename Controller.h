#include <vector>
#include "Game.h"
#include "Button.h"

class Controller{
public:
    Controller(Game* game, sf::RenderWindow* win);
    void checkEvents();
private:
    Game* game;
    sf::RenderWindow* window;
    std::vector<Button*> buttons;
};
