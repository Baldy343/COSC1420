//bucket sort copilot
#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum number in an array
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

// A function to perform a counting sort on the array according to the digit represented by exp
void bucketSort(int arr[], int n, int exp) {
    int output[n]; // output array
    int i, buckets[10] = {0};

    // Count the number of occurrences in buckets[]
    for (i = 0; i < n; i++)
        buckets[(arr[i] / exp) % 10]++;

    // Change buckets[i] so that buckets[i] now contains actual position of this digit in output[]
    for (i = 1; i < 10; i++)
        buckets[i] += buckets[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--) {
        output[buckets[(arr[i] / exp) % 10] - 1] = arr[i];
        buckets[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] contains sorted numbers
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main function to sort arr[] of size n using bucket sort
void sort(int arr[], int n) {
    // Find the maximum number to know the number of digits
    int max = findMax(arr, n);

    // Perform bucket sort for every digit. Note that instead of passing digit number, exp is passed. exp is 10^i where i is current digit number
    for (int exp = 1; max / exp > 0; exp *= 10)
        bucketSort(arr, n, exp);
}

// Driver code
int main() {
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}