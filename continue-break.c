#include <stdio.h>

int main(int argc)
{
    int i,j;
    for (i = 0; i < 100; i++)
    {
        printf("%d\n",i);
            if (i == 21)
                break;
    }
    printf("for end\n");
    for (i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            continue;
        printf("%d\n",i);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d\n",j);
            if (j == 5)
                break;
        }
    }
}
