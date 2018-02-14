#include "Sqr.h"
using namespace std;

Sqr::Sqr(Base* left){
	this->left = left;
}
double Sqr::evaluate(){
	return(left->evaluate()) * (left->evaluate());
}
