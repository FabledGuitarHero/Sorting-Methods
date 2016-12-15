//
//  main.cpp
//  QuickSort
//
//  Created by Nate Henderson on 12/14/16.
//  Copyright © 2016 Nate Henderson. All rights reserved.
//

#include <iostream>
#include <vector>
#include "MyQuickSort.h"

int main(int argc, const char * argv[]) {
    std::vector <int> *array = new std::vector<int>;
    
    //Fills vector with random
    srand(time_t(NULL));
    for (int i = 0; i < 10; i++)
        array->push_back(rand()%10);
    std::cout << "Vector before: " << printArray(*array) << std::endl;
    
    //Initiates QuickSort
    QuickSort(*array, 0, (static_cast<int>(array->size()-1)));
    
    std::cout << "Vector after:  " << printArray(*array) << std::endl;
    
    return 0;
}
