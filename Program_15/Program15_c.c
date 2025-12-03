// 15.	Write a program to interchange values of two variables.
#include <stdio.h>
void program15() {
    printf("Program to interchange Two values\n");
    
    int x = 5, y = 10;

   
    int temp = x;
    x = y;
    y = temp;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
 
}
