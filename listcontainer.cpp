#ifndef __LISTCONTAINER_CPP__
#define __LISTCONTAINER_CPP__

#include <list>
#include <iterator>
#include "base.hpp"
#include "container.hpp"
#include <iostream>
#include "listcontainer.hpp"

using namespace std; 


ListContainer::ListContainer(){}
ListContainer::ListContainer(Sort* sort) : Container(sort) {}
		
void ListContainer::add_element(Base* element){
	mylist.push_back(element);
}
		
void ListContainer::print(){
	list<Base*> printList = mylist;
	for (int i = 0; i < printList.size(); ++i){
		cout << printList.front()->evaluate() << endl;
		printList.pop_front();
	}
}
		
Base* ListContainer::at(int i){
	if (mylist.size() > i){
		list<Base*>::iterator it = mylist.begin();
		std::advance(it, i);
		return *it;
	}
}
		
		int ListContainer::size(){
			return mylist.size();
		}
		
void ListContainer::swap(int i, int j){
	if (mylist.size() > i && mylist.size() > j){
		list<Base*>::iterator it = mylist.begin();
		list<Base*>::iterator it1 = mylist.begin();
		std::advance(it, i);
		std::advance(it1, j);
			
		Base* temp3 = *it;
		*it = *it1;
		*it1 = temp3;
	}
}
		
void ListContainer::sort(){
	if (thisSortFunction == NULL){
		throw "No sort specified\n";
		return;
	}
			
	else if (thisSortFunction = new SelectionSort()){
		thisSortFunction->sort(this);
	}
	else if (thisSortFunction = new BubbleSort()){
		thisSortFunction->sort(this);
	}
}

void ListContainer::set_sort_function(Sort* sort_function){
	thisSortFunction = sort_function;
}


#endif //__LISTCONTAINER_CPP__