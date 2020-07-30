// Created by Ramees K K  138217
// 25-07-2020

// C program to generate parity bit

#include <stdio.h>

unsigned char ComputeEvenParity(unsigned char val)
{
    unsigned char par = 0x00;
    unsigned char temp;
    
    temp = val;

    while(temp!=0)
    {
        par ^= temp;
        temp >>= 1;
    }
    if(par&1)
        return(val^0x80); 
    else
        return(val);
}

int main()
{
    unsigned char hex;
    unsigned char par;

    printf("Enter Hex number(7bits) : ");
    scanf("%hhx",&hex);
    par = ComputeEvenParity(hex);
    printf("Parity No : %x\n",par);
}