#include <iostream>
using namespace std;

class Vehicle {
    public:
        string brand = "Renault";
        void color() {
                cout << "Color: Brown" << endl;
        }
};


class Car : public Vehicle {
    public:
        string model = "Duster";
        void speed() {
                cout << "Max speed is 200km/h" << endl;
        }
};

int main() {
        Car myCar;
        myCar.color();
        cout << "Brand: " << myCar.brand << endl;
        cout << "Model: " << myCar.model << endl;
        myCar.speed();

        return 0;
}

/*
CONCLUSION:
Color: Brown
Brand: Renault
Model: Duster
Max speed is 200km/h
*/
