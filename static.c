#include <stdio.h>
#include <stdlib.h>

int main()
{
    int normalnum = 0;
    static int staticnum = 0;
    printf("Normal number: %d\n", normalnum);
    printf("Static number: %d\n", staticnum);

    normalnum++;
    staticnum++;

    printf("Normal number++: %d\n", normalnum);
    printf("Static number++: %d\n", staticnum);
    {
        int normalnum = 0;
        static int staticnum;
        printf("Normal number: %d\n", normalnum);
        printf("Static number: %d\n", staticnum);

        normalnum++;
        staticnum++;

        printf("Normal number++: %d\n", normalnum);
        printf("Static number++: %d\n", staticnum);
    }
    func();
    func();

}

void func()
{
    int normalnum = 0;
    static int staticnum;

    printf("Normal number: %d\n", normalnum);
    printf("Static number: %d\n", staticnum);

    normalnum++;
    staticnum++;

    printf("Normal number++: %d\n", normalnum);
    printf("Static number++: %d\n", staticnum);
}