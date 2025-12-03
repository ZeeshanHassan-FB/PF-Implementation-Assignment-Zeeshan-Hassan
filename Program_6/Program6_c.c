// 6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months. 
#include <stdio.h>
#include <conio.h>

void program6(){
    printf("Program to calculate age from yeears to months \n");
    
    int Age;
    int months;

    printf("Enter your age: ");
    scanf("%d", &Age);


    months = Age * 12;

    printf("You are %d months old.\n", months);

}
