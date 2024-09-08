#include <exception>
using namespace std;

#ifndef __Truck_h__
#define __Truck_h__

// #include "FarmUnit.h"

class FarmUnit;
class Truck;

__abstract class Truck
{
	private: string _truckID;
	public: FarmUnit* _unnamed_FarmUnit_;

	public: virtual void update(CropField* aCropField) = 0;

	public: virtual void startEngine() = 0;

	public: virtual void callTruck() = 0;

	public: Truck();
};

#endif
