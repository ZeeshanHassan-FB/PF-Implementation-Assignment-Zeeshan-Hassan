// 8. Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula. 
// C = 5/9(f – 32) 
#include <iostream>

using namespace std;
void program8(){
   
    double Fahrenheit;
    cout << "Enter temperature in Fahrenheit";
    cin >> Fahrenheit;
  
    double Celsius;
    Celsius = (5.0/9.0) * (Fahrenheit - 32.0);
    
    cout << "Temeratue in Celsius is: " <<Celsius;
   
}