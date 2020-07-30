// Created by Ramees K K  138217
// 28-07-2020

// C program to find quadruplets with given sum

#include <stdio.h>

void printquad(const int *array, const int sum, const int size)
    {
        int i, j, k, l;
        for(i = 0; i < size-3; ++i)
            for (j = i+1; j < size-2 ; ++j)
                for (k = j+1; k < size-1; ++k)
                    for(l = k+1; l < size; ++l)
                        if (array[i]+array[j]+array[k]+array[l]==sum)
                            printf("\n(%d,%d,%d,%d)",array[i], array[j], array[k], array[l]);

                           
    }

int main()
{
    FILE *fptr;
    char file_name[10];
    int sum;
    int numbers[20];
    int size;

    printf("Enter the file name : ");
    scanf("%s",file_name);
    printf("Enter sum of quadruplets : ");
    scanf("%d",&sum);

    fptr = fopen(file_name, "r");



    while((fscanf(fptr,"%d",&numbers[size]))!=EOF)
        size++;
    for(int i = 0; i < size; ++i)
        printf("%d,",numbers[i]);
    printquad(numbers, sum, size);       
}