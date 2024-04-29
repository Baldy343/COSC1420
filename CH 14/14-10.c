#include <stdio.h>
//   #include <python.h> lmao (saw this on reddit)
// defines macro that sums the array
#define SUMARRAY(arr, size) \
    ({ \
        int sum = 0; \
        for (int i = 0; i < size; i++) { \
            sum += arr[i]; \
        } \
        sum; \
    })
//main function that sums the array with le macro
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum = SUMARRAY(numbers, size);

    printf("Sum of the array: %d\n", sum);

    return 0;
}