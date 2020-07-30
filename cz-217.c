// Created by Ramees K K  138217
// 25-07-2020
// C code for Reversing a String

// C program to Count zero bits

#include <stdio.h> 
#include <stdlib.h>

int countZeroBits(unsigned char c[]) 
{ 
	int i;
	unsigned int count = 0; 
	
	if (c[1]=='x')
		sscanf(c,"%x",&i);
	else
		sscanf(c,"%d",&i);	

	while (i) { 
			count += !(i&1);
		i >>= 1; 
	} 
	return count; 
} 

/* Program to test function countSetBits */
int main() 
{ 
	char c[10];
	int i;
	printf("Enter a Number : ");
	scanf("%s",c);	
	printf("Number of Zeros : %d\n",countZeroBits(c)); 
	return 0; 
} 
