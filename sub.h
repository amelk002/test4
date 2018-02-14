#ifndef __SUBTRACT_H__
#define __SUBTRACT_H__

#include "composite.h"

class Sub : public composite {
	public:
		Sub(Base* left, Base* right);
		double evaluate();
};
#endif
