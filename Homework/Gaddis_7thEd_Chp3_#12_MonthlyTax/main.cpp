/**************************************************************************
* AUTHOR         : Andrew Adame
* ASSIGNMENT     : Homework 1
* CLASS          : CIS-17A
* SECTION        : Chapter 3, Problem #12
* DUE DATE       : 06/26/2020
 ************************************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
    //DECLARING VARIABLES
    string month;
    float userInput;
    float sales;
    float countyTax;
    float stateTax;
    float totalTax;

    //CONSOLE OUTPUT
    cout << "This program is designed to calculate your county, state";
    cout << endl;
    cout << "and total sales tax and print them in an organized report. ";
    cout << endl;
    cout << "-------------------------------------------------------------------";
    cout << endl;
    
    //USER INPUTS MONTHS AND AMOUNT OF SALES
    cout << "Please enter the month: ";
    cin >> month;
    cout << "Please enter the amount of sales tax collected: ";
    cin >> userInput;
    cout << endl;

    //CALCULATION OF SALES AND SALES TAXES
    sales = (userInput)/(1.06);
    countyTax = (userInput) * (.02);
    stateTax = (userInput) * (.04);
    totalTax = countyTax + stateTax;

    //OUTPUT RESULTS
    cout << "Month: " << month << endl;
    cout << "-------------------" << endl;
    cout << right;
    cout << "Total Collected: " << setw(11) << "$ ";
    cout << setprecision(6) << userInput << endl;
    cout << "Sales: " << setw(21) << "$ ";
    cout << setprecision(6) << sales << endl;
    cout << "County Sales Tax: " << setw(10) << "$ ";
    cout << setprecision(4) << countyTax << endl;
    cout << "State Sales Tax: " << setw(11) << "$ ";
    cout << setprecision(4) << stateTax << endl;
    cout << "Total Sales Tax: " << setw(11) << "$ ";
    cout << setprecision(4) << totalTax;


    return 0;
}

