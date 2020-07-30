
// Created by Ramees K K  138217
// 30-07-2020

// C program for sorting
#include <stdio.h>

void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void buble_sort(int *a, int size)
{
    for(int i = 0; i < size -1; ++i)
        for (int j = 0; j < size-i-1; ++j)
            if(a[j]>a[j+1])
                swap(&a[j], &a[j+1]);
        printf("Sorted : ");
        for (int i = 0; i < size; ++i)
            printf("%d,",a[i]);               
}


void insertion_sort(int *a, int size) 
{ 
    int i, x, j; 
    for (i = 1; i < size; i++) 
    { 
        x = a[i]; 
        j = i - 1; 
        while (j >= 0 && a[j] > x) 
        { 
            a[j + 1] = a[j]; 
            j = j - 1; 
        } 
        a[j + 1] = x; 
    } 
}


int shell_sort(int *a, int size) 
{ 
    for (int mid = size/2; mid > 0; mid /= 2) 
    { 
        for (int i = mid; i < size; ++i) 
        { 
            int temp = a[i]; 
            int j;             
            for (j = i; j >= mid && a[j - mid] > temp; j -= mid) 
                a[j] = a[j - mid]; 
            a[j] = temp; 
        } 
    } 
    return 0; 
} 


void selection_sort(int *a, int size)
{
    int min, i, j;
    for (i = 0; i < size-1; ++i)
    {
        if(i == 5)
            i = 5;
        min = i;
        for (j = i+1; j < size; ++j)
            if(a[j] < a[min])
                min = j;
        swap(&a[i], &a[min]);
    }
    
}


 int main ()
{
    int array[30];
    int size, i;
    printf("\nEnter array size : ");
    scanf("%d",&size);
    printf("Input elements : ");
    for(i = 0; i < size; ++i)
        scanf("%d",&array[i]);
    printf("\nArray is :");
    for(i = 0; i <size; ++i)
        printf("%d,",array[i]);
    //buble_sort(array, size);
    selection_sort(array, size);
    //insertion_sort(array, size);
    //shell_sort(array,size);
    printf("\nBubble sorted : ");
    for (i = 0; i < size; ++i)
            printf("%d,",array[i]);
}