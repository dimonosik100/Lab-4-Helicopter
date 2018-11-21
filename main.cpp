#include <iostream>
#include "helicopter.h"
// Homework for vstup v specialnist
using namespace std;

void setHelicopterProperties(Helicopter *helicopters){
    for (int i = 0; i < 3; ++i) {
        char name;
        int seats;
        int velocityMax;
        cout << "Please tap name of helicopter" << "\n";
        cin >> name;
        cout << "Please tap number of seats " << "\n";
        cin >> seats;
        cout << "Please tap max velocity" << "\n";
        cin >> velocityMax;
        helicopters[i].setName(name);
        helicopters[i].setSeats(seats);
        helicopters[i].setVelocityMax(velocityMax);
        cout << helicopters[i] << "\n";


    }
}

int main() {
    Helicopter helicopter1(1, 'a', 100);
    Helicopter helicopter2(2, 'b', 1000);
    Helicopter helicopter3(3, 'c', 1000);
    cout << helicopter1 << "\n";
    cout << helicopter2 << "\n";
    cout << helicopter3 << "\n";

    Helicopter helicopters[3];
    helicopters[0] = helicopter1;
    helicopters[1] = helicopter2;
    helicopters[2] = helicopter3;
    setHelicopterProperties(helicopters);


    return 0;
}