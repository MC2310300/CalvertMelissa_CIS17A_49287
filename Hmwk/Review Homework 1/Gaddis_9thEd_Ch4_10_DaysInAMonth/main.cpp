/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *
 * Created on September 6, 2020, 12:47 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

/*
 * Write a program that asks the user to enter the month and year and the program should display the number of days in the month.
 */
int main(int argc, char** argv) {
    
    int month, year, r100, r400, r4;
    
    do {
    cout << "Enter a month (1-12): ";
    cin >> month;
    
    if (!((month < 13) && (month > 0)))
        cout << "Please enter a valid month.\n\n";
    
    }while (!((month < 13) && (month > 0)));
    
    cout << "Enter a year: ";
    cin >> year;
    
    if (month == 2){
       r100 = year % 100;
       
       if (r100 == 0) {
           r400 = year % 400;
           
           if (r400 == 0) {cout << "29 days";}
           else {cout << "28 days";}               
       }       
       else {
           r4 = year % 4;
           
           if (r4 == 0) {cout << "29 days";}
           else {cout << "28 days";} 
       } 
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {cout << "31 days";}
    if (month == 4 || month == 6 || month == 9 || month == 11) {cout << "30 days";}

    return 0;
}

