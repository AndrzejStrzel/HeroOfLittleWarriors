#ifndef TOWER_HPP
#define TOWER_HPP
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include <vector>
#include "GameObject.hpp"
#include "MagicBall.hpp"
#include "Phisics.hpp"


class Tower : public GameObject
{
protected:
    std::vector <MagicBall> magicBall;
    float range;
    void spawnMagicBall();
public:
    Tower();
    void setHitBox();
    void setPosition(sf::Vector2f pos);
    bool onCollision(sf::FloatRect enemyHitBox);
    sf::RectangleShape hitBox;
    void setOrigin();
    void enemyIsUderTower(sf::Vector2f heroPos);
    sf::Sprite & getMagicBallSprite();

};
#endif // TOWER_HPP
