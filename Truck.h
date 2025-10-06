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
		Truck(string ma, string mo, string c, int mp, double ms, Bool s, Bool a;
		void PrintInfo();
		void SetSidePanelStorage(Bool s) { sidePanelStorage = s; }
		Bool GetSidePanelStorage() { return sidePanelStorage; }
		void SetAutoReleaseTailgate(Bool a) { autoReleaseTailgate = a; }
		Bool GetAutoReleaseTailgate() { return autoReleaseTailgate; }
};

#endif