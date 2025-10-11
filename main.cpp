#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
	// Vector to store vehicles
	// A unique_ptr vector is used
	// This allows for the storage of both Car and Truck objects
    vector<unique_ptr<Vehicle>> vehicles;
	bool running = false;

    // Main menu loop
    while (!running) {
        // Display main menu options
        cout << "Welcome to Mehrab's Dealership" << endl;
        cout << "1. Add a Car or Truck" << endl;
        cout << "2. View Inventory" << endl;
        cout << "3. Print cars or trucks by make, model, or color" << endl;
        cout << "4. Print car or truck" << endl;
        cout << "5. Exit" << endl << endl;

        int choice;
        cin >> choice;

        // Handle user menu selection
        switch (choice) {
            case 1: {
                // Add a Car or Truck
                cout << "1. Add a Car" << endl;
                cout << "2. Add a Truck" << endl;
                int type;
                cin >> type;

                // Collect shared vehicle details
                string make;
                string model;
                string color;
                int mpg;
                double msrp;

                cout << "Enter make: ";
                cin >> make;
                cout << "Enter model: ";
                cin >> model;
                cout << "Enter color: ";
                cin >> color;
                cout << "Enter MPG: ";
                cin >> mpg;
                cout << "Enter MSRP: ";
                cin >> msrp;

                switch (type) {
                    case 1: {
                        // Add a Car
                        bool spareInTrunk, rearWindshieldWiper;
                        cout << "Does it have a spare in the trunk? (1 for yes, 0 for no): ";
                        cin >> spareInTrunk;
                        cout << "Does it have a rear windshield wiper? (1 for yes, 0 for no): ";
                        cin >> rearWindshieldWiper;

						// Create a Car object and add it to the vector
						// Since vehicles is a vector of unique_ptr<Vehicle>, we can store Car objects in it
                        vehicles.push_back(make_unique<Car>(make, model, color, mpg, msrp, spareInTrunk, rearWindshieldWiper));
                        break;
                    }
                    case 2: {
                        // Add a Truck
                        bool sidePanelStorage, autoReleaseTailgate;
                        cout << "Does it have side panel storage? (1 for yes, 0 for no): ";
                        cin >> sidePanelStorage;
                        cout << "Does it have an auto-release tailgate? (1 for yes, 0 for no): ";
                        cin >> autoReleaseTailgate;

						// Create a Truck object and add it to the vector
						// Since vehicles is a vector of unique_ptr<Vehicle>, we can store Truck objects in it
                        vehicles.push_back(make_unique<Truck>(make, model, color, mpg, msrp, sidePanelStorage, autoReleaseTailgate));
                        break;
                    }
                    default:
                        // Invalid selection for vehicle type
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            }

            case 2: {
                // View all vehicles in inventory
                if (vehicles.empty()) {
                    cout << "No vehicles in inventory" << endl;
                }
                else {
                    for (size_t i = 0; i < vehicles.size(); i++) {
                        vehicles[i]->PrintInfo();
                        cout << "------------------------" << endl;
                    }
                }
                break;
            }

            case 3: {
                // Print vehicles by make, model, or color
                cout << "1. Print by Make" << endl;
                cout << "2. Print by Model" << endl;
                cout << "3. Print by Color" << endl;
                int filterChoice;
                cin >> filterChoice;

                switch (filterChoice) {
                    case 1: {
                        // Filter by make
                        cout << "Enter make: ";
                        string make;
                        cin >> make;
                        for (size_t i = 0; i < vehicles.size(); i++) {
                            if (vehicles[i]->GetMake() == make) {
                                vehicles[i]->PrintInfo();
                                cout << "------------------------" << endl;
                            }
                        }
                        break;
                    }
                    case 2: {
                        // Filter by model
                        cout << "Enter model: ";
                        string model;
                        cin >> model;
                        for (size_t i = 0; i < vehicles.size(); i++) {
                            if (vehicles[i]->GetModel() == model) {
                                vehicles[i]->PrintInfo();
                                cout << "------------------------" << endl;
                            }
                        }
                        break;
                    }
                    case 3: {
                        // Filter by color
                        cout << "Enter color: ";
                        string color;
                        cin >> color;
                        for (size_t i = 0; i < vehicles.size(); i++) {
                            if (vehicles[i]->GetColor() == color) {
                                vehicles[i]->PrintInfo();
                                cout << "------------------------" << endl;
                            }
                        }
                        break;
                    }
                    default:
						// Invalid selection for filter type
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            }

            case 4: {
                // Print a specific Car or Truck by make and model
                cout << "Print Car or Truck?" << endl;
                cout << "1. Car" << endl;
                cout << "2. Truck" << endl;
                int type;
                cin >> type;

                switch (type) {
                    case 1: {
                        // Print Car
                        cout << "Enter make: ";
                        string make;
                        cin >> make;
                        cout << "Enter model: ";
                        string model;
                        cin >> model;
						cout << "Enter color: ";
						string color;
						cin >> color;

                        for (size_t i = 0; i < vehicles.size(); i++) {
                            if (vehicles[i]->GetMake() == make && vehicles[i]->GetModel() == model && vehicles[i]->GetColor() == color) {
                                vehicles[i]->PrintInfo();
                                cout << "------------------------" << endl;
                            }
                        }
                        break;
                    }
                    case 2: {
                        // Print Truck
                        cout << "Enter make: ";
                        string make;
                        cin >> make;
                        cout << "Enter model: ";
                        string model;
                        cin >> model;
						cout << "Enter color: ";
						string color;
						cin >> color;

                        for (size_t i = 0; i < vehicles.size(); i++) {
                            if (vehicles[i]->GetMake() == make && vehicles[i]->GetModel() == model && vehicles[i]->GetColor() == color) {
                                vehicles[i]->PrintInfo();
                                cout << "------------------------" << endl;
                            }
                        }
                        break;
                    }
                    default:
						// Invalid selection for vehicle type
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            }

            case 5:
                // Exit the program
                cout << "Exiting..." << endl;
                return 0;

            default:
                // Handle invalid menu selection
                cout << "Invalid choice" << endl;
                break;
        }
    }
}