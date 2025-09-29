#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
using namespace std;
class Vehicle {
	private:
		string make;
		string model;
		string color;
		int mpg;
		double msrp;
	public:
		Vehicle();
		Vehicle(string make, string model, string color, int mpg, double msrp);
		void DisplayInfo() const;
		void SetMake(const string& make);
		string GetMake() const;
		void SetModel(const string& model);
		string GetModel() const;
		void SetColor(const string& color);
		string GetColor() const;
		void SetMpg(int mpg);
		int GetMpg() const;
		void SetMsrp(double msrp);
		double GetMsrp() const;
		void PrintByMake(const string& make) const;
		void PrintByModel(const string& model) const;
		void PrintByColor(const string& color) const;
};
#endif