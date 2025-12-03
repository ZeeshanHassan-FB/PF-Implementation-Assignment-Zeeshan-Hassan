// 17.	 Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen. 
#include <stdio.h>
#include <conio.h>

void program17() {
    printf("Program to seperate integral and fractional part of real number \n");
    float val = 15.58971;

    int integral = (int) val;
    float fractional = val - integral;
    
    printf("Integral part: %d\n", integral);
    printf("Fractional part: %.5f\n", fractional);

}
