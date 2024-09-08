#include <exception>
using namespace std;

#ifndef __FertilizerTruck_h__
#define __FertilizerTruck_h__

#include "Truck.h"

// class Truck;
class FertilizerTruck;

class FertilizerTruck: public Truck
{

	public: 
		void update(CropField* aCropField);
		void startEngine();
		void callTruck();
};

#endif
