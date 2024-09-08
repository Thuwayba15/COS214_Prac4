#include <exception>
using namespace std;

#ifndef __CropFieldDecorator_h__
#define __CropFieldDecorator_h__

#include "CropField.h"

// class CropField;
class CropFieldDecorator;

class CropFieldDecorator: public CropField
{
	private: 
		CropField* decoratedField;

	public: 
		// CropField* _unnamed_CropField_;
		virtual void increaseProduction() = 0;
		virtual void harvest() = 0;
		virtual int getLeftOverCapacity() = 0;
};

#endif
