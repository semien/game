#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>
#include<set>
#include<vector>
#include<string>
#include"Technique.h"
#include"Towers.h"

const int WIDTH = 400;
const int HEIGHT = 400;
const std::string WINDOW_NAME = "game name";


class Game{
public:
    Game(bool isFullScreen);
    void play();
    ~Game();
private:
    sf::RenderWindow* window;
    std::set<Technique*> playerTechnique;
    std::set<Technique*> enemyTechnique;
    std::vector<Tower*> towers;
};
