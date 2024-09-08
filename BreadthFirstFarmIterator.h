#include <exception>
using namespace std;

#ifndef __BreadthFirstFarmIterator_h__
#define __BreadthFirstFarmIterator_h__

// #include "Farmland.h"
#include "FarmIterator.h"
#include "Farmland.h"
#include "FarmUnit.h"

class Farmland;
// class FarmIterator;
class BreadthFirstFarmIterator;

class BreadthFirstFarmIterator: public FarmIterator
{
	public: 
		// Farmland* _unnamed_Farmland_;
		virtual FarmUnit* firstFarm();
		virtual FarmUnit* next();
		virtual bool isDone();
		virtual FarmUnit* currentFarm();
};

#endif
