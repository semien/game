#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

const int WIDTH = 400;
const int HEIGHT = 400;
const std::string WINDOW_NAME = "game name";

class View{
public:
    View(sf::RenderWindow* win);
    void display();
    void draw(const sf::Drawable& drawable);
    ~View();
private:
    sf::RenderWindow* window;
};
