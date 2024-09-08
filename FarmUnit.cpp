#include <exception>
#include <string>
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

void FarmUnit::attach(Truck* aTruck) {
	throw "Not yet implemented";
}

void FarmUnit::detach(Truck* aTruck) {
	throw "Not yet implemented";
}

void FarmUnit::notify() {
	throw "Not yet implemented";
}

FarmUnit::FarmUnit() {
	_farmName = string;
}

