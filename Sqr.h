#ifndef SQR_H
#define SQR_H

#include "composite.h"
using namespace std;

class Sqr : public composite{
	public:
		Sqr(Base* left);
		double evaluate();
};
#endif
