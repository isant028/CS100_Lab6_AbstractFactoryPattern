#ifndef __SELECTIONSORT_CPP__
#define __SELECTIONSORT_CPP__

#include <list>
#include "sort.hpp"
#include "listcontainer.hpp"
#include "VectorContainer.hpp"
class SelectionSort : public Sort {
    public:
        SelectionSort() : Sort() {}
        void sort(Container* container){
            int i, j, first;
            int temp;
            int numLength = container->size();
            for (i = numLength - 1; i > 0; i--){
                first = 0;
                for (j=1; j<=i; j++){
                    if (container->at(j)->evaluate() > container->at(first)->evaluate()){
                        first = j;
                    }
                }
                container->swap(i, first);
            }
        }
};

#endif //__SELECTIONSORT_CPP__
