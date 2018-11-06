#include <iostream>
#include "helicopter.h"
// Homework for vstup v specialnist
using namespace std;

void putIntoObject(Helicopter helic[3]){
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
        helic[i].setName(name);
        helic[i].setSeats(seats);
        helic[i].setVelocityMax(velocityMax);
        cout << helic[i] << "\n";


    }
}

int main() {
    Helicopter helicopter1(1, 'a', 100);
    Helicopter helicopter2(2, 'b', 1000);
    Helicopter helicopter3(3, 'c', 1000);
    cout << helicopter1 << "\n";
    cout << helicopter2 << "\n";
    cout << helicopter3 << "\n";

    Helicopter helic[3];
    helic[0] = helicopter1;
    helic[1] = helicopter2;
    helic[2] = helicopter3;
    putIntoObject(helic);


    return 0;
}