// 3.	Write a program to assign two variables by assignment statement. Interchange the values and print the result on the screen. 
#include <stdio.h>
#include <conio.h>
void program3(){
    printf("This program is about interchanging the values of two variables\n");

    int x = 5;
    int y = 10;
    int temp;
   
    temp = x;
    x = y;
    y = temp;
   
    printf("The value of x is now: %d\n", x);
    printf("The value of y is now: %d\n", y);
    
}
