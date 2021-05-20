#include <math.h> 
#include <stdio.h>

#include "insertionsort.h"

int ascending = 0;
   
// Insertion Sort Function
void insertionSort(int array[], int n) 
{ 
	int i, element, j; 
	for (i = 1; i < n; i++) 
	{ 
		element = array[i];
		j = i - 1; 
		
		if (ascending == 1) {
		
		
			// compare "element" to its neighbor to the left
			while (j >= 0 && array[j] > element)  // compare elemet
			{ 
				array[j + 1] = array[j]; 
				j = j - 1; 
			}
	 		array[j + 1] = element; 
	 	}
	 		
	 	else if (ascending == 0) {
	 		// compare "element" to its neighbor to the left
			while (j >= 0 && array[j] < element)  // compare elemet
			{ 
				array[j + 1] = array[j]; 
				j = j - 1; 
			}
	 		array[j + 1] = element;
	 	}
	 	
	 	else{
	 		printf("syntax error!");
	 	}
	 		
	}	 
}
   
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

void bubbleSort(int array[], int n)
{
int i, j;

		
	if (ascending == 1){
		for (i = 0; i < n-1; i++) 
			for (j = 0; j < n-i-1; j++)
	  
				if ( array[j] > array[j+1]) 
					swap(&array[j], &array[j+1]);
	}			
				
	else if (ascending == 0) {
		for (i = 0; i < n-1; i++) 
				for (j = 0; j < n-i-1; j++)
					if ( array[j] < array[j+1]) 
						swap(&array[j], &array[j+1]);

	}
	else{
		printf("syntax error");
	}
}

void selectionSort(int array[], int n)
{
int i, j, min_element, max_element;

	if (ascending == 1){

		for( i = 0; i < n-1; i++){
			min_element = i;
			
			for (j = i+1; j < n; j++)
			{
				if (array[j] < array[min_element]){
					min_element = j;
					swap(&array[min_element], &array[i]);
				}
			}
		}
	}
		
	else if(ascending == 0){

		for( i = 0; i < n-1; i++){
			max_element = i;
			
			for (j = i+1; j < n; j++)
			{
				if (array[j] > array[max_element]){
					max_element = j;
					swap(&array[max_element], &array[i]);
				}
			}
		}

	}

	else{
		printf("syntax error");
	}
		

}

int partition (int array[], int lowIndex, int highIndex)
{

	int pivotElement = array[highIndex];
	int i = (lowIndex-1);
	for (int j = lowIndex; j <= highIndex-1; j++)
	{
		if (array[j] <= pivotElement)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[highIndex]);
	return (i+1);

}

void quickSort(int array[], int lowIndex, int highIndex)
{

	if (lowIndex < highIndex)
	{
		int pivot = partition(array, lowIndex, highIndex);
		quickSort(array, lowIndex, pivot-1);
		quickSort(array, pivot+1, highIndex);
	}
}




