#include <string>
#include <iostream>
#include "Car.h"
#include "Vehicle.h"
using namespace std;

// Default constructor
Car::Car() :
	Vehicle(),
	spareInTrunk(false),
	rearWindshieldWiper(false) {}

// Parameterized constructor
Car::Car(string make, string model, string color, int mpg, double msrp, bool spareInTrunk, bool rearWindshieldWiper)
    : Vehicle(make, model, color, mpg, msrp),
      spareInTrunk(spareInTrunk),
      rearWindshieldWiper(rearWindshieldWiper)
{}

void Car::PrintInfo() const {
	// Print car information
	Vehicle::PrintInfo();

	cout << "Spare in Trunk: " << (spareInTrunk ? "Yes" : "No") << endl;
	cout << "Rear Windshield Wiper: " << (rearWindshieldWiper ? "Yes" : "No") << endl;
}