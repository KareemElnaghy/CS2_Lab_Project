//
//  main.cpp
//  CS2_Lab_Project
//
//  Created by Kareem Elnaghy on 5/6/23.
//
#include "Quick_Sort.h"
#include "Tree_Sort.h"
#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    int num = 1000;
    
    // ==========================QUICK SORT================================
    
    cout<<endl<<"Quick Sort (First element pivot) "<<endl;
    QuickSort_1 testing(num);
//    cout<<"Unsorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
    
    auto start = chrono::high_resolution_clock::now();  //gets the start time
    testing.Sort();
    auto end = chrono::high_resolution_clock::now();    //gets the end time
    
//    cout<<"Sorted Array: "<<endl;
//    testing.print_arr();
//    cout << endl;
    cout << "Comparisons: " << testing.Get_count() << endl; //outputs number of comparisons
    cout << "Swaps: " << testing.get_Swaps() << endl; //outputs number of swapss
    
    auto duration = duration_cast<chrono::microseconds>(end - start); // calculates the time taken by subtracting end from start in microseconds
       cout << "Time taken: " << duration.count() << " microseconds" << endl; // print time taken in microseconds
    
    int memory_used = sizeof(testing) + sizeof(*testing.getArr()) * testing.getSize();
    cout << "Memory used: " << memory_used << " bytes" << endl;
    
    
    
    
    // ==========================TREE SORT================================
    


}
