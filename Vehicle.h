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
		void PrintList() const;
		void SetMake(const string& m) { make = m; }
		string GetMake() const { return make; }
		void SetModel(const string& m) { model = m; }
		string GetModel() const { return model; }
		void SetColor(const string& c);
		string GetColor() const; { return color; }
		void SetMpg(int m); { mpg = m; }
		int GetMpg() const; { return mpg; }
		void SetMsrp(double m); { msrp = m; }
		double GetMsrp() const; { return msrp; }
		void PrintByMake(const string& make) const;
		void PrintByModel(const string& model) const;
		void PrintByColor(const string& color) const;
};
#endif