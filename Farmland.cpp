#include <exception>
#include <string>
using namespace std;

#include "Farmland.h"
#include "Client.h"
#include "FarmUnit.h"
#include "BreadthFirstFarmIterator.h"
#include "DepthFirstFarmIterator.h"

FarmUnit* Farmland::addUnit() {
	throw "Not yet implemented";
}

FarmUnit Farmland::removeUnit() {
	throw "Not yet implemented";
}

int Farmland::getTotalCapacity() {
	throw "Not yet implemented";
}

string Farmland::getCropType() {
	throw "Not yet implemented";
}

string Farmland::getSoilStateName() {
	throw "Not yet implemented";
}

FarmIterator* Farmland::createIterator(string aType) {
	throw "Not yet implemented";
}

