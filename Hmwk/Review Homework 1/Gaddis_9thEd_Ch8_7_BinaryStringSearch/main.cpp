/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *
 * Created on September 7, 2020, 3:04 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

void selectionSort(string array[], int numElems);
void swap(string &a, string &b);
int binarySearch(string array[], int numElems, string name);
void displayArray(string array[],  int numElems);

/*
 * Modify the binarySearch function presented in this chapter so it searches an array of strings instead of an array of ints. Test the function with a driver program. Use Program 8-8 as a skeleton to complete. (The array must be sorted before the binary search will work.)
 */
int main(int argc, char** argv) {
    
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                               "Taylor, Terri", "Johnson, Jill", 
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                               "James, Jean", "Weaver, Jim", "Pore, Bob", 
                               "Rutherford, Greg", "Javens, Renee", 
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
    string searchValue;
    int position;
    
    selectionSort(names, NUM_NAMES);
    
    displayArray (names, NUM_NAMES);
    do {
    cout << "\nEnter a name to search for: ";
    getline(cin, searchValue);
    position = binarySearch(names, NUM_NAMES, searchValue);
    
    if (position != -1)
        cout << "That name is found at position: " << position << ".";
    else
        cout << "That name is not found.\n";
    }while(position==-1);
    return 0;
}

void selectionSort(string array[], int numElems){
    int minIndex;
    string minValue;

    for (int initialIndex = 0; initialIndex < (numElems - 1); initialIndex++)
    {
        minIndex = initialIndex;
        minValue = array[initialIndex];

        for (int index = initialIndex + 1; index < numElems; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[initialIndex]);
    }
    
}

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

int binarySearch(string array[], int numElems, string name){
    
    int first = 0,
        last = numElems - 1, 
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2; 

        if (array[middle] == name)     
        {
            position = middle;
            found = true;
        }
        else if (array[middle] > name)  
            last = middle - 1;  
        else                                  
            first = middle + 1;  
        
    }
    return position;
}

void displayArray(string array[],  int numElems){
    
    for (int i = 0; i < numElems; i++)
        cout << array[i] << endl;

}

