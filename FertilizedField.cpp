#include <exception>
#include <iostream>
using namespace std;

#include "FertilizedField.h"
#include "CropFieldDecorator.h"
#include "CropField.h"
#include "FruitfulSoil.h"

void FertilizedField::increaseProduction() {
	 if (decoratedField->getSoilStateName() == "Dry") {
            std::cout << "Applying fertilizer, transitioning DrySoil to FruitfulSoil." << std::endl;
            decoratedField->setSoilState(new FruitfulSoil());
        }
}

void FertilizedField::harvest() {
	int harvested = decoratedField->harvestCrops();
        std::cout << "Harvested " << harvested << " crops from fertilized field." << std::endl;
}

int FertilizedField::getLeftOverCapacity() {
	return decoratedField->getTotalCapacity() - decoratedField->harvestCrops();
}

