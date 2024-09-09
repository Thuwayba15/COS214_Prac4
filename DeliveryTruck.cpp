#include <exception>
#include <iostream>
using namespace std;

#include "DeliveryTruck.h"
#include "Truck.h"

// Constructor
DeliveryTruck::DeliveryTruck(const std::string& id) : Truck(id) {}

// Update method: respond to CropField events
void DeliveryTruck::update(CropField* cropField) {
    if (cropField->getTotalCapacity() * 0.8 <= cropField->getTotalCapacity()) {
        std::cout << "DeliveryTruck " << truckID << " notified: Storage capacity nearing limit in field " << cropField->getCropType() << "." << std::endl;
        callTruck();
    }
}

// Start the truck's engine
void DeliveryTruck::startEngine() {
    std::cout << "DeliveryTruck " << truckID << ": Engine started." << std::endl;
}

// Call the truck to collect harvested crops
void DeliveryTruck::callTruck() {
    startEngine();
    std::cout << "DeliveryTruck " << truckID << " is collecting harvested crops." << std::endl;
}