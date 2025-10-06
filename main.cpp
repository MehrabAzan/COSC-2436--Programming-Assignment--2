#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "Truck.h"
#include "Vehicle.h"
#include "Car.h"
using namespace std;


int main() {
	vector<unique_ptr<Vehicle>> vehicles;

	while (true) {
		cout << "Welcome to Mehrab's Dealership" << endl;
		cout << "1. Add a Car or Truck" << endl;
		cout << "2. View Inventory" << endl;
		cout << "3. Print cars or trucks by make, model, or color" << endl;
		cout << "4. Print car or truck" << endl;
		cout << "5. Exit" << endl;
		int choice;
		cin >> choice;

		if (choice == 1) {
			cout << "1. Add a Car" << endl;
			cout << "2. Add a Truck" << endl;
			int type;
			cin >> type;

			if (type == 1) {
				cout << "Enter make: ";
				string make;
				cin >> make;
				cout << "Enter model: ";
				string model;
				cin >> model;
				cout << "Enter color: ";
				string color;
				cin >> color;
				cout << "Enter MPG: ";
				int mpg;
				cin >> mpg;
				cout << "Enter MSRP: ";
				double msrp;
				cin >> msrp;
				cout << "Does it have a spare in the trunk? (1 for yes, 0 for no): ";
				bool spareInTrunk;
				cin >> spareInTrunk;
				cout << "Does it have a rear windshield wiper? (1 for yes, 0 for no): ";
				bool rearWindshieldWiper;
				cin >> rearWindshieldWiper;

				vehicles.push_back(make_unique<Car>(make, model, color, mpg, msrp, spareInTrunk, rearWindshieldWiper));
			} else if (type == 2) {
				cout << "Enter make: ";
				string make;
				cin >> make;
				cout << "Enter model: ";
				string model;
				cin >> model;
				cout << "Enter color: ";
				string color;
				cin >> color;
				cout << "Enter MPG: ";
				int mpg;
				cin >> mpg;
				cout << "Enter MSRP: ";
				double msrp;
				cin >> msrp;
				cout << "Does it have side panel storage? (1 for yes, 0 for no): ";
				bool sidePanelStorage;
				cin >> sidePanelStorage;
				cout << "Does it have an auto-release tailgate? (1 for yes, 0 for no): ";
				bool autoReleaseTailgate;
				cin >> autoReleaseTailgate;

				vehicles.push_back(make_unique<Truck>(make, model, color, mpg, msrp, sidePanelStorage, autoReleaseTailgate));
			} else {
				cout << "Invalid choice" << endl;
			}
		} else if (choice == 2) {
			if (vehicles.empty()) {
				cout << "No vehicles in inventory" << endl;
			} else {
				for (int i = 0; i < vehicles.size(); i++) {
					vehicles[i]->PrintInfo();
					cout << "------------------------" << endl;
				}
			}
		} else if (choice == 3) {
			cout << "1. Print by Make" << endl;
			cout << "2. Print by Model" << endl;
			cout << "3. Print by Color" << endl;
			int filterChoice;
			cin >> filterChoice;
			
			if (filterChoice == 1) {
				cout << "Enter make: ";
				string make;
				cin >> make;

				for (int i = 0; i < vehicles.size(); i++) {
					if (vehicles[i]->GetMake() == make) {
						vehicles[i]->PrintInfo();
						cout << "------------------------" << endl;
					}
				}
			} else if (filterChoice == 2) {
				cout << "Enter model: ";
				string model;
				cin >> model;
				for (int i = 0; i < vehicles.size(); i++) {
					if (vehicles[i]->GetModel() == model) {
						vehicles[i]->PrintInfo();
						cout << "------------------------" << endl;
					}
				}
			} else if (filterChoice == 3) {
				cout << "Enter color: ";
				string color;
				cin >> color;
				for (int i = 0; i < vehicles.size(); i++) {
					if (vehicles[i]->GetColor() == color) {
						vehicles[i]->PrintInfo();
						cout << "------------------------" << endl;
					}
				}
			} else {
				cout << "Invalid choice" << endl;
			}
		} else if (choice == 4) {
			cout << "Print Car or Truck?" << endl;
			cout << "1. Car" << endl;
			cout << "2. Truck" << endl;
			int type;
			cin >> type;

			if (type == 1) {
				cout << "Enter make: ";
				string make;
				cin >> make;
				cout << "Enter model: ";
				string model;
				cin >> model;
				for (int i = 0; i < vehicles.size(); i++) {
					if (vehicles[i]->GetMake() == make && vehicles[i]->GetModel() == model) {
						vehicles[i]->PrintInfo();
						cout << "------------------------" << endl;
					}
				}
			} else if (type == 2) {
				cout << "Enter make: ";
				string make;
				cin >> make;
				cout << "Enter model: ";
				string model;
				cin >> model;
				for (int i = 0; i < vehicles.size(); i++) {
					if (vehicles[i]->GetMake() == make && vehicles[i]->GetModel() == model) {
						vehicles[i]->PrintInfo();
						cout << "------------------------" << endl;
					}
				}
			} else {
				cout << "Invalid choice" << endl;
			}
		} else if (choice == 5) {
			cout << "Exiting..." << endl;
			break;
		} else {
			cout << "Invalid choice" << endl;
		}
	}
}

