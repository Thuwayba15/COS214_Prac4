#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "FloodedSoil.h"
#include "DrySoil.h"

int FloodedSoil::harvestCrops(CropField* cropField) {
	std::cout << "No crops can be harvested from flooded soil." << std::endl;
    return 0; 
}

void FloodedSoil::rain(CropField* cropField) {
	std::cout << "The soil is already flooded. Rain has no effect." << std::endl;

}

string FloodedSoil::getName() {
	return "Flooded";
}

