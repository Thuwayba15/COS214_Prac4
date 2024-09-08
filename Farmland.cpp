#include <exception>
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

#include "Farmland.h"
#include "Client.h"
#include "FarmUnit.h"
#include "BreadthFirstFarmIterator.h"
#include "DepthFirstFarmIterator.h"

Farmland::Farmland(const std::string& name) : name(name) {}

Farmland::~Farmland() {
    for (FarmUnit* unit : farmUnits) {
        delete unit;
    }
}

FarmUnit* Farmland::addUnit(FarmUnit* unit) {
    farmUnits.push_back(unit);
    return unit;
}

FarmUnit* Farmland::removeUnit(FarmUnit* unit) {
    farmUnits.erase(std::remove(farmUnits.begin(), farmUnits.end(), unit), farmUnits.end());
    return unit;
}

int Farmland::getTotalCapacity() {
    int totalCapacity = 0;
    for (FarmUnit* unit : farmUnits) {
        totalCapacity += unit->getTotalCapacity();
    }
    return totalCapacity;
}
string Farmland::getCropType() {
	std::cout<<"Farmland does not store crop type"<<std::endl;
}

string Farmland::getSoilStateName() {
	std::cout<<"Farmland does not have a soil state"<<std::endl;
}

// FarmIterator* Farmland::createIterator(string type) {
//     if (type == "breadth-first") {
//         return new BreadthFirstFarmIterator(this);
//     } else if (type == "depth-first") {
//         return new DepthFirstFarmIterator(this);
//     } else {
//         throw std::invalid_argument("Unknown iterator type!");
//     }
// }

