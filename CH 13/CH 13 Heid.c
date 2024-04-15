//Bucket Sort 13.6
/*Bucket sort is a comparison sort algorithm that operates on elements by dividing them into different buckets and then sorting these buckets individually.
Each bucket is sorted individually using a separate sorting algorithm or by applying the bucket sort algorithm recursively. 
The time complexity of bucket sort is O(n + k), where n is the number of elements in the array and k is the number of buckets. 
The space complexity of bucket sort is O(n + k).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Function to sort the array using bucket sort
void bucketSort(int array[], int n) {
    // Find the maximum element in the array
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Create buckets
    int* buckets = (int*)malloc(sizeof(int) * (max + 1));
    for (int i = 0; i <= max; i++) {
        buckets[i] = 0;
    }

    // Count the number of elements in each bucket
    for (int i = 0; i < n; i++) {
        buckets[array[i]]++;
    }

    // Sort the elements in each bucket and update the original array
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (buckets[i] > 0) {
            array[index++] = i;
            buckets[i]--;
        }
    }

    // Free the memory allocated for buckets
    free(buckets);
}

int main() {
    int array[] = {29, 25, 10, 8, 14, 13, 9};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    bucketSort(array, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
