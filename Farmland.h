#include <exception>
#include <string>
using namespace std;

#ifndef __Farmland_h__
#define __Farmland_h__

// #include "Client.h"
#include "FarmUnit.h"
// #include "BreadthFirstFarmIterator.h"
// #include "DepthFirstFarmIterator.h"

class Client;
// class FarmUnit;
class BreadthFirstFarmIterator;
class DepthFirstFarmIterator;
class Farmland;

class Farmland: public FarmUnit
{
	private: FarmUnit* _farmUnits;
	public: Client* _unnamed_Client_;
	public: FarmUnit* _unnamed_FarmUnit_;
	public: BreadthFirstFarmIterator* _unnamed_BreadthFirstFarmIterator_;
	public: DepthFirstFarmIterator* _unnamed_DepthFirstFarmIterator_;

	public: FarmUnit* addUnit();

	public: FarmUnit removeUnit();

	public: int getTotalCapacity();

	public: string getCropType();

	public: string getSoilStateName();

	public: FarmIterator* createIterator(string aType);
};

#endif
