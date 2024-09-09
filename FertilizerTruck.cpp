#include <exception>
using namespace std;

#include "FertilizerTruck.h"
#include "Truck.h"

// Constructor
FertilizerTruck::FertilizerTruck(const std::string& id) : Truck(id) {}

// Update method: respond to CropField events
void FertilizerTruck::update(CropField* cropField) {
    if (cropField->getSoilStateName() == "Dry") {
        std::cout << "FertilizerTruck " << truckID << " notified: Soil is dry in field " << cropField->getCropType() << "." << std::endl;
        callTruck();
    }
}

// Start the truck's engine
void FertilizerTruck::startEngine() {
    std::cout << "FertilizerTruck " << truckID << ": Engine started." << std::endl;
}

// Call the truck to deliver fertilizer
void FertilizerTruck::callTruck() {
    startEngine();
    std::cout << "FertilizerTruck " << truckID << " is delivering fertilizer." << std::endl;
}