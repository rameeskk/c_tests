// Created by Ramees K K  138217
// 24-07-2020
// C code for Printing
/*
    WELCOME
    E     M
    L     O
    C     C  
    O     L
    M     E
    EMOCLEW
    
*/

#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void print_str_pattern(char str[]) 
{ 
	int i, j; 
    int max_index;
    max_index = strlen(str)-1;
	for (i = 0; i <= max_index; i++) 
	{ 
		for (j = 0; j <= max_index; j++) 
		{ 
			if (i==0 || j==0 || i==max_index || j==max_index)			 
			    printf("%c",str[(abs(i-j))]);
            else
				printf(" ");			 
		} 
		printf("\n"); 
	} 

} 


int main(int argc, char *argv[]) 
{ 
	printf("%s\n",argv[1]);
	print_str_pattern(argv[1]); 
	return 0; 
} 
