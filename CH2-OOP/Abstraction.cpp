#include <iostream>

using namespace std;


class Vehicle {

    public:

    virtual void start() = 0;  

};


class Bike : public Vehicle {

    public:

    void start() {

    cout << "Bike started";

    }
};


int main() {

    Bike b;

    b.start();

    return 0;

}
