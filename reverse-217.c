// Created by Ramees K K  
// 25-07-2020
// C code for Reversing a String


#include <stdio.h> 
#include <string.h> 

// Function for reversing the string
void ReverseString(char* pStr) 
{ 
	int length, i; 
	char *frst_lc, *last_lc, ch; 

	length = strlen(pStr); 

	frst_lc = pStr; 
	last_lc = pStr; 

    //last location
	for (i = 0; i < length - 1; i++) 
		last_lc++; 


	for (i = 0; frst_lc < last_lc; i++) { 

        //swap logic
        *frst_lc ^= *last_lc;
        *last_lc ^= *frst_lc;
        *frst_lc ^= *last_lc;               
	
		frst_lc++; 
		last_lc--; 
	} 
} 

// Driver code 
int main() 
{ 

	char str[100];
	printf("Enter a string: ");
    scanf("%s",str); 

	ReverseString(str); 

	printf("Reverse of the string: %s\n", str); 

	return 0; 
} 
