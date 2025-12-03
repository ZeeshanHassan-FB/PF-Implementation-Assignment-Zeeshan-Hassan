// 16.	Write a program to assign a value 3 to "int" type variables a, b and c using multiple assignment statement. Calculate the product of these numbers.
#include <stdio.h>

void program16() {
    printf("This program is to assign same value to 3 variables and find there product\n");
    
    int a, b, c;
    a = b = c = 3;


    int product = a * b * c;

    
    printf("Product = %d\n", product);
    
}
