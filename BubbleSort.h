#ifndef __BUBBLESORT_H__
#define __BUBBLESORT_H__

#include "container.h";
#include "strategy.h";
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <cmath>

using namespace std;


class BubbleSort : public Sort
{
	protected:
		Container* child;
		vector<Base*> baseVector;
	public:
		BubbleSort(): child(NULL) {}
		BubbleSort(Container* temp): child(temp) {}
		void sort(Container* temp)
		{
			child = temp;
			for( int i = 0; i < temp->size(); ++i)
			{
				for(int j = 0; j < temp->size(); ++j)
				{
					if(j != temp->size() - 1)
					{
						if(temp->at(j)->evaluate() > temp->at(j + 1)->evaluate())
						{
							temp->swap(j, j+1);
						}
					}
				}
			}
		}
};
#endif
