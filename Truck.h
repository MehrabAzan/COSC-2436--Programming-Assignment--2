#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
	private:
		bool sidePanelStorage;
		bool autoReleaseTailgate;
	public:
		Truck();
		Truck(string make, string model, string color, int mpg, double msrp, bool sidePanelStorage, bool autoReleaseTailgate);
		void PrintInfo();
		void SetSidePanelStorage(bool sidePanelStorage) { this->sidePanelStorage = sidePanelStorage; }
		bool GetSidePanelStorage() const { return sidePanelStorage; }
		void SetAutoReleaseTailgate(bool autoReleaseTailgate) { this->autoReleaseTailgate = autoReleaseTailgate; }
		bool GetAutoReleaseTailgate() const { return autoReleaseTailgate; }
};

#endif