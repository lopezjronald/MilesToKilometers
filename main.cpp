/*
 *“Write a program in C++ that converts from miles to kilometers.
 * Your program should have a reasonable prompt for the user to
 * enter a number of miles. Hint: There are 1.609 kilometers to the mile.”
*/

#include <iostream>

using namespace std;

int main(){

    double miles {};
    double kilometers {};
    const double km_per_mile = 1.609;

    cout << "Please enter the number of miles: " << endl;

    while (miles <= 0) {
        cin >> miles;
        if (miles < 0) {
            cout << "Sorry, you have entered " << miles << ", which is an invalid entry. Please enter a valid number" << endl;
        }
    }

    kilometers = miles * km_per_mile;
    cout << "There are a total of " << kilometers << " kilometers for " << miles << " mile(s)." << endl;

    return 0;
}