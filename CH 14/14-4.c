#include <stdio.h>
#include <math.h>

int main() {
    double r, V;
    const double pi = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);

    V = (4.0 / 3.0) * pi * pow(r, 3);

    printf("The volume of the sphere is: %.2lf\n", V);

    return 0;
}