#include "sub.h"

using namespace std;

Sub::Sub(Base* left, Base* right){
	this->left = left;
	this->right = right;
}

double Sub::evaluate(){
	return left->evaluate() - right->evaluate();
}
