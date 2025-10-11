#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

// Default constructor
Vehicle::Vehicle() :
	make(""),
	model(""),
	color(""),
	mpg(0),
	msrp(0.0) {}

// Parameterized constructor
Vehicle::Vehicle(string make, string model, string color, int mpg, double msrp) :
	make(make),
	model(model),
	color(color),
	mpg(mpg),
	msrp(msrp) {}

void Vehicle::PrintInfo() const {
	// Print vehicle information
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "MPG: " << mpg << endl;
	cout << "MSRP: $" << msrp << endl;
}