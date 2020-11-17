#include <list>
#include <iterator>
#include "base.hpp"
#include "container.hpp"
#include <iostream>

using namespace std; 

class ListContainer : public Container {
	protected:
		list <Base*> mylist;

	public:
		ListContainer() : Container() {}
		ListContainer(Sort* sort) : Container(sort) {}
		
		void add_element(Base* element){
			mylist.push_back(element);
		}
		
		void print(){
			list<Base*> printList = mylist;
			for (int i = 0; i < printList.size(); ++i){
				cout << printList.front()->evaluate() << endl;
				printList.pop_front();
			}
		}
		
		Base* at(int i){
			if (mylist.size() > i){
				list<Base*>::iterator it = mylist.begin();
				std::advance(it, i);
				return *it;
			}
		}
		
		int size(){
			return mylist.size();
		}
		
		void swap(int i, int j){
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
		
		void sort(){
			if (sort_function == NULL){
				throw "No sort specified\n";
				return;
			}
		}
};