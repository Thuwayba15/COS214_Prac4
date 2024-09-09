#include <exception>
using namespace std;

#include "Truck.h"
#include "FarmUnit.h"
#include <iostream>

Truck::Truck(const std::string& id) : truckID(id) {
    std::cout << "Truck " << truckID << " created." << std::endl;
}

void Truck::update(CropField* cropField) {
	throw "Not yet implemented";
}

void Truck::startEngine() {
	throw "Not yet implemented";
}

void Truck::callTruck() {
	throw "Not yet implemented";
}

// Truck::Truck() {
// 	// truckID = int;
// }