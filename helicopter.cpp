//
// Created by dima on 18.10.2018.
//

#include "helicopter.h"

int Helicopter::getSeats() const {
    return seats;
}

void Helicopter::setSeats(int seats) {
    Helicopter::seats = seats;
}

char Helicopter::getName() const {
    return name;
}

void Helicopter::setName(char name) {
    Helicopter::name = name;
}

Helicopter::~Helicopter() = default;

int Helicopter::getVelocityMax() const {
    return velocityMax;
}

void Helicopter::setVelocityMax(int velocityMax) {
    Helicopter::velocityMax = velocityMax;
}

Helicopter::Helicopter(int seats, char name, int velocityMax)  {

    this->seats =  seats;
    this->name = name;
    this->velocityMax = velocityMax;
}

Helicopter::Helicopter() = default;

std::ostream &operator<<(std::ostream &os, const Helicopter &helicopter1) {
    os << "seats: " << helicopter1.seats << " name: " << helicopter1.name << " velocityMax: " << helicopter1.velocityMax
       << " pilots: " << helicopter1.pilots << " passangers: " << helicopter1.passangers;
    return os;
}
