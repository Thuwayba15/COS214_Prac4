#include <exception>
#include <string>
using namespace std;

#ifndef __DrySoil_h__
#define __DrySoil_h__

// #include "FloodedSoil.h"
#include "CropField.h"

class FloodedSoil;
class DrySoil;

class DrySoil
{
	public: 
		// FloodedSoil* _unnamed_FloodedSoil_;
		int harvestCrops(CropField* cropField);
		void rain(CropField* cropField);
		string getName();
};

#endif
