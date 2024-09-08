#include <exception>
#include <string>
using namespace std;

#ifndef __CropField_h__
#define __CropField_h__

// #include "CropFieldDecorator.h"
// #include "SoilState.h"
#include "FarmUnit.h"

// class CropFieldDecorator;
class SoilState;
// class FarmUnit;
class CropField;

class CropField: public FarmUnit
{
	private: 
		std::string cropType;
		int totalCapacity;
		int currentAmount;
		SoilState* soilState;
	// public: CropFieldDecorator* _unnamed_CropFieldDecorator_;
	// public: SoilState* _unnamed_SoilState_;

	public: 
		CropField(const std::string& type, int capacity, SoilState* state);
		~CropField();
		int getTotalCapacity();
		std::string getCropType();
		std::string getSoilStateName();
		int harvestCrops();
		void rain();
		void setSoilState(SoilState* newState);
		void buyTruck(Truck* newTruck);
		void sellTruck(Truck* truck);
};

#endif
