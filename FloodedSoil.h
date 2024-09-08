#include <exception>
#include <string>
using namespace std;

#ifndef __FloodedSoil_h__
#define __FloodedSoil_h__

// #include "DrySoil.h"
#include "CropField.h"

class DrySoil;
class FloodedSoil;

class FloodedSoil
{
	public: 
		DrySoil* _unnamed_DrySoil_;
		int harvestCrops(CropField* cropField);
		void rain(CropField* cropField);
		string getName();
};

#endif
