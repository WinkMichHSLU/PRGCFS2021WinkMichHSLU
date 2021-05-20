#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_



extern int ascending;

/* declarations */
void insertionSort(int array[], int n);

void swap(int *a, int *b);

void bubbleSort(int array[], int n);

void selectionSort(int array[], int n);

int partition (int array[], int lowIndex, int highIndex);

void quickSort(int array[], int lowIndex, int highIndex);


#endif
