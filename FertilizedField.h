#include <exception>
using namespace std;

#ifndef __FertilizedField_h__
#define __FertilizedField_h__

#include "CropFieldDecorator.h"

// class CropFieldDecorator;
class FertilizedField;

class FertilizedField: public CropFieldDecorator
{

	public: 
		void increaseProduction();
		void harvest();
		virtual int getLeftOverCapacity();
};

#endif
