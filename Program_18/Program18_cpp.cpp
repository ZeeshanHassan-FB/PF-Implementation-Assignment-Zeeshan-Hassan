// 18.	Write a program to assign values to variables 'vi' and 't' a compute the value of 's' by using the formula: 
//  	 	 	𝑺 = 𝒗𝒊 ∗ 𝒕 + ½ 𝒂𝒕𝟐 
#include <iostream>
using namespace std;

void program18() {
 
    double vi = 5;
    double a = 2;
    double t = 3;

   
    double S = (vi * t) + ((1.0 / 2.0) * a * (t * t));

 
    cout << "S = " << S ;
}
