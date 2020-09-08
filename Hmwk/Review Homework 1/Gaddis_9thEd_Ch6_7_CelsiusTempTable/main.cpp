/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *
 * Created on September 6, 2020, 8:48 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

double celsius(int f);

/*
 * Write a function named "celsius" that accepts a Fahrenheit temp as an argument and return the Celsius temp.
 * Demonstrate the function by calling it in a loop that displays a table of the F temps 0-20 & the C equivalents.
 */
int main(int argc, char** argv) {

    for (int f = 0; f<=20; f++) {
        celsius(f);
    }
    return 0;
}

double celsius(int f){
    double c, df = f;
        
    c = (df-32)*5/9;
        
    
    cout << setw(2)<< f << " F | " << setw(6)  << fixed << showpoint << setprecision(2) << c << " C" << endl;
}
