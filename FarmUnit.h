#include <exception>
#include <string>
using namespace std;

#ifndef __FarmUnit_h__
#define __FarmUnit_h__

// #include "Farmland.h"
// #include "Truck.h"

// class Farmland;
class Truck;
class FarmUnit;

__abstract class FarmUnit
{
	private: string _farmName;
	private: Truck* _observerList;
	public: Farmland* _unnamed_Farmland_;
	public: Truck* _unnamed_Truck_;

	public: virtual int getTotalCapacity() = 0;

	public: virtual string getCropType() = 0;

	public: virtual string getSoilStateName() = 0;

	public: void attach(Truck* aTruck);

	public: void detach(Truck* aTruck);

	public: void notify();

	public: FarmUnit();
};

#endif
