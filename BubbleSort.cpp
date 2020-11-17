#ifndef __BUBBLESORT_CPP__
#define __BUBBLESORT_CPP__

#include <list>
#include "sort.hpp"
#include "listcontainer.hpp"

class BubbleSort : public Sort {
    public:
        BubbleSort() : Sort() {}
        void sort(Container* container){
            int i, j, flag = 1;
            int temp;
            int numLength = container->size();
            for (i=1; (i <= numLength) && flag; i++){
                flag = 0;
                for (j=0; j<(numLength - 1); j++){
                    if (container->at(j+1)->evaluate() > container->at(j)->evaluate()){
                        container->swap(j, j+1);
                        flag = 1;
                    }
                }
            }
        }
};

#endif //__BUBBLESORT_CPP__