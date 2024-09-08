#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "FruitfulSoil.h"
#include "SoilState.h"
#include "CropField.h"
#include "FloodedSoil.h"
#include "DrySoil.h"

int FruitfulSoil::harvestCrops(CropField* cropField) {
	int harvestAmount = cropField->getTotalCapacity();  // Full capacity in FruitfulSoil
    std::cout << "Harvesting crops from fruitful soil: " << harvestAmount << " units." << std::endl;
    return harvestAmount;
}

void FruitfulSoil::rain(CropField* cropField) {
	std::cout << "Excessive rain, soil becomes flooded." << std::endl;
    cropField->setSoilState(new FloodedSoil());
}

string FruitfulSoil::getName() {
	return "Fruitful";
}

