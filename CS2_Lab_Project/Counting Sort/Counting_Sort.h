//Counting_Sort.h

#ifndef couting_radix_h
#define couting_radix_h
#include "SortingAlgorithms.h"

class Counting: public Sort_Algorithm
{
private:
    int range;
public:
    Counting(int);   //arguementative constructor
    void Sort();
    int getMax()const;
    int getMin()const;

};



#endif /* couting_radix_h */
