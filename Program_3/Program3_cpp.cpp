// 3.	Write a program to assign two variables by assignment statement. Interchange the values and print the result on the screen. 
#include <iostream>
using namespace std;
void program3(){
 
    int x = 5;
    int y = 10;
    int temp;
   
    temp = x;
    x = y;
    y = temp;
    
    cout <<"The value of x is now: "<<x << endl;
    cout <<"The value of y is now: "<<y << endl;
    
}
