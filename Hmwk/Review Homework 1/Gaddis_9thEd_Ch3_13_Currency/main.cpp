/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *
 * Created on September 6, 2020, 12:25 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Write a  program that will convert U.S. dollar  amounts to Japanese yen and to euros.
 */
int main(int argc, char** argv) {
    
    const double YEN_PER_DOLLAR = 106.24;
    const double EUROS_PER_DOLLAR = 0.84;
    double USD, JPY, EUR;
    
    cout << "Enter the amount in USD\n$";
    cin >> USD;
    
    JPY = YEN_PER_DOLLAR * USD;
    EUR = EUROS_PER_DOLLAR * USD;
    
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "$" << USD << " = ¥" << JPY << endl;
    cout << "$" << USD << " = €" << EUR << endl;
    cout << "Sep. 05, 2020 XE Rates";

    return 0;
}

