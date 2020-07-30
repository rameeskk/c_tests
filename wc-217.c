// Created by Ramees K K  138217
// 29-07-2020

// C program to find word count in a string

#include <stdio.h>

#define MAX 100

int word_count(char *line)
{
    char *lcpt;
    int wordcount=0;
    
    lcpt = line;

    do{
        if((*lcpt==' ')||(*lcpt=='\t')||(*lcpt=='\n')||(*lcpt=='\0'))
            ++wordcount;  
        ++lcpt;
    }while (*lcpt!='\0');

    return wordcount;
}

int main() 
{ 
char str[MAX];
int wc;

printf("Enter the Sentance : ");
fgets(str, MAX, stdin); 
wc = word_count(str);
printf("Word count is %d\n",wc);
return 0; 
} 