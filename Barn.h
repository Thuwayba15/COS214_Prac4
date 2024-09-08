#include <exception>
#include <string>
using namespace std;

#ifndef __Barn_h__
#define __Barn_h__

#include "FarmUnit.h"

// class FarmUnit;
class Barn;

class Barn: public FarmUnit
{
	private: 
		int storageCapacity;
		int currentAmount;
		string barnType;
		string barnLocation;

	public: 
		Barn(int capacity);
		int getTotalCapacity();
		void storeCrop();
		void removeCrop();
		void isFull();
		// virtual string getCropType();
		// virtual string getSoilStateName();
};

#endif
