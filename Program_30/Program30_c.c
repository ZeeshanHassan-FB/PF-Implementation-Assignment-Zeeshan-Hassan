// 30.	Write a program to test whether a given integer is odd or even using simple 'if' structure. 
#include <stdio.h>

void program30() {
    printf("Program to check number is even or odd ");

    
    int N = 2;

    
    if (N % 2 == 0) {
        printf("N is Even\n");
    }

    if (N % 2 != 0) {
        printf("N is Odd\n");
    }
}
