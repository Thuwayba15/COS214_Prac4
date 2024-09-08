#include <exception>
using namespace std;

#ifndef __CropFieldDecorator_h__
#define __CropFieldDecorator_h__

#include "CropField.h"

// class CropField;
class CropFieldDecorator;

__abstract class CropFieldDecorator: public CropField
{
	private: CropField* _decoratedField;
	public: CropField* _unnamed_CropField_;

	public: virtual void increaseProduction() = 0;

	public: virtual void harvest() = 0;

	public: virtual int getLeftOverCapacity() = 0;
};

#endif
