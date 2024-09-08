#include <exception>
#include <string>
using namespace std;

#include "Barn.h"
#include "FarmUnit.h"

Barn::Barn(int capacity) : storageCapacity(capacity) {}

int Barn::getTotalCapacity() {
	 return storageCapacity;
}

void Barn::storeCrop() {
	throw "Not yet implemented";
}

void Barn::removeCrop() {
	throw "Not yet implemented";
}

void Barn::isFull() {
	throw "Not yet implemented";
}

// string Barn::getCropType() {
// 	throw "Not yet implemented";
// }

// string Barn::getSoilStateName() {
// 	throw "Not yet implemented";
// }

