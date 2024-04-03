#include <stdio.h>

int main() {

    int a = 0;
    dongu(a);


    while(a < 5)
    {
        printf("While Hello World\n");
        a++;
    }
    int j = 0;

    do
    {
        printf("Enter 0 to exit");
        scanf("%d",&j);
        printf("Entered: %d\n",j);
    }  while (j != 0);

    int i;
    for(i = 0;i < 5;i++)
        printf("For Hello World %d\n",i);
    

    printf("For end\n");

    for(i = 5;i > 0;i--)
    {
        printf("For Hello World %d\n",i);
    }

    return 0;
}

void dongu(int i)
{
    printf("Hello world\n");
    i++;
    if(i < 5)
        dongu(i);
}