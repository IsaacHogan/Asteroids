#ifndef GAME_H
#define	GAME_H

class Ship {
public:
    Ship();
private:
    int health;
    int lives;
    int velocity;
    int posX;
    int posY;
};

class Asteroid {
public:
    Asteroid();
    void setCoord();
    void getPosX();
    void getPosY();

private:
    int velocity;
    int posX;
    int posY;
};

#endif

