#ifndef __LISTCONTAINER_H__
#define __LISTCONTAINER_H__

#include "container.h";
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <cmath>
using namespace std;

class ListContainer : public Container
{
	protected:
		list<Base*> baseList;
		Base* child;
	public:
		ListContainer(): child(NULL) {}
		ListContainer(Sort* newList): child(NULL)
		{
			sort_function = newList;
		}
		void sort()
		{
			sort_function->sort(this);
		}
		void add_element(Base* newElement)
		{
			baseList.push_back(newElement);
		}
		void print()
		{
			list<Base*>::iterator it;
			for(it = baseList.begin(); it != baseList.end(); ++it)
			{
				Base* temp = *it;
				cout << temp->evaluate() << endl;
			}
		}
		void swap(int first, int second)
		{
			list<Base*>::iterator it;
			int counter = 0;
			int counter2 = 0;
			Base* firstElement;
			Base* secondElement;
			for(it = baseList.begin(); it != baseList.end(); ++counter, ++counter2, ++it)
			{
				if(counter == first)
				{
					firstElement = *it;
				}
				if(counter2 == second)
				{
					secondElement = *it;
				}
			}
			for(counter = 0, counter2 = 0, it = baseList.begin(); it != baseList.end(); ++counter, ++counter2, ++it)
			{
				if(counter == first)
				{
					*it = secondElement;
				}
				if(counter2 == second)
				{
					*it = firstElement;
				}
			}
		}
		Base* at(int i)
		{
			list<Base*>::iterator it;
			int counter = 0;
			for(it = baseList.begin(); it != baseList.end(); ++it, ++counter)
			{
				if(counter == i)
				{
					return *it;
				}
			}
			return *it;
		}
		int size()
		{
			return baseList.size();
		}
};
#endif
