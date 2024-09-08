#include <exception>
using namespace std;

#ifndef __ExtraBarn_h__
#define __ExtraBarn_h__

#include "CropFieldDecorator.h"

// class CropFieldDecorator;
class ExtraBarn;

class ExtraBarn: public CropFieldDecorator
{
	private: string _extraBarnCapacity;

	public: void harvest();

	public: void getLeftOverCapacity();

	public: virtual void increaseProduction();

	public: ExtraBarn();
};

#endif
