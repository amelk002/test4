#ifndef __SELECTIONSORT_H__
#define __SELECTIONSORT_H__

#include "container.h";
#include "strategy.h";
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <cmath>

using namespace std;


class SelectionSort : public Sort
{
	protected:
		Container* child;
	public:
		SelectionSort(): child(NULL) {}
		SelectionSort(Container* temp): child(temp) {}
		void sort(Container* temp)
		{
			child = temp;
			int first, in, out;
			for(out = 0; out < temp->size(); ++out)
			{
				first = 0;
				for(in = 1; in <= out; ++in)
				{
					if(temp->at(in)->evaluate() > temp->at(first)->evaluate())
					{
						first = in;
					}
				}
				temp->swap(first, out);
			}
		}
};
#endif
