#include <exception>
using namespace std;

#ifndef __BreadthFirstFarmIterator_h__
#define __BreadthFirstFarmIterator_h__

// #include "Farmland.h"
#include "FarmIterator.h"

class Farmland;
// class FarmIterator;
class BreadthFirstFarmIterator;

class BreadthFirstFarmIterator: public FarmIterator
{
	public: Farmland* _unnamed_Farmland_;

	public: virtual FarmUnit* firstFarm();

	public: virtual FarmUnit* next();

	public: virtual bool isDone();

	public: virtual FarmUnit* currentFarm();
};

#endif
