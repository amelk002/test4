#ifndef __ABSOLUTE_H__
#define __ABSOLUTE_H__

#include "component.h";
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <cmath>

using namespace std;

class Absolute: public Base
{
	protected:
		Base* child;
	public:
		Absolute(): child(NULL) {}
		Absolute(Base* number): child(number) {}
		double evaluate()
		{
			return fabs(child->evaluate());
		}
};

#endif
