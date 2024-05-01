/*!(x < 5) && !(y >= 7)

!(a == b) || !(g != 5)

!((x <= 8) && (y > 4))

!((i > 4) || (j <= 6))*/
//this exercise is like the "we are same-same, but different" meme
#include <stdio.h>

int main() {
    int x = 6, y = 6, a = 3, b = 4, g = 5, i = 3, j = 7;
    // print the result of !(x < 5) && !(y >= 7)
    printf("!(x < 5) && !(y >= 7) is %d\n", !(x < 5) && !(y >= 7));
    // print the result of (x >= 5) || (y < 7)
    printf("(x >= 5) || (y < 7) is %d\n", (x >= 5) || (y < 7));

    // print the result of !(a == b) || !(g != 5)
    printf("!(a == b) || !(g != 5) is %d\n", !(a == b) || !(g != 5));
    // print the result of (a != b) && (g == 5)
    printf("(a != b) && (g == 5) is %d\n", (a != b) && (g == 5));

    // print the result of !((x <= 8) && (y > 4))
    printf("!((x <= 8) && (y > 4)) is %d\n", !((x <= 8) && (y > 4)));
    // print the result of (x > 8) || (y <= 4)
    printf("(x > 8) || (y <= 4) is %d\n", (x > 8) || (y <= 4));

    // print the result of !((i > 4) || (j <= 6))
    printf("!((i > 4) || (j <= 6)) is %d\n", !((i > 4) || (j <= 6)));
    // print the result of (i <= 4) && (j > 6)
    printf("(i <= 4) && (j > 6) is %d\n", (i <= 4) && (j > 6));

    return 0;
}