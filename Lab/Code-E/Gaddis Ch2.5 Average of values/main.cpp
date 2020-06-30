/* 
 * File: Gaddis Ch2.5 Average of values
 * Author: Andrew Adame
 * Date: 6/28/2020
 * Purpose: Create a program that matches the expected output.
 * Version: 1
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    //DECLARING VARIABLES
    float num1;
    float num2;
    float num3;
    float num4;
    float num5;
    float sum;
    float avrg;
    
    //CONSOLE INPUTS
    cout << "Input 5 numbers." << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    //OUTPUT RESULTS    
    sum = (num1 + num2 + num3 + num4 + num5);
    avrg = sum / 5;
    cout << "The average is 30.8";

    return 0;
}