#include <stdio.h>
#include <math.h>

#include "insertionsort.h"



// Sort Options
typedef enum {
	INSERTION = 1,
	BUBBLE,
	SELECTION,
	QUICK,
	SHOWOPTION,
	SHUTDOWN,
	ERROR
} SortOptions;

SortOptions option = INSERTION;

void ShowOption(void);
void printArray(int array[], int n);




// Main Function 
int main() 
{ 
	int array[] = { 122, 17, 93, 3, 56, -5, -378, 65, 37, 37 }; 
	int n = sizeof(array) / sizeof(array[0]);
	
	
	// endless loop
	int run = 1;
	while(run == 1) 
	{
		
		switch(option)
		{
			case INSERTION:
				printf("Please enter a number for sortingdirection\n - For ascending: 1\n - For descending: 0\n");
				scanf("%d", &ascending);
				printArray(array, n);
				insertionSort(array, n);
				printArray(array, n);
				
				option = SHOWOPTION;
				
				break;
		
		
			// add all cases
			
			case BUBBLE:
			
				printf("Please enter a number for sortingdirection\n - For ascending: 1\n - For descending: 0\n");
				scanf("%d", &ascending);
				
				printArray(array, n);
				bubbleSort(array, n);
				printArray(array, n);
				
				option = SHOWOPTION;
				
				break;
				
			case SELECTION:
				
				break;
				
			case QUICK:
				
				break;
				
			case SHOWOPTION:
				ShowOption();
				break;
				
			
			case SHUTDOWN:
				printf("Shutting down.\n");
				run = 0;
				break;


			default:
				printf("Sort Tester in Error State.\n");
				option = SHUTDOWN;
				break;
		}
	}
	
	
	
	
	
	return 0; 
}


void ShowOption(void){

	int optionSelected = 0;
	
	printf("Select from following options\n");
	printf("1: Insertion Sort\n");
	printf("2: Bubble Sort\n");
	printf("3: Selection Sort\n");
	printf("4: Quick Sort\n");
	printf("5: Shutdown\n");
	scanf("%d", &optionSelected);
	
	switch(optionSelected){
	
		case 1:
			option = INSERTION;
			break;
			
		case 2:
			option = BUBBLE;
			break;
			
		case 3:
			option = SELECTION;
			break;
			
		case 4:
			option = QUICK;
			break;
			
		case 5:
			option = SHUTDOWN;
			break;
		
		default:
			printf("Invalid selection\n");
			option = SHOWOPTION;
			break;
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
