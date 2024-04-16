#include <stdio.h>
#include <math.h>


int main ()
{

    float a = 3.3, b = 4.7;

    // (int)
    printf("(int)3.3 = %d\n", (int)a);
    printf("(int)4.7 = %d\n", (int)b);

    // ceil
    printf("ceil(3.3) = %f\n", ceil(a));
    printf("ceil(4.7) = %f\n", ceil(b));

    // floor
    printf("floor(3.3) = %f\n", floor(a));
    printf("floor(4.7) = %f\n", floor(b));

    // sqrt
    printf("sqrt(3.3) = %f\n", sqrt(a));
    printf("sqrt(4.7) = %f\n", sqrt(b));

    // pow
    printf("pow(3, 2) 3^2 = %f\n", pow(3, 2));
    printf("pow(4, 2) 4^2 = %f\n", pow(4, 2));
}