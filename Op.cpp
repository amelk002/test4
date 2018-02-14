#include "Op.h"

using namespace std;


Op::Op(double op){
	this->op = op;
}

double Op::evaluate(){
	return op;
}
