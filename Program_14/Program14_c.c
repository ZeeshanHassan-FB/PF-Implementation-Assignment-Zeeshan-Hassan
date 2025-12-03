// 14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)
#include <stdio.h>
#include <conio.h>

void program14() {
    print("This program is to convert \n");
    
    float mm;
    printf("Enter length in millimeters: ");
    scanf("%f", &mm);

    float inches = mm / 25.4;

  
    printf("Length in inches: %.2f\n", inches);
   
}
