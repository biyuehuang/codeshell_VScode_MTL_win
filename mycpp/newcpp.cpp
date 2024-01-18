#include <stdio.h>
#include <windows.h>

void selectionSort(int array[], int size) {
  for (int i = 0; i < size - 1; ++i) {
    // Find the minimum element in unsorted section
    int minIndex = i;
    for (int j = i + 1; j < size; ++j)
      if (array[j] < array[minIndex])
        minIndex = j;

    // Swap the found minimum element with the first element
    int temp = array[i];
    array[i] = array[minIndex];
    array[minIndex] = temp;
  }
}

// Main program to test above functions
int main() {
  int arr[] = {64,25,12,22,11};

  printf("Original array :\n");  
  for (int i=0; i<5 ;i++)
     printf("%d ",arr[i]);   
  printf("\n");  

  selectionSort(arr, sizeof(arr)/sizeof(*arr));

  printf("Sorted array using selection sort:\n"); 
  for (int i=0; i<5 ;i++) 
     printf("%d ",arr[i]);  
  printf("\n");    
  system("pause");
  return 0;
}