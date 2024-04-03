#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    switch (a)
    {
        case 0:
            printf("sayi zifir");
            break;
        case 1:
            printf("sayi minnak");
            break;
        default:
            printf("sayi ney ki");
            break;
    }
    
}
