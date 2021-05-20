#include <math.h> 
#include <stdio.h>

int ascending; // ascending = 1 --> Aufsteigend sortiert, ascending = 0 --> Absteigend sortiert

// Insertion Sort Function
void insertionSort(int array[], int n) 
{ 
	int i, element, j;
	
	if(ascending == 1)
	{	for (i = 1; i < n; i++) 
		{ 
			element = array[i]; // temporary copy of the element in the array
			j = i - 1; 
			// compare "element" to its neighbor to the left
			while (j >= 0 && array[j] > element)  // compare element
			{ 
				array[j + 1] = array[j]; 
				j = j - 1; 
			}
	 		array[j + 1] = element; 
		}
	}
	else if(ascending == 0)
	{	for (i = 1; i < n; i++) 
		{ 
			element = array[i]; // temporary copy of the element in the array
			j = i - 1; 
			// compare "element" to its neighbor to the left
			while (j >= 0 && array[j] < element)  // compare element
			{ 
				array[j + 1] = array[j]; 
				j = j - 1; 
			}
	 		array[j + 1] = element; 
		}
	}
	else
	{
		printf("Invalid Input!\nPlease enter a number for sortingdirection\n - For ascending: 1\n - For descending: 0\n");
	}	 
}
   
// Function to print the elements of an array
void printArray(int array[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
	{
		printf("%d ", array[i]); 
	}
	printf("\n"); 
}  

// Main Function 
int main() 
{
	printf("Please enter a number for sortingdirection\n - For ascending: 1\n - For descending: 0\n");
	scanf("%d", &ascending);
	
	int array[] = { 122, 17, 93, 3, 56, -5, -378, 65, 37, 37 }; 
	int n = sizeof(array) / sizeof(array[0]); 
	insertionSort(array, n); 
	printArray(array, n); 
	return 0; 
}
