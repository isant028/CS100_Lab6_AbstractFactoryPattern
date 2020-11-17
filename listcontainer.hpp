#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include<iostream>
#include<cstring>
#include<list>
#include<iterator>

#include "base.hpp"
#include "container.hpp"

using namespace std;

class ListContainer : public Container {
	protected:
		list<Base*> mylist;
	public:
		void add_element(Base*);
		void print();
		void sort();
		Base* at(int);
		void swap(int, int);
		int size();
};

#endif //__LISTCONTAINER_HPP__
