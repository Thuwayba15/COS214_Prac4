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

#include <string>


class FarmUnit
{
	private: 
		string farmName;
		Truck* observerList;

	public: 
		// Farmland* unnamed_Farmland;
		// Truck* unnamed_Truck;

	public: 
		virtual int getTotalCapacity() = 0;
		virtual string getCropType() = 0;
		virtual string getSoilStateName() = 0;
		void attach(Truck* truck);
		void detach(Truck* truck);
		void notify();
		virtual ~FarmUnit(){};

	// FarmUnit();
};

#endif
