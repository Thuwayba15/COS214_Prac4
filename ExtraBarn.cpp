#include <exception>
using namespace std;

#include "ExtraBarn.h"
#include "CropFieldDecorator.h"

void ExtraBarn::harvest() {
	throw "Not yet implemented";
}

void ExtraBarn::getLeftOverCapacity() {
	throw "Not yet implemented";
}

void ExtraBarn::increaseProduction() {
	throw "Not yet implemented";
}

ExtraBarn::ExtraBarn() {
	_extraBarnCapacity = int;
}

