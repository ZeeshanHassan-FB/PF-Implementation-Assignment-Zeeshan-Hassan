// 9. Write a program to find the maximum number from four numbers. 
#include <stdio.h>

void program9() {
    printf("This program is to check the maximum number bt__w four numbers\n");
    int num1 = 50, num2 = 90, num3 = 24, num4 = 93;

    int max = num1;
    if (num2 > max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }
    if (num4 > max){
        max = num4;
    }

    
    printf("Maximum number is: %d\n", max);
 
}
