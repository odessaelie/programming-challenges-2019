/* This program calculates the cycle length for a sequence of numbers 
 * and prints the inputs next to the cycle length on one line.  
 * File:   3nplus1.cpp
 * Author: Odessa Elie
 * @JUDGE_ID: 1076702 omelie 100 C++ 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    
    int i, j, totalcycle, cycle;
    
    //error checking: the inputs should both be positive and less than or equal to 1,000,000
    if ((i <= 1000000) || (i > 0) && (j <= 1000000) || (j > 0))
    {
        
    //read input from the user and check until the end of file
    while ((cin >> i >> j ) && (i,j)!= EOF )
    {
        //set temporary variables to store the original input values of i and j
        int i2 = i;
        int j2 = j;   
        
        //swap the values of i and j to determine the range of cycles between them
        if (i>j)
           swap (i,j);
        
        //set the maximum cycle length to 0
        totalcycle = 0;   
        
        //this loop calculates the cycle lengths between the 2 numbers entered
       while (i <= j)
        {
            int n = i;
            cycle = 1;
            
            //perform calculations based on whether the numbers are even or odd
            while (n != 1)
            {
                if (n%2 == 0)
                    n = n/2;
                else
                    n = (n*3)+1;
                cycle++;
            }
         
        if (cycle > totalcycle)
           swap(totalcycle,cycle);
            i++;
        } 
        cout << i2 << " " << j2 << " " << totalcycle << "\n";
    }
    }
    return 0;
}







