#include <string>
#include <iostream>
#include "Truck.h"
#include "Vehicle.h"
using namespace std;

// Default constructor
Truck::Truck() : 
	Vehicle(), 
	sidePanelStorage(false), 
	autoReleaseTailgate(false) 
{}

// Parameterized constructor
Truck::Truck(string make, string model, string color, int mpg, double msrp, bool sidePanelStorage, bool autoReleaseTailgate) :
	Vehicle(make, model, color, mpg, msrp),
	sidePanelStorage(sidePanelStorage),
	autoReleaseTailgate(autoReleaseTailgate)
{}

void Truck::PrintInfo() const {
	// Print truck information
	Vehicle::PrintInfo();
	cout << "Side Panel Storage: " << (sidePanelStorage ? "Yes" : "No") << endl;
	cout << "Auto Release Tailgate: " << (autoReleaseTailgate ? "Yes" : "No") << endl;
}