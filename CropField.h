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
	private: string _cropType;
	private: int _totalCapacity;
	private: int _currentAmount;
	private: SoilState* _soilState;
	public: CropFieldDecorator* _unnamed_CropFieldDecorator_;
	public: SoilState* _unnamed_SoilState_;

	public: int getTotalCapacity();

	public: string getCropType();

	public: string getSoilStateName();

	public: int harvestCrops();

	public: void rain();

	public: void setSoilState(SoilState* aNewState);

	public: void buyTruck(Truck* aNewTruck);

	public: void sellTruck(Truck* aTruck);
};

#endif
