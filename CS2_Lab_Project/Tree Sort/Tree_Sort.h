// Tree_Sort.h

#ifndef Tree_Sort_h
#define Tree_Sort_h
#include "SortingAlgorithms.h"
class BinaryST
{
public:
    int info;   //stores the value
    BinaryST *left; //pointer to left leaf
    BinaryST *right;//pointer to right leaf
    static int counter;//static counter to keep track of the comparisons made when inserting the values into the BST

    BinaryST(); //Default constructor needed when creating the tree object
    BinaryST(int);  //parameterized constructor
    BinaryST* insertValue(BinaryST*, int);    //Insert function
};

class Tree: public BinaryST, public Sort_Algorithm //tree sort class inherits from both sorting and the BST classes
{
private:
    BinaryST* root;
public:
    Tree(int);
    void Sort();
    void inOrderTrav(BinaryST*, int &);
};

#endif /* Tree_Sort_h */
