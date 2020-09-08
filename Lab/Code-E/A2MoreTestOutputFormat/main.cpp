/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *
 * Created on September 5, 2020, 2:51 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int input = 4;
    int num [input];
    
    for(int i=0; i < input; i++) {cin >> num[i];}
    
    cout << setw(9) << num[0] << setw(8) << num[0] << ".0" << setw(7) << num[0] <<".00"<<endl;
    cout << setw(9) << num[1] << setw(8) << num[1] << ".0" << setw(7) << num[1] <<".00"<<endl;
    cout << setw(9) << num[2] << setw(8) << num[2] << ".0" << setw(7) << num[2] <<".00"<<endl;
    cout << setw(9) << num[3] << setw(8) << num[3] << ".0" << setw(7) << num[3] <<".00";
   
   return 0;
}

