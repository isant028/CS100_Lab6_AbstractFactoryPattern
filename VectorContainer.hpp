#ifndef ____VECTORCONTAINER_H___
#define ____VECTORCONTAINER_H___
#include <iostream>
#include <cstring>
#include <vector>
#include "base.h"
#include "Container.h"

using namespace std;

class VectorContainer : public Container {
    protected:
        vector <Base*> vector;

    public:
        VectorContainer() : Container() {};
        VectorContainer(Sort* sort) : Container(sort) {}; 

        void add_element(Base* element) {
            vector.push_back(element);
        };

        void print() {
            vector <Base*> printVector = vector;
            for (int i = 0; i < printVector.size(); ++i) {
                cout << printVector[i] -> evaluate() << endl;
            }
        };

        Base* at(int i) {
           return vector[i];
        };

        int size() {
            return vector.size();
        };
  	void swap(int i, int j) {
            Base* temp = vector[i];
            vector[i] = vector[j];
            vector[j] = temp;
        };

        void sort() {
            if (sort_function == NULL) {
                throw "No sort specified\n";
                return;
            }

            sort_function -> sort(this);
             };

};

#endif //____VECTORCONTAINER_H___

