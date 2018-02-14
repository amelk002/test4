#ifndef OP_H
#define OP_H
#include "component.h"

using namespace std;

class Op : public Base{
	public:
		Op(double op);
		double evaluate();
	private:
		double op;
};

#endif
