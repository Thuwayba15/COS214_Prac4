#include <exception>
using namespace std;

#ifndef __DeliveryTruck_h__
#define __DeliveryTruck_h__

#include "Truck.h"

// class Truck;
class DeliveryTruck;

class DeliveryTruck: public Truck
{

	public: void update(CropField* aCropField);

	public: void startEngine();

	public: void callTruck();
};

#endif
