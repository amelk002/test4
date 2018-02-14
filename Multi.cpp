#include "Multi.h"

using namespace std;

Mult::Mult(Base* left, Base* right){
	this->left = left;
	this->right = right;
}
double Mult::evaluate(){
	return left->evaluate() * right->evaluate();
}
