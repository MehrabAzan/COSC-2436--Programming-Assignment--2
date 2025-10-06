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

Vehicle::Vehicle(string ma, string mo, string co, int mp, double ms) {
	make = ma;
	model = mo;
	color = co;
	mpg = mp;
	msrp = ms;
}

void Vehicle::PrintInfo() {
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "MPG: " << mpg << endl;
	cout << "MSRP: $" << msrp << endl;
}