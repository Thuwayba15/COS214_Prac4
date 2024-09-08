#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "DrySoil.h"
#include "FloodedSoil.h"
#include "FruitfulSoil.h"

int DrySoil::harvestCrops(CropField* cropField) {
	int harvestAmount = cropField->getTotalCapacity() / 3;  // 1/3 of capacity in DrySoil
    std::cout << "Harvesting crops from dry soil: " << harvestAmount << " units." << std::endl;
    return harvestAmount;
}

void DrySoil::rain(CropField* cropField) {
	std::cout << "Rain fell on dry soil, soil becomes fruitful." << std::endl;
    cropField->setSoilState(new FruitfulSoil());

}

string DrySoil::getName() {
	return "Dry";
}

