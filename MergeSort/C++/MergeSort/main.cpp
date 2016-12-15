//
//  main.cpp
//  MergeSort
//
//  Created by Nate Henderson on 8/3/16.
//  Copyright © 2016 Nate Henderson. All rights reserved.
//

#include <iostream>
#include <vector>
#include "MyMergeSort.h"

int main(int argc, const char * argv[]) {
    std::vector <int> *array = new std::vector<int>;
    
    //Fills vector with random numbers.
    srand(time_t(NULL));
    for (int i = 0; i < 10; i++)
        array->push_back(rand()%10);
    std::cout << "Vector before: " << printArray(*array) << std::endl;
    
    //Initiates MergeSort.
    MergeSort(*array);
    
    std::cout << "Vector after:  " << printArray(*array) << std::endl;
    
    return 0;
}
