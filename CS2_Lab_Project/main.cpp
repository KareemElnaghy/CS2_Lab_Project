//
//  main.cpp
//  CS2_Lab_Project
//
//  Created by Kareem Elnaghy on 5/6/23.
//
#include "Quick_Sort.h"
#include <iostream>
using namespace std;

int main()
{
    int num = 11;
    
    cout<<endl<<"Quick Sort (First element pivot) "<<endl;
    QuickSort_1 testing(num);
    cout<<"Unsorted Array: "<<endl;
    testing.print_arr();
    cout << endl;
    testing.Sort();
    cout<<"Unsorted Array: "<<endl;
    testing.print_arr();
    cout << endl;
    cout << "Comparisons: " << testing.Get_count() << endl;
    
    cout<<endl<<"Quick Sort (Random element pivot) "<<endl;
    QuickSort_2 testing2(num);
    cout<<"Unsorted Array: "<<endl;
    testing2.print_arr();
    cout << endl;
    testing2.Sort();
    cout<<"Unsorted Array: "<<endl;
    testing2.print_arr();
    cout << endl;
    cout << "Comparisons: " << testing2.Get_count() << endl;
}
