#ifndef ____VECTORCONTAINER_HPP__
#define ____VECTORCONTAINER_HPP__
#include <iostream>
#include <cstring>
#include <vector>
#include "base.hpp"
#include "container.hpp"
#include "sort.hpp" 

using namespace std;

class VectorContainer : public Container {
    protected:
        vector <Base*> vec;
	Sort* thisSortFunction; 

    public:
        VectorContainer() : Container() {};
        VectorContainer(Sort* sort) : Container(sort) {}; 
        void add_element(Base* element) {
            vec.push_back(element);
        };

        void print() {
            vector <Base*> printVector = vec;
            for (int i = 0; i < printVector.size(); ++i) {
                cout << printVector[i] -> evaluate() << endl;
            }
        };

        Base* at(int i) {
           return vec[i];
        };

        int size() {
            return vec.size();
        };
  	void swap(int i, int j) {
            Base* temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
        };

        void sort() {
            if (thisSortFunction == NULL){
		throw "No sort specified\n";
		return;
	}
			
	else if (thisSortFunction = new SelectionSort()){
		thisSortFunction->sort(this);
	}
	else if (thisSortFunction = new BubbleSort()){
		thisSortFunction->sort(this);
	}           };
	void set_sort_function(Sort* sort_function){	
	thisSortFunction = sort_function;}; 
};

#endif //____VECTORCONTAINER_HPP__

