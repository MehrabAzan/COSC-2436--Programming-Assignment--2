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
		Car(string make, string model, string color, int mpg, double msrp, Bool spareInTrunk, Bool rearWindshieldWiper);
		void PrintDetails() const;
		void SetSpareInTrunk(Bool s) { spareInTrunk = s; }
		Bool GetSpareInTrunk() const { return spareInTrunk; }
		void SetRearWindshieldWiper(Bool r) { rearWindshieldWiper = r; }
		Bool GetRearWindshieldWiper() const { return rearWindshieldWiper; }
};

#endif