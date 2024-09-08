#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "CropField.h"
#include "CropFieldDecorator.h"
#include "SoilState.h"
#include "FarmUnit.h"

CropField::CropField() : cropType("Unknown"), totalCapacity(0), currentAmount(0), soilState(nullptr) {
    std::cout << "" << std::endl;
}

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

// Add crops to the field
void CropField::growCrops(int amount) {
    currentAmount += amount;
    if (currentAmount > totalCapacity) {
        currentAmount = totalCapacity;  
    }
}


int CropField::harvestCrops() {
    if (currentAmount == 0) {
        std::cout << "No crops available for harvesting!" << std::endl;
        return 0;
    }

    int harvestedAmount = soilState->harvestCrops(this);
    currentAmount -= harvestedAmount;
    return harvestedAmount;
}

void CropField::rain() {
    soilState->rain(this);
}

void CropField::setSoilState(SoilState* newState) {
    if (soilState != newState) {
        delete this->soilState;
        this->soilState = newState;
    }
}

void CropField::buyTruck(Truck* newTruck) {
	throw "Not yet implemented";
}

void CropField::sellTruck(Truck* truck) {
	throw "Not yet implemented";
}

