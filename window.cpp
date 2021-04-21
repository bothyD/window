#include "Main.hpp"
using namespace sf;
int main()
{
    RnderWindow window(VideoMode(400,400), "SFML Works!");
    

    
    sf::CircleShape circle;
    circle.setRadius(150);
    circle.setOutlineColor(sf::Color::Red);
    circle.setOutlineThickness(5);
    circle.setPosition(10, 20);

    window.draw(circle);

    return 0;
}