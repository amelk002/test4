#ifndef __CEILING_H__
#define __CEILING_H__

#include "component.h";
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <cmath>

using namespace std;
class Ceiling: public Base
{
	protected:
		Base* child;
	public:
		Ceiling(): child(NULL) {}
		Ceiling(Base* number): child(number) {}
		double evaluate()
		{
			return ceil(child->evaluate());
		}
};
#endif
