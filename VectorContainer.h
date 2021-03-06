#ifndef __VECTORCONTAINER_H__
#define __VECTORCONTAINER_H__

#include  	"container.h";
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <cmath>
using namespace std;


class VectorContainer : public Container
{
	protected:
		vector<Base*> vector1;
		Base* child;
	public:
		vectorContainer(): child(NULL) {}
		vectorContainer(Sort* vectors): child(NULL)
		{
			sort_function = vectors;
		}
		void sort()
		{
			sort_function->sort(this);
		}
		void add_element(Base* newElement)
		{
			vector1.push_back(newElement);
		}
		void print()
		{
			for(unsigned int i = 0; i < vector1.size(); ++i)
			{
				cout << vector1.at(i)->evaluate() << endl;
			}
		}
		void swap(int first, int second)
		{
			Base* tempVal  = vector1.at(first);
			vector1.at(first) = vector1.at(second);
			vector1.at(second) = tempVal;
		}
		Base* at(int i)
		{
			return vector1.at(i);
		}
		int size()
		{
			return vector1.size();
		}
};
#endif
