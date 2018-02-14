#ifndef DIV_H
#define DIV_H
#include "composite.h"
using namespace std;

class Div : public composite {
	public:
		Div(Base* left, Base* right);
		double evaluate();
};
#endif
