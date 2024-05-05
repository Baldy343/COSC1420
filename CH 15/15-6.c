#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
(Dynamic Array Allocation) Write a program that dynamically allocates an array of integers. 
The size of the array should be input from the keyboard. 
The elements of the array should be assigned values input from the keyboard. Print the array’s values. 
Next, reallocate the memory for the array to half of the current number of elements. 
Print the array’s remaining values to confirm they match the first half of the original array’s values.
*/

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int* array = (int*)malloc(size * sizeof(int));

    // Input values for the array
    printf("Enter %d values for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Print the array's values
    printf("Array values:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Reallocate memory for the array to half of the current size
    int newSize = size / 2;
    array = (int*)realloc(array, newSize * sizeof(int));

    // Print the remaining values of the array
    printf("Remaining values after reallocation:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(array);

    return 0;
}