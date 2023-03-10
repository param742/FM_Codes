// C program for implementation of Bubble sort
#include <stdio.h>
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)
// Last i elements are already in place
for (j = 0; j < n-i-1; j++)
if (arr[j] > arr[j+1])
swap(&arr[j], &arr[j+1]);
}
/* Function to print an array */
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d ", arr[i]);
printf("n");
}
// Driver program to test above functions
int main()
{
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr, n);
printf("Sorted array: \n");
printArray(arr, n);
return 0;
})   
// C program for implementation of Selection sort
int main()
{
int array[100], n, i, j, swap; 
printf("Enter number of elementsn");
scanf("%d", &n); 
printf("Enter %d Numbers:n", n); 
for(i = 0; i < n; i++)
scanf("%d", &array[i]); 
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(array[j] > array[j+1]) 
{
swap=array[j];
array[j]=array[j+1];
array[j+1]=swap;
}
}
} 
printf("Sorted Array:n"); 
for(i = 0; i < n; i++)
printf("%dn", array[i]);
return 0;
}
