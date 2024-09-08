#include <exception>
#include <string>
using namespace std;

#ifndef __FloodedSoil_h__
#define __FloodedSoil_h__

// #include "DrySoil.h"

class DrySoil;
class FloodedSoil;

class FloodedSoil
{
	public: DrySoil* _unnamed_DrySoil_;

	public: int harvestCrops(CropField* aCropField);

	public: void rain(CropField* aCropField);

	public: string getName();
};

#endif
