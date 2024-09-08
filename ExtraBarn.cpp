#include <exception>
#include <iostream>
using namespace std;

#include "ExtraBarn.h"
#include "CropFieldDecorator.h"
#include "CropField.h"

void ExtraBarn::harvest() {
	 int harvested = decoratedField->harvestCrops();
        std::cout << "Harvested " << harvested << " crops with extra storage." << std::endl;
}

int ExtraBarn::getLeftOverCapacity() {
	 return decoratedField->getTotalCapacity() + extraCapacity - decoratedField->harvestCrops();
}

void ExtraBarn::increaseProduction() {
	
}

int ExtraBarn::getTotalCapacity(){
	 return decoratedField->getTotalCapacity() + extraCapacity;
}

// ExtraBarn::ExtraBarn() {
// 	_extraBarnCapacity = int;
// }

