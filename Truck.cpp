#include <string>
#include <iostream>
#include "Truck.h"
#include "Vehicle.h"
using namespace std;

Truck::Truck() {
	Vehicle();
	sidePanelStorage = false;
	autoReleaseTailgate = false;
}

Truck::Truck(string make, string model, string color, int mpg, double msrp, bool sidePanelStorage, bool autoReleaseTailgate) {
	Vehicle(string make, string model, string color, int mpg, double msrp);
	this->sidePanelStorage = sidePanelStorage;
	this->autoReleaseTailgate = autoReleaseTailgate;
}

void Truck::PrintInfo() {
	Vehicle::PrintInfo();
	cout << "Side Panel Storage: " << (sidePanelStorage ? "Yes" : "No") << endl;
	cout << "Auto Release Tailgate: " << (autoReleaseTailgate ? "Yes" : "No") << endl;
}