#include<SFML/Audio.hpp>
#include<SFML/Graphics.hpp>
#include<iostream>
#include"ResourcePath.hpp"
#include"Game.h"

Game::Game(bool isFullScreen){
    if (isFullScreen){
        window = new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), WINDOW_NAME, sf::Style::Fullscreen);
    } else {
        window = new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), WINDOW_NAME, sf::Style::Default);
    }
}

Game::~Game(){
    delete window;
}

void Game::play(){
   /* // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    window->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(resourcePath() + "cute_image.jpg")) {
        return EXIT_FAILURE;
    }
    sf::Texture texture2;
    texture2.loadFromFile(resourcePath()+"Preview.jpg");
    sf::Sprite sprite(texture);
    sf::Sprite sprite2(texture2);
    
    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("Hello SFML", font, 50);
    text.setFillColor(sf::Color::Black);
    
    // Load a music to play
//    sf::Music music;
//    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
//        return EXIT_FAILURE;
//    }
    
    // Play the music
//    music.play();
    
    // Start the game loop
    while (window->isOpen())
    {
        // Process events
        sf::Event event;
        while (window->pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window->close();
            }
            
            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window->close();
            }
        }
        
        // Clear screen
        window->clear();
        
        // Draw the sprite
        window->draw(sprite);
        
        window->draw(sprite2);
        
        // Draw the string
        window->draw(text);
        
        // Update the window
        window->display();
    }
    */
}
