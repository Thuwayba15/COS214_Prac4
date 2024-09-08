#include <exception>
#include <string>
using namespace std;

#include "CropField.h"
#include "CropFieldDecorator.h"
#include "SoilState.h"
#include "FarmUnit.h"

CropField::CropField(const std::string& type, int capacity, SoilState* state)
    : cropType(type), totalCapacity(capacity), currentAmount(0), soilState(state) {}

CropField::~CropField() {
    delete soilState;
}

int CropField::getTotalCapacity() {
	return this->totalCapacity;
}

string CropField::getCropType() {
	return this->cropType;
}

string CropField::getSoilStateName() {
	return soilState->getName();
}

int CropField::harvestCrops() {
	throw "Not yet implemented";
}

void CropField::rain() {
	throw "Not yet implemented";
}

void CropField::setSoilState(SoilState* newState) {
	this->soilState = newState;
}

void CropField::buyTruck(Truck* newTruck) {
	throw "Not yet implemented";
}

void CropField::sellTruck(Truck* truck) {
	throw "Not yet implemented";
}

