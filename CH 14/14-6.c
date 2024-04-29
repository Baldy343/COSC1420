#include <stdio.h>
//if a is less than b, return a, else return b
#define MINIMUM2(a, b) ((a) < (b) ? (a) : (b))

int main() {
//choose 2 numbers to compare
    int num1 = 10;
    int num2 = 20;
    int min = MINIMUM2(num1, num2);

    printf("The smaller number is: %d\n", min);

    return 0;
}