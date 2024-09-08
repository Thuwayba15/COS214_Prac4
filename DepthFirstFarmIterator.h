#include <exception>
using namespace std;

#ifndef __DepthFirstFarmIterator_h__
#define __DepthFirstFarmIterator_h__

// #include "Farmland.h"
#include "FarmIterator.h"

class Farmland;
// class FarmIterator;
class DepthFirstFarmIterator;

class DepthFirstFarmIterator: public FarmIterator
{
	public: 
		// Farmland* _unnamed_Farmland_;
		virtual FarmUnit* firstFarm();
		virtual FarmUnit* next();
		virtual bool isDone();
		virtual FarmUnit* currentFarm();
};

#endif
