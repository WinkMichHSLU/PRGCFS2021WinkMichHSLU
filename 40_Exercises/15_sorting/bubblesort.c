#include <math.h> 
#include <stdio.h>

#include "bubblesort.h"
#include "insertionsort.h"

void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

void bubbleSort(int array[], int n)
{
int i, j;
for (i = 0; i < n-1; i++) 
	for (j = 0; j < n-i-1; j++)
		
		if (ascending == 1)
	  
			if ( array[j] > array[j+1]) 
				swap(&array[j], &array[j+1]);
				
		else if (ascending == 0)
			if ( array[j] < array[j+1]) 
				swap(&array[j], &array[j+1]);

		else
			printf("syntax error");
}
