#include <exception>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

#include "FarmUnit.h"
#include "Farmland.h"
#include "Truck.h"

int FarmUnit::getTotalCapacity() {
	throw "Not yet implemented";
}

string FarmUnit::getCropType() {
	throw "Not yet implemented";
}

string FarmUnit::getSoilStateName() {
	throw "Not yet implemented";
}

// Attach a truck (observer) to the farm unit
void FarmUnit::attach(Truck* truck) {
    observerList.push_back(truck);
}

// Detach a truck (observer) from the farm unit
void FarmUnit::detach(Truck* truck) {
    observerList.erase(std::remove(observerList.begin(), observerList.end(), truck), observerList.end());
}

// Notify all attached trucks of an event
void FarmUnit::notify(CropField* field) {
    for (Truck* truck : observerList) {
        truck->update(field);  // Notify each truck about the event in the CropField
    }
}

// FarmUnit::FarmUnit() {
// 	farmName = string;
// }