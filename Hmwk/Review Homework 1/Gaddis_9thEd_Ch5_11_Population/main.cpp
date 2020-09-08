/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *
 * Created on September 6, 2020, 6:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Write a  program that will predict the size of a population of organisms. 
 * The program should ask the user for the starting number of organisms, their average daily population increase, and the number of days they will multiply.
 */
int main(int argc, char** argv) {
    
    int popDisplay;
    double popPre, popPost, days, incPerc, incRate;
    
    do {
        cout << "Enter the population amount: ";
        cin >> popPre;
        
        if (popPre < 2) cout << "Enter a population of 2 or greater.\n\n";
    }while(popPre < 2);
    
     do {
        cout << "Enter the population daily increase (%): ";
        cin >> incPerc;
        
        if (incPerc < 0) cout << "Enter a positive population daily increase.\n\n";
    }while(incPerc < 0);
    
     do {
        cout << "Enter the amount of days the population will increase: ";
        cin >> days;
        
        if (days < 1) cout << "Enter a valid duration.\n\n";
    }while(days < 1);
    
    incRate = (incPerc/100);
    popPost = popPre;
    cout << "Population growth by day:\n";
    for (int i = 1; i <= days; i++){
        popPost += (incRate * popPost);
        popDisplay = popPost;
        cout << i << ": " << popDisplay << endl;
    }
    return 0;
}

