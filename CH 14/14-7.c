#include <stdio.h>
//if a is less than b, return a, else return b
#define MINIMUM2(a, b) ((a) < (b) ? (a) : (b))
//if a is less than the minimum of b and c, return a, else return the minimum of b and c
//this is just the MINIMUM2 macro with an extra argument, which makes this program quite simpleas there is not much change to the logic, just an additional check
#define MINIMUM3(a, b, c) ((a) < MINIMUM2((b), (c)) ? (a) : MINIMUM2((b), (c)))

int main() {
    //choose 3 numbers to compare
    int num1 = 10;
    int num2 = 20;
    int num3 = 5;
    int min = MINIMUM3(num1, num2, num3);
    printf("The smallest number is: %d\n", min);

    return 0;
}