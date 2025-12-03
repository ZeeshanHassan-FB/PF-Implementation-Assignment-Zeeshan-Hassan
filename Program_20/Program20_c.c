// 20.	Write a program to print the output as given under by using escape sequence.    
//  	 	 	 	C:\Windows> 
//  	 	 	 	'P'     'A'     'K' 
//  	 	 	 	"Pakistan" 
#include <stdio.h>
#include <conio.h>

void program20(){
    printf("This program is to show some msgs");

    printf("\n\nOutput:");
    char text[100] = "C:\\Windows>\n\'P\'\t\'A\'\t\'K\'\n\"Pakistan\"";
    printf("%s", text);
    
}
