// 14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)
#include <iostream>
#include <string>

using namespace std;
void program14() {
   
    double mm;
    cout << "Enter length in millimeters: ";
    cin >> mm;
    
    double inches = mm / 25.4;

    
    cout << "Length in inches: " << inches << endl;
    
}
