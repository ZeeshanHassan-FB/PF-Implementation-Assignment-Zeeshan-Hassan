// 6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months. 

#include <iostream>
#include <string>
using namespace std;
void program6(){
  
    int Age;
    int months;

    cout << "Enter your age: ";
    cin >> Age;

   
    months = Age * 12;
  
    cout << "You are " << months << " months old.";

}
