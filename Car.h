#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
	private:
		Bool spareInTrunk;
		Bool rearWindshieldWiper;
	public:
		Car();
		Car(string ma, string mo, string c, int mp, double ms, Bool s, Bool r);
		void PrintInfo();
		void SetSpareInTrunk(Bool s) { spareInTrunk = s; }
		Bool GetSpareInTrunk() { return spareInTrunk; }
		void SetRearWindshieldWiper(Bool r) { rearWindshieldWiper = r; }
		Bool GetRearWindshieldWiper() { return rearWindshieldWiper; }
};

#endif