#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
	private:
		// private member variables
		bool spareInTrunk;
		bool rearWindshieldWiper;
	public:
		// Constructors
		Car();
		Car(string make, string model, string color, int mpg, double msrp, bool spareInTrunk, bool rearWindshieldWiper);
		// Override PrintInfo method
		void PrintInfo() const override;
		// Getters and setters
		void SetSpareInTrunk(bool spareInTrunk) { this->spareInTrunk = spareInTrunk; }
		bool GetSpareInTrunk() const { return spareInTrunk; }
		void SetRearWindshieldWiper(bool rearWindshieldWiper) { this->rearWindshieldWiper = rearWindshieldWiper; }
		bool GetRearWindshieldWiper() const { return rearWindshieldWiper; }
};

#endif