#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
using namespace std;

class Vehicle {
	protected:
		// protected member variables
		string make;
		string model;
		string color;
		int mpg;
		double msrp;
	public:
		// Constructors
		Vehicle();
		Vehicle(string make, string model, string color, int mpg, double msrp);
		// Virtual method to print vehicle information
		virtual void PrintInfo() const;
		// Virtual destructor
		virtual ~Vehicle() = default;
		// Getters and setters
		void SetMake(string make) { this->make = make; }
		string GetMake() const { return make; }
		void SetModel(string model) { this->model = model; }
		string GetModel() const { return model; }
		void SetColor(string color) { this->color = color; }
		string GetColor() const { return color; }
		void SetMpg(int mpg) { this->mpg = mpg; }
		int GetMpg() const { return mpg; }
		void SetMsrp(double msrp) { this->msrp = msrp; }
		double GetMsrp() const { return msrp; }
};
#endif