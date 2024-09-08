#include <exception>
#include <string>
using namespace std;

#ifndef __DrySoil_h__
#define __DrySoil_h__

// #include "FloodedSoil.h"

class FloodedSoil;
class DrySoil;

class DrySoil
{
	public: FloodedSoil* _unnamed_FloodedSoil_;

	public: int harvestCrops(CropField* aCropField);

	public: void rain(CropField* aCropField);

	public: string getName();
};

#endif
