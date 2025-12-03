// 12.	Write a program to find the volume of a cylinder by using 'const' qualifier. The formula to find the volume of a cylinder is: 
//  	 	Volume = 𝝅𝑹𝟐𝒙𝑯     𝑻𝒉𝒆 𝒗𝒂𝒍𝒖𝒆 𝒐𝒇 𝝅 𝒊𝒔 𝟑.𝟏𝟒𝟏𝟕 
#include <stdio.h>
#include <conio.h>

#define PI 3.1417

void program12() {
    printf("This program is to find the volume of cylinder:\n");
   
    float R = 3.0;
    float H = 4.0;

  
    float Volume = PI * (R * R) * H;

    printf("Volume of cylinder: %.2f\n", Volume);
    
}
