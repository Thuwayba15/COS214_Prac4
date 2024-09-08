#include <exception>
using namespace std;

#ifndef __FarmIterator_h__
#define __FarmIterator_h__

// #include "Client.h"

class Client;
class FarmIterator;

__abstract class FarmIterator
{
	public: Client* _unnamed_Client_;

	public: virtual FarmUnit* firstFarm() = 0;

	public: virtual FarmUnit* next() = 0;

	public: virtual bool isDone() = 0;

	public: virtual FarmUnit* currentFarm() = 0;
};

#endif
