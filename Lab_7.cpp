/***
 * CSE 2010 Fall 2023
 * Lab #7
 * Daisy Sandoval
 * 12/8/23
 * 
 * It is important as programmers to know how to use templates accordingly. 
 * These templates can act as a foundation to the code we will be creating. 
 * In this lab I will have to understand the difference between implicit and 
 * explicit instantiations. Both have to do with the compiler ,but one is requesting 
 * the compiler to generate the code for a specific template (Explicit). Then we have 
 * implicit which the the compiler automatically generates the code for that specific template.
 *
 * One of the things I dont feel as confident in would be knowing when to properally use 
 * implicit and explicitt instantiations. How I would go about this would be understanding the templates
 * I will be using. I would ask myself which one would better to use one over the other and why.
 * 
*/


#include <iostream>
#include "ArrayVec.h"
#include "DisplayArr.h" 
using namespace std;
int main()
{

    // initialize arr
    const int CAPACITY = 10;
    double test_arr[CAPACITY];

    string data_type = "double";
    //initialize ArrayVec and DisplayArr
    DisplayArr<double> disp = DisplayArr<double>(data_type);
    ArrayVec<double> av = ArrayVec<double>();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}
