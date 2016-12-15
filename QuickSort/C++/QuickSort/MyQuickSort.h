//
//  MyQuickSort.h
//  QuickSort
//
//  Created by Nate Henderson on 12/14/16.
//  Copyright © 2016 Nate Henderson. All rights reserved.
//

#ifndef MyQuickSort_h
#define MyQuickSort_h

#import <vector>
std::string printArray(std::vector<int> &a);

/*
 * Main Quick Sort method, called recursively to split vector into smaller
 * vectors and sort until vector is completely sorted.
 */

void QuickSort (std::vector<int> &a, int low, int high){
    int partitionLow = low;
    int partitionHigh = high;
    int holder;
    
    int pivotPt = (low+high)/2;
    
    //Cycles through the current partition around the pivot
    while (partitionLow <= partitionHigh){
        //Increment lower index until number is less than the pivot point
        while (a[partitionLow] < a[pivotPt])
            partitionLow++;
        //Decrement the higher index until number is less than the pivot point
        while (a[partitionHigh] > a[pivotPt])
            partitionHigh--;
        //Swap higher/lower indexes, decrement/increment indexes
        if (partitionLow <= partitionHigh){
            holder = a[partitionLow];
            a[partitionLow] = a[partitionHigh];
            a[partitionHigh] = holder;
            partitionLow++;
            partitionHigh--;
        }
    }
    
    //Recursively breaks down the array and calls QuickSort
    if (low < partitionHigh)
        QuickSort(a, low, partitionHigh);
    if(partitionLow < high)
        QuickSort(a, partitionLow, high);
}

/*
 * Method formats output by appending a single string with array data.
 */

std::string printArray(std::vector<int> &a){
    
    std::string returnString;
    for (std::vector<int>::const_iterator i = a.begin(); i != a.end(); i++)
        returnString.append(std::to_string(*i));
    
    return returnString;
}


#endif /* MyQuickSort_h */
