#ifndef __ADD_H__
#define __ADD_H__

#include "composite.h"

class Add : public composite{
	public:
		Add(Base* left, Base* right);
		double evaluate();
};
#endif
