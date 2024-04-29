#include <stdio.h>
//prints the array with a for loop
#define PRINTARRAY(arr, size) \
    do { \
        printf("Array: "); \
        for (int i = 0; i < size; i++) { \
            printf("%d ", arr[i]); \
        } \
        printf("\n"); \
    } while(0)
//main function that prints the array with the PRINTARRAY macro
// I feel like this could have been used a few weeks ago with some of the array stuff but I guess it's better late than never
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    PRINTARRAY(arr, size);

    return 0;
}