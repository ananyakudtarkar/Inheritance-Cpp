#include <iostream>
using namespace std;  

class Vehicle {
  private:
  int cost = 10000;

  public:
  string brand = "Toyota";
    void color() {
        cout << "grey " << endl;
    }
    void showCost() {
        cout << "Cost: " << cost << endl;
    }
    protected:
    void displayInfo() {
        cout << "Brand: " << brand << endl;
    }
    
};
 

class car: public Vehicle {
  public:
    string model = "Corolla";
    void speed() {
        cout << "Max speed is 200km/h" << endl;
        displayInfo(); 
    }
    
};
class twowheeler: protected Vehicle {
  public:
    string type = "Jawa";
    void showCost() {
      //  cout << "Cost: " << cost << endl;
    }
    void speed() {
        cout << "Max speed is 100km/h" << endl;
        displayInfo(); 
    }
};
int main() {
    Vehicle myVehicle;
    myVehicle.color();

    car myCar;
    myCar.color();
    myCar.speed();    

    return 0;
}

/*
OUTPUT
grey 
grey 
Max speed is 200km/h
Brand: Toyota
*/
