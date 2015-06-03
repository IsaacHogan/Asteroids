#include <cstdlib>

using namespace std;

Ship :: Ship() :
        health(100), lives(3), velocity(0), posX(0), posY(0){
}

Asteroid :: Asteroid() :
        velocity(5), posX(0), posY(0){
}

void Asteroid::setCoord(){
    posX = rand() % 80 + 1;
    posY = rand() % 80 + 1;
}

void Asteroid :: getPosX() {
    return posX;
}

void Asteroid :: getPosY() {
    return posY;
}