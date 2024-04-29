#include <stdio.h>
//defines macro that sums 2 numbers
#define SUM(x, y) ((x) + (y))
//main function uses SUM
int main() {
    int x = 7;
    int y = 6;
    printf("The sum of x and y is %d\n", SUM(x, y));
    return 0;
}