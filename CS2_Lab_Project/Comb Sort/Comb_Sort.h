// Comb_Sort.h


#ifndef Comb_Sort_h
#define Comb_Sort_h
#include "SortingAlgorithms.h"

class Comb:public Sort_Algorithm
{
public:
    Comb(int);
    void Sort();
    int nextGap(int);
};





#endif /* Comb_Sort_h */
