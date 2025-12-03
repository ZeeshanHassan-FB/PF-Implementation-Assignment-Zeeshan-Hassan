// 11.	Write a program to declare and initialize two variables of "int" type. Calculate the average of these values and print the result on screen. 
#include <stdio.h>
#include <conio.h>

void program11() {
    printf("This program is to calculate the average of two numbers and display these numbers and there average\n ");
    
    int num1 = 10;
    int num2 = 20;

    float average = (num1 + num2) / 2.0;
    printf("The average of %d and %d is: %.2f\n", num1, num2, average);
}
