#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Farmland_h__
#define __Farmland_h__

// #include "Client.h"
#include "FarmUnit.h"
// #include "BreadthFirstFarmIterator.h"
// #include "DepthFirstFarmIterator.h"
#include "FarmIterator.h"

// class Client;
// // class FarmUnit;
// class BreadthFirstFarmIterator;
// class DepthFirstFarmIterator;
// class Farmland;

class Farmland: public FarmUnit
{
	private: 
		std::vector<FarmUnit*> farmUnits; 
    	std::string name;

	// public: Client* unnamed_Client_;
	// public: FarmUnit* unnamed_FarmUnit_;
	// public: BreadthFirstFarmIterator* unnamed_BreadthFirstFarmIterator_;
	// public: DepthFirstFarmIterator* unnamed_DepthFirstFarmIterator_;

	public: 
		Farmland(const std::string& name);
		~Farmland();
		 FarmUnit* addUnit(FarmUnit* unit);
    	FarmUnit* removeUnit(FarmUnit* unit);
		int getTotalCapacity();
		string getCropType();
		string getSoilStateName();
		FarmIterator* createIterator(string type);
};

#endif
