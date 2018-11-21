//
// Created by dima on 18.10.2018.
//

#ifndef UNTITLED6_HELICOPTER_H
#define UNTITLED6_HELICOPTER_H


#include <ostream>

class Helicopter {
    int seats;
    char name;
    int velocityMax;
protected:
    int pilots, passangers;
public:
    Helicopter();
    Helicopter(int seats, char name, int velocityMax);
    virtual ~Helicopter();

    int getSeats() const;
    void setSeats(int seats);

    char getName() const;
    void setName(char name);

    int getVelocityMax() const;
    void setVelocityMax(int velocityMax);

    friend std::ostream &operator<<(std::ostream &os, const Helicopter &helicopter1);
};


#endif //UNTITLED6_HELICOPTER_H
