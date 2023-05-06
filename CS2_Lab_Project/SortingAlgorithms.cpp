
#include "SortingAlgorithms.h"
#include<iostream>

Sort_Algorithm::Sort_Algorithm(int y) : size(y), compare(0)
{
    arr = new int[size];
	Fill();
}

Sort_Algorithm::~Sort_Algorithm()
{
	delete[] arr;
}

void Sort_Algorithm::print_arr() const
{
    for (int i = 0; i < size; i++)
        std::cout << *(arr+i) << " ";
}

int Sort_Algorithm::Get_count() const
{
    return compare;
}


void Sort_Algorithm::Fill()
{
    srand(time(NULL));
    for (int i = 0; i < size; i++) // loop that fills the array with the required data elements (numbers from 1-num)
    {
        *(arr + i) = i;
    }
    for (int i = 2; i < size; i++) // loop that shuffles the content of the array randomly
    {
        int j = (rand() % i) + 1;
        Swap(*(arr+i), *(arr+j));
    }
}

void Sort_Algorithm::Swap(int& x, int& y)
{
    {
        int temp = x;
        x = y;
        y = temp;
    }
}


