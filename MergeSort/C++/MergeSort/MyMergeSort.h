//
//  MyMergeSort.h
//  MergeSort
//
//  Created by Nate Henderson on 8/3/16.
//  Copyright © 2016 Nate Henderson. All rights reserved.
//

#ifndef MyMergeSort_h
#define MyMergeSort_h

#include <vector>

void MergeSort(std::vector<int> &a);
void MergeSort(std::vector<int> &a, int begin, int end, std::vector<int> tempArray);
void Order(std::vector<int> &a, int begin, int middle, int end, std::vector<int>&tempArray);
std::string printArray(std::vector<int> &a);


/*
 * Initial method that handles prepwork prior to executing the MergeSort algorithm.
 */
void MergeSort(std::vector<int> &a)
{
    //Copies original array to temp array
    std::vector<int> tempArray(a.size()); //= a;
   
    //Static cast clears "implicit conversion loses precision" warning
    int length = (static_cast<int>(tempArray.size()));
    
    //Pass original array, starting index, ending index, and temp array to begin sort
    MergeSort(a, 0, length-1, tempArray);
}


/*
 * Splits the array into smaller arrays, the calls the order function when the arrays 
 * are at their smallest.
 */
void MergeSort(std::vector<int> &a, int begin, int end, std::vector<int> tempArray){

    if (begin < end){
        int middle = (end+begin)/2;
        MergeSort(a, begin, middle, tempArray);  //Split left
        MergeSort(a, middle+1, end, tempArray);  //Split right
        Order(a, begin, middle, end, tempArray); //Sort arrays
    }
}


/*
 * Performs sorting.
 */
void Order(std::vector<int> &a, int begin, int middle, int end, std::vector<int> &tempArray)
{
 
    for (int i = 0; i <= end; i++){
        tempArray[i] = a[i];
    }
    
    int lower = begin;
    int mid = middle+1;
    int newPlace = begin;
    
    while (lower <= middle && mid <= end){
        if (tempArray[lower] <= tempArray[mid]){
            a[newPlace] = tempArray[lower];
            lower++;
        }
        else {
            a[newPlace] = tempArray[mid];
            mid++;
        }
        newPlace++;
    }
    
    while(lower <= middle){
        a[newPlace] = tempArray[lower];
        lower++;
        newPlace++;
    }
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

#endif /* MyMergeSort_h */
