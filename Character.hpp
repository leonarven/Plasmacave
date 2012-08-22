#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <map>

class Character {
 public:
    /* x,y,z = koordinaatit */
    vec3 pos;
    vec3 posp; // Päivityskerroittain sijaintin lisättävät

    /* x,y,z = kulmat */
    vec3 rotate;

    /* x = nopeus
     * y = painovoima
    */
    vec2 speed;

    Character() {}

    void setPos(double x, double y, double z) {
        this->pos.x = x;
        this->pos.y = y;
        this->pos.z = z;
    }
    void move(double xp, double yp, double zp) {
        this->pos.x += xp;
        this->pos.y += yp;
        this->pos.z += zp;
    }

    void update() {
        this->pos.x += this->posp.x;
        this->pos.y += this->posp.y;
        this->pos.z += this->posp.z;

        this->posp.y += this->speed.y;
    }
/*
    void setX(double x) { this->pos.x = x; }
    void setY(double y) { this->pos.y = y; }
    void setZ(double z) { this->pos.z = z; }
    void setXP(double xp) { this->posp.x = xp; }
    void setYP(double yp) { this->posp.y = yp; }
    void setZP(double zp) { this->posp.z = zp; }
    void setSpeed(double s)  { this->speed.x = s; }
    void setSpeedY(double y) { this->speed.y = y; }

    double getX() { return this->pos.x; }
    double getY() { return this->pos.y; }
    double getZ() { return this->pos.z; }
    double getXP() { return this->posp.x; }
    double getYP() { return this->posp.y; }
    double getZP() { return this->posp.z; }
    double getSpeed()  { return this->speed.x; }
    double getSpeedY() { return this->speed.y; }*/
};
#endif
