#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true, b = false;

    printf("a = %d, b = %d\n", a, b);

    if (a)
    {
        printf("a is true\n");
    }
    else
    {
        printf("a is false\n");
    }

    if (b)
    {
        printf("b is true\n");
    }
    else
    {
        printf("b is false\n");
    }

    return 0;
}