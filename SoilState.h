#include <exception>
#include <string>
using namespace std;

#ifndef __SoilState_h__
#define __SoilState_h__

// #include "CropField.h"

class CropField;
class SoilState;

__abstract class SoilState
{
	public: CropField* _unnamed_CropField_;

	public: virtual int harvestCrops(CropField* aCropField) = 0;

	public: virtual void rain(CropField* aCropField) = 0;

	public: virtual string getName() = 0;
};

#endif
