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
		Vehicle(string ma, string mo, string co, int mp, double ms);
		void PrintInfo();
		void SetMake(string m) { make = m; }
		string GetMake() { return make; }
		void SetModel(string m) { model = m; }
		string GetModel() { return model; }
		void SetColor(string c);
		string GetColor(); { return color; }
		void SetMpg(int m); { mpg = m; }
		int GetMpg(); { return mpg; }
		void SetMsrp(double m); { msrp = m; }
		double GetMsrp(); { return msrp; }
};
#endif