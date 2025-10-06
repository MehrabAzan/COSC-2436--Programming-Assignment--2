#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
	private:
		bool spareInTrunk;
		bool rearWindshieldWiper;
	public:
		Car();
		Car(string make, string model, string color, int mpg, double msrp, bool spareInTruck, bool rearWindshieldWiper);
		void PrintInfo();
		void SetSpareInTrunk(bool spareInTrunk) { this->spareInTrunk = spareInTrunk; }
		bool GetSpareInTrunk() const { return spareInTrunk; }
		void SetRearWindshieldWiper(bool rearWindshieldWiper) { this->rearWindshieldWiper = rearWindshieldWiper; }
		bool GetRearWindshieldWiper() const { return rearWindshieldWiper; }
};

#endif