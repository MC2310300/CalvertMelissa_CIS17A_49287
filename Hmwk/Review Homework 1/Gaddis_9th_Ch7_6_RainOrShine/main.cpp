/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Melissa
 *
 * Created on September 6, 2020, 11:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int THREE = 3, FOUR = 4, THIRTY = 30;

void fillCharArray(char wc[THREE][THIRTY], string file);
void fillIntArray(char wc[THREE][THIRTY], int dc[FOUR][THREE]);
int tallyConds(char wc[][THIRTY], int M, char W);
void displayArray(int dc[FOUR][THREE]);

/*
 * An amateur meteorologist wants to keep track of weather conditions during the past year’s three-month summer season and has designated each day as either rainy (‘R’), cloudy (‘C’), or sunny (‘S’).
 * Write a program that stores this information in a 3 × 30 array of characters, where the row indicates the month (0 = June, 1 = July, 2 = August) and the column indicates the day of the month. Note that data are not being collected for the 31st of any month.
 * The program should begin by reading the weather data in from a file. Then it should create a report that displays, for each month and for the whole three-month period, how many days were rainy, how many were cloudy, and how many were sunny.
 * It should also report which of the three months had the largest number of rainy days. Data for the program can be found in the RainOrShine.txt file.
 */
int main(int argc, char** argv) {
        
    char condsDay[THREE][THIRTY];
    int condsMonth[FOUR][THREE];
    
    fillCharArray(condsDay, "RainOrShine.txt");
    
    fillIntArray(condsDay, condsMonth);
    
    displayArray(condsMonth);

    return 0;
}

void fillCharArray(char wc[THREE][THIRTY], string file){
    
    ifstream inFile;
    
    inFile.open(file);
    
    for(int i = 0; i < THREE; i++) {
        for(int j = 0; j < THIRTY; j++) 
            inFile >> wc[i][j];
    }
    
    
    inFile.close();
}

void fillIntArray(char wc[THREE][THIRTY], int dc[FOUR][THREE]){
    
    dc[0][0] = tallyConds(wc, 0, 'C');
    dc[0][1] = tallyConds(wc, 0, 'R');
    dc[0][2] = tallyConds(wc, 0, 'S');
    dc[1][0] = tallyConds(wc, 1, 'C');
    dc[1][1] = tallyConds(wc, 1, 'R');
    dc[1][2] = tallyConds(wc, 1, 'S');
    dc[2][0] = tallyConds(wc, 2, 'C');
    dc[2][1] = tallyConds(wc, 2, 'R');
    dc[2][2] = tallyConds(wc, 2, 'S');
    
    dc[3][0] = (dc[0][0] + dc[1][0] + dc[2][0]);
    dc[3][1] = (dc[0][1] + dc[1][1] + dc[2][1]);
    dc[3][2] = (dc[0][2] + dc[1][2] + dc[2][2]);
}

int tallyConds(char wc[][THIRTY], int M, char W){
    
    int tally = 0;
    
    for(int i = 0; i < THIRTY; i++){
        if (wc[M][i] == W) tally++;
    }
    
    return tally;    
}

void displayArray(int dc[FOUR][THREE]){
    
        string rainyMonth = "NULL";
    
    cout << "\tJune\tJuly\tAugust\tTotal\n";
    for(int i = 0; i < THREE; i++) {
        for(int j = 0; j < FOUR; j++) {
            if (i==0 && j==0) cout << "Cloudy\t";
            if (i==1 && j==0) cout << "Rainy\t";
            if (i==2 && j==0) cout << "Sunny\t";            
            cout << dc[j][i] << "\t";            
        }
        cout << endl;
    }
    if(dc[0][1] > dc[1][1]){
        rainyMonth=(dc[0][1] > dc[2][1])?"June":
                   (dc[0][1] != dc[2][1])?"August":"June and August";
    }
    else if(dc[1][1] > dc[2][1]){rainyMonth=(dc[1][1] != dc[0][1])?"July":"June and July";}
    else if(dc[1][1] != dc[2][1]){rainyMonth = "August";}
    else if(dc[1][1] != dc[0][1]){rainyMonth = "July and August";}
    else {cout << "The three months had the same number of rainy days.";}
    
    if (rainyMonth != "NULL"){cout << rainyMonth << " had the largest number of rainy days.";}
}




