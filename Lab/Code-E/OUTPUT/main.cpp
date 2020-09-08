/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *
 * Created on September 5, 2020, 2:41 PM
 */

#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <iomanip>   
using namespace std;


int main(int argc, char** argv) {
    //Declare a Variable, i.e. an integer
    int number;
    //Display various output results in Code-E
    //8 Spaces with a new line
    cout<<"        "<<endl;
    //8 Spaces with a new line
    cout<<"        \n";
    //A Tab with 8 Spaces and a new line
    cout<<"\t     \n";
    //Read the value of a number as input and output twice separated by 6 spaces
    cin>>number;
    cout<<number<<"      "<<number<<endl;
    //Read another number as input then  output twice separated by 6 spaces
    cin>>number;
    cout<<number<<setw(7)<<number<<endl;
    //Exit stage right or left!
    return 0;
}