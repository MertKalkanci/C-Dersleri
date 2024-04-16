#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sec = time(NULL);
    printf("Number of seconds since 1970: %d\n", sec);

    //__time_t t = time(NULL);

    printf("DIFFRENT SEED \n\n\n");

    srand(time(NULL));

    printf("Random number: %d\n", rand());
    printf("Random number: %d\n", rand());
    printf("Random number: %d\n", rand());


    int myrand = rand() % 50;
    printf("Random number between 0 and 50: %d\n", myrand);

    int myrand2 = rand() % 50 + 50;
    printf("Random number between 50 and 100: %d\n", myrand2);

    for (int i = 0; i < 5; i++)
    {
        printf("Random number between 0 and 50: %d\n", rand() % 50);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Random number between 270 and 300: %d\n", rand() % 30 + 270);
    }

    for (int i = 0; i < 5; i++)
    {
        int dice = rand() % 6 + 1;
        printf("Random number between 1 and 6: %d\n", dice);
    }
}

