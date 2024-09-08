#include <iostream>
#include "Farmland.h"
#include "CropField.h"
#include "Barn.h"
#include "SoilState.h"

using namespace std;

// Mock SoilState class for testing purposes
class MockSoilState : public SoilState {
public:
    string getName()  override{
        return "Fruitful";
    }

    int harvestCrops(CropField* aCropField) override {
        return 0;}

    void rain(CropField* aCropField) override {
        cout << "Rain improved the soil!" << endl;
    }

    // void rainEffect() override {
    //     cout << "Rain improved the soil!" << endl;
    // }
};

void testComposite(){
    // Create soil state objects
    SoilState* fruitfulSoil = new MockSoilState();

    // Create CropField objects (Leaf nodes in Composite pattern)
    CropField* wheatField = new CropField("Wheat", 100, fruitfulSoil);
    CropField* cornField = new CropField("Corn", 150, fruitfulSoil);

    // Create Barn objects (Leaf nodes in Composite pattern)
    Barn* smallBarn = new Barn(200, "Small Barn", "East Wing");
    Barn* largeBarn = new Barn(500, "Large Barn", "West Wing");

    // Create Farmland object (Composite node in Composite pattern)
    Farmland* farmland1 = new Farmland("Main Farmland");

    // Add CropFields and Barns to the farmland
    farmland1->addUnit(wheatField);
    farmland1->addUnit(cornField);
    farmland1->addUnit(smallBarn);
    farmland1->addUnit(largeBarn);

    // Testing Farmland's total capacity calculation
    cout << "Total capacity of the farmland: " << farmland1->getTotalCapacity() << " units" << endl;

    // Testing getCropType() for a farmland (should output "Farmland doesn't directly have a crop type!")
    // try {
    //     cout << "Crop type in farmland: " << farmland1->getCropType() << endl;
    // } catch (const std::exception& e) {
    //     cout << e.what() << endl;
    // }

    // // Testing getSoilStateName() for a farmland (should output "Farmland doesn't have a soil state!")
    // try {
    //     cout << "Soil state of farmland: " << farmland1->getSoilStateName() << endl;
    // } catch (const std::exception& e) {
    //     cout << e.what() << endl;
    // }

    // Testing the individual CropFields for crop type and soil state
    cout << "Crop type in wheat field: " << wheatField->getCropType() << endl;
    cout << "Soil state in wheat field: " << wheatField->getSoilStateName() << endl;

    cout << "Crop type in corn field: " << cornField->getCropType() << endl;
    cout << "Soil state in corn field: " << cornField->getSoilStateName() << endl;

    // Testing the Barn's capacity
    cout << "Small barn capacity: " << smallBarn->getTotalCapacity() << endl;
    cout << "Large barn capacity: " << largeBarn->getTotalCapacity() << endl;

    // Testing adding and removing crops in a Barn
    smallBarn->storeCrop(50);
    cout << "Stored 50 units in small barn. Remaining capacity: " << smallBarn->getRemainingCapacity()  << endl;

    smallBarn->removeCrop(20);
    cout << "Removed 20 units from small barn. Remaining stored: " << smallBarn->getRemainingCapacity() << endl;

    // Clean up
    // delete farmland1;
    // delete fruitfulSoil;
}


int main(){
    std::cout<<"**********************"<<std::endl;
    std::cout<<"Testing Composite Pattern"<<std::endl;
    std::cout<<"**********************"<<std::endl;
    testComposite();
    std::cout<<"**********************"<<std::endl;
    return 0;
}