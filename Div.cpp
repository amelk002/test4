#include "Div.h"

using namespace std;

Div::Div(Base* left, Base* right){
	this->left = left;
	this->right = right;
}
double Div::evaluate(){
	return left->evaluate() / right->evaluate();
}
