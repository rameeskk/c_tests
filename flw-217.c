// Created by Ramees K K  138217
// 26-07-2020
// C code for Reversing a String

// C program to find longest word in a sentance

#include <stdio.h> 
#include <string.h>

#define MAX 100

int FindLongestWord(const char *pStr, char **pWord)
{
    char *startp;
    char *endp;
    char *word;
    int len, i, x, longest=0;
    
    startp = pStr;
    endp = pStr;
    len = strlen(pStr);

    for(i = 0; i < len; ++i)
    {
        printf("%c", *endp);
        if((*endp == ' ') || (*endp == '\t') || (*endp == '\0') || (*endp == '\n'))
        { 
            printf("%c", *endp);

            //longest=longest<(endp-startp)?(endp-startp):longest;
            if(longest < (endp - startp))
            {
                longest = (endp - startp);
                word = startp;
                
                //x=i;
            }
            startp = ++endp;
            endp = startp;
        }
        else
            ++endp;   
    }
    for ( i = 0; i < longest; i++)
    {
        *(*pWord + i) = word[i];
       //printf("%c\n",word[i]);
    }
   // *(pWord[longest])='\0';

    
    //*pWord=pStr+(x-longest);
    return longest;
}


int main() 
{ 
char str[MAX];
char *pword;
char word[10];

int len;

pword=word;
printf("Enter the Sentance : ");
fgets(str, MAX, stdin); 
printf("%s", str);
len = FindLongestWord(str, &pword);
printf("word : %s\n",pword);
printf("longest = %d",len);
return 0; 
} 
