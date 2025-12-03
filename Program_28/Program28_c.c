// 28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b2 - 4ac 
#include <stdio.h>
void program28() {
    printf("Program to calculate the value of discriminant:");
 
    float a, b, c, Disc;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

   
    Disc = (b * b) - 4 * (a * c);

    printf("Discriminant = %.2f\n", Disc);

}
