#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
	private:
		// private member variables
		bool sidePanelStorage;
		bool autoReleaseTailgate;
	public:
		// Constructors
		Truck();
		Truck(string make, string model, string color, int mpg, double msrp, bool sidePanelStorage, bool autoReleaseTailgate);
		// Override PrintInfo method
		void PrintInfo() const override;
		// Getters and setters
		void SetSidePanelStorage(bool sidePanelStorage) { this->sidePanelStorage = sidePanelStorage; }
		bool GetSidePanelStorage() const { return sidePanelStorage; }
		void SetAutoReleaseTailgate(bool autoReleaseTailgate) { this->autoReleaseTailgate = autoReleaseTailgate; }
		bool GetAutoReleaseTailgate() const { return autoReleaseTailgate; }
};

#endif