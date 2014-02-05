/* 
 * File:   streamtest.cpp
 * Author: Roy Van Liew
 *
 * Created on January 29, 2014, 12:01 PM
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    ifstream in("input.txt");
    string sdata; // Store string from file to display.
    string sname[3];
    string sgrade[4];
    int i = 0, j;

    while (getline(in, sdata)) {
        
        std::size_t found = sdata.find(": "); // Search for ": " string
        sname[i] = sdata.substr(found + 2);      
        cout << sname[i] << endl;
        
        for( j = 0 ; j < 4 ; j++ )
        {
           getline(in, sdata); 
           std::size_t found = sdata.find(": "); // Search for ": " string
           sgrade[j] = sdata.substr(found + 2);      
           cout << sgrade[j] << endl;           
        }
        cout << "\n"; // This is simply for formatting
        
        getline(in, sdata);
        i++;
    }
    
    return 0;
}

