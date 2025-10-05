#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
	private:
		Bool sidePanelStorage;
		Bool autoReleaseTailgate;
	public:
		Truck();
		Truck(string make, string model, string color, int mpg, double msrp, Bool sidePanelStorage, Bool autoReleaseTailgate);
		void PrintDetails() const;
		void SetSidePanelStorage(Bool s) { sidePanelStorage = s; }
		Bool GetSidePanelStorage() const { return sidePanelStorage; }
		void SetAutoReleaseTailgate(Bool a) { autoReleaseTailgate = a; }
		Bool GetAutoReleaseTailgate() const { return autoReleaseTailgate; }
};

#endif