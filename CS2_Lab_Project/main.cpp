//
//  main.cpp
//  CS2_Lab_Project
//
//  Created by Kareem Elnaghy on 5/6/23.
//
#include "Quick_Sort.h"
#include "Tree_Sort.h"
#include "Comb_Sort.h"
#include "Counting_Sort.h"
#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    const int num = 10001;
    
    // ==========================QUICK SORT 1================================
    
    cout<<"Quick Sort (First element pivot) "<<endl;
    QuickSort_1 testing1(num);
//    cout<<"Unsorted Array: "<<endl;
//    testing1.print_arr();
//    cout << endl;

    chrono::steady_clock::time_point now = chrono::steady_clock::now(); //gets the start time
    testing1.Sort();
    chrono::steady_clock::time_point then = chrono::steady_clock::now();    //gets the end time

//    cout<<"Sorted Array: "<<endl;
//    testing1.print_arr();
//    cout << endl;
    cout<<"Time taken: "<<chrono::duration_cast<chrono::nanoseconds>(then-now).count()<<endl; // calculates the time taken by subtracting end from start in nanoseconds and outputs
      
    
    cout << "Comparisons: " << testing1.Get_count() << endl; //outputs number of comparisons
    cout << "Swaps: " << testing1.get_Swaps() << endl; //outputs number of swapss

    
    // ==========================QUICK SORT 2================================
    cout<<endl<<"Quick Sort (Random element pivot) "<<endl;
    QuickSort_1 testing2(num);
//    cout<<"Unsorted Array: "<<endl;
//    testing2.print_arr();
//    cout << endl;

    chrono::steady_clock::time_point now2 = chrono::steady_clock::now(); //gets the start time
    testing2.Sort();
    chrono::steady_clock::time_point then2 = chrono::steady_clock::now();    //gets the end time

//    cout<<"Sorted Array: "<<endl;
//    testing2.print_arr();
//    cout << endl;
    cout<<"Time taken: "<<chrono::duration_cast<chrono::nanoseconds>(then2-now2).count()<<endl; // calculates the time taken by subtracting end from start in nanoseconds and outputs
      
    
    cout << "Comparisons: " << testing2.Get_count() << endl; //outputs number of comparisons
    cout << "Swaps: " << testing2.get_Swaps() << endl; //outputs number of swapss

    // ==========================TREE SORT================================
    
    cout<<endl<<"Tree Sort "<<endl;
    Tree testing3(num);
//    cout<<"Unsorted Array: "<<endl;
//    testing3.print_arr();
//    cout << endl;
    
    chrono::steady_clock::time_point now3 = chrono::steady_clock::now(); //gets the start time
    testing3.Sort();
    chrono::steady_clock::time_point then3 = chrono::steady_clock::now();    //gets the end time

//    cout<<"Sorted Array: "<<endl;
//    testing3.print_arr();
//    cout << endl;
    cout<<"Time taken: "<<chrono::duration_cast<chrono::nanoseconds>(then3-now3).count()<<endl; // calculates the time taken by subtracting end from start in nanoseconds and outputs
      
    
    cout << "Comparisons: " << testing3.Get_count() << endl; //outputs number of comparisons
    cout << "Swaps: " << testing3.get_Swaps() << endl; //outputs number of swapss
    
    
    // ==========================COMB SORT================================
    
    cout<<endl<<"Comb Sort "<<endl;
    Comb testing4(num);
//    cout<<"Unsorted Array: "<<endl;
//    testing4.print_arr();
//    cout << endl;

    chrono::steady_clock::time_point now4 = chrono::steady_clock::now(); //gets the start time
    testing4.Sort();
    chrono::steady_clock::time_point then4 = chrono::steady_clock::now();    //gets the end time

//    cout<<"Sorted Array: "<<endl;
//    testing4.print_arr();
//    cout << endl;
    cout<<"Time taken: "<<chrono::duration_cast<chrono::nanoseconds>(then4-now4).count()<<endl; // calculates the time taken by subtracting end from start in nanoseconds and outputs
      

    cout << "Comparisons: " << testing4.Get_count() << endl; //outputs number of comparisons
    cout << "Swaps: " << testing4.get_Swaps() << endl; //outputs number of swapss
    
    // ==========================COUNTING SORT================================
    
    cout<<endl<<"Counting Sort "<<endl; //Duplicates
    

    Counting testing5(num);
//    cout<<"Unsorted Array: "<<endl;
//    testing5.print_arr();
//    cout << endl;

    chrono::steady_clock::time_point now5 = chrono::steady_clock::now(); //gets the start time
    testing5.Sort();
    chrono::steady_clock::time_point then5 = chrono::steady_clock::now();    //gets the end time

//    cout<<"Sorted Array: "<<endl;
//    testing5.print_arr();
//    cout << endl;
    cout<<"Time taken: "<<chrono::duration_cast<chrono::nanoseconds>(then5-now5).count()<<endl; // calculates the time taken by subtracting end from start in nanoseconds and outputs
      
    
    cout << "Comparisons: " << testing5.Get_count() << endl; //outputs number of comparisons
    cout << "Swaps: " << testing5.get_Swaps() << endl; //outputs number of swapss

    
}
