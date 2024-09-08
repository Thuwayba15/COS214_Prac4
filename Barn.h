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
	private: int _storageCapacity;
	private: int _currentAmount;
	private: string _barnType;
	private: string _barnLocation;

	public: int getTotalCapacity();

	public: void storeCrop();

	public: void removeCrop();

	public: void isFull();

	public: virtual string getCropType();

	public: virtual string getSoilStateName();
};

#endif
