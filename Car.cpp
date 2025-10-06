#include <string>
#include <iostream>
#include "Car.h"
#include "Vehicle.h"
using namespace std;

Car::Car() {
	Vehicle();
	spareInTrunk = false;
	rearWindshieldWiper = false;
}

Car::Car(string make, string model, string color, int mpg, double msrp, bool spareInTruck, bool rearWindshieldWiper) {
	Vehicle(string make, string model, string color, int mpg, double msrp);
	this->spareInTrunk = spareInTruck;
	this->rearWindshieldWiper = rearWindshieldWiper;
}

void Car::PrintInfo() {
	Vehicle::PrintInfo();
	cout << "Spare in Trunk: " << (spareInTrunk ? "Yes" : "No") << endl;
	cout << "Rear Windshield Wiper: " << (rearWindshieldWiper ? "Yes" : "No") << endl;
}