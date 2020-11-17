#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include<iostream>
#include<cstring>
#include<list>
#include<iterator>

#include "base.hpp"
#include "container.hpp"
#include "sort.hpp"
#include "SelectionSort.cpp"
#include "BubbleSort.cpp"

using namespace std;

class ListContainer : public Container {
	protected:
		list<Base*> mylist;
		Sort* thisSortFunction;

	public:
		ListContainer();
		ListContainer(Sort*);
		void add_element(Base*);
		void print();
		void sort();
		Base* at(int);
		void swap(int, int);
		int size();
		void set_sort_function(Sort*);
};

#endif //__LISTCONTAINER_HPP__
