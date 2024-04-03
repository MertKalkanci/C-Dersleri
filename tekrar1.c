#include <stdio.h>


void empty()
{
    printf("Empty Function");
}

int main()
{
    char na;
    na = "a";
    // char na = "a"; TEKRAR TANIMLAMA YAPILAMAZ
    int sayi = 5;
    int b = 6, c, d = 4;
    empty();

    if (3 <= 5)
        printf("True\n");
    else
    {
        printf("False\n");
    }
    if (0)
    {
        printf("True\n");
    }
    else if (1)
        printf("False\n");

    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
    int j;
    for (j = 0; j < 10; j++)
        printf("%d\n", j);

    i = 0;
    j = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d %d\n", i, j);
        }
    }
    /*
    do
    {
         code 
    } while ( condition );
    */

    /*
        UZUN YORUM   ALT SATIRLARDA KULLANILABİLİR
    */
    // KISA YORUM
    printf("Hello World %.1f\n",2323.234234f); // yorum

    printf("Sayi girin:");
    int a;
    scanf("%d", &a);


    if(a % 2 == 0)
        printf("Cift\n");
    else
        printf("Tek\n");
    
    int x = 5;
    printf("%d\n", x); // 5
    printf("%d\n", x++); // 5 then x = x + 1
    // x = x + 1;
    printf("%d\n", x); // 6
    printf("%d\n", ++x); // x = x + 1 then 7

    return 0; // yorumum
}