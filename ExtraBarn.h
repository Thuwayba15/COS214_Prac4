#include <exception>
using namespace std;

#ifndef __ExtraBarn_h__
#define __ExtraBarn_h__

#include "CropFieldDecorator.h"

// class CropFieldDecorator;
class ExtraBarn;

class ExtraBarn: public CropFieldDecorator
{
	private:
		string extraBarnCapacity;

	public: 
		void harvest();
		int getLeftOverCapacity();
		virtual void increaseProduction();
		ExtraBarn();
};

#endif
