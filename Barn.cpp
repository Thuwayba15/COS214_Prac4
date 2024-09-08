#include <exception>
#include <string>
#include <stdexcept>
#include <iostream>
using namespace std;

#include "Barn.h"
#include "FarmUnit.h"

Barn::Barn(int capacity, const string& type, const string& location)
    : storageCapacity(capacity), currentAmount(0), barnType(type), barnLocation(location) {}

int Barn::getTotalCapacity() {
	 return storageCapacity;
}

void Barn::storeCrop(int amount) {
	if (currentAmount + amount <= storageCapacity) {
        currentAmount += amount;
    } else {
        throw runtime_error("Exceeds storage capacity!");
    }
}

void Barn::removeCrop(int amount) {
	if (currentAmount - amount >= 0) {
        currentAmount -= amount;
    } else {
        throw runtime_error("Not enough crops to remove!");
    }
}

bool Barn::isFull() {
	return currentAmount == storageCapacity;
}

string Barn::getCropType() {
	std::cout<<"Barn does not store crop type"<<std::endl;
}

string Barn::getSoilStateName() {
	std::cout<<"Barn does not have a soil state"<<std::endl;
}

int Barn::getRemainingCapacity() const {
    return storageCapacity - currentAmount;
}

