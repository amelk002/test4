#ifndef MULTI_H
#define MULTI_H
#include "composite.h"
using namespace std;

class Mult : public composite{
	public:
		Mult(Base* left, Base* Right);
		double evaluate();
};
#endif
