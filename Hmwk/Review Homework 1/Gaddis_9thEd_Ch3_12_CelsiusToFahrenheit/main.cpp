/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *  
 * Created on September 6, 2020, 12:07 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Write a  program that converts Celsius temperatures to Fahrenheit temperatures.
 */
int main(int argc, char** argv) {
    
    double c, f;
       
    cout << "Enter the temperature in Celsius" << endl;
    cin >> c;
    
    f = (c * 9/5) + 32;
    
    cout << c << " degrees C is " << f << " degrees F";

    
    return 0;
}

