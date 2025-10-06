#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {
	make = "";
	model = "";
	color = "";
	mpg = 0;
	msrp = 0.0;
}

Vehicle::Vehicle(string make, string model, string color, int mpg, double msrp) {
	this->make = make;
	this->model = model;
	this->color = color;
	this->mpg = mpg;
	this->msrp = msrp;
}

void Vehicle::PrintInfo() const {
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "MPG: " << mpg << endl;
	cout << "MSRP: $" << msrp << endl;
}