#ifndef __FLOOR_H__
#define __FLOOR_H__

#include "component.h";
#include "component.h";
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <cmath>

using namespace std;

class Floor: public Base
{
	protected:
		Base* child;
	public:
		Floor(): child(NULL) {}
		Floor(Base* number): child(number) {}
		double evaluate()
		{
			return floor(child->evaluate());
		}
};

#endif
