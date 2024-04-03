#include <stdio.h>

// °C = (°F - 32) × 5/9

void printTemp(int heat)
{
    printf("Current heat : %d\n",heat);
}

int fahrenaitToCelcius(int fahrenait)
{
    int celcius;
    celcius = (fahrenait - 32) * 5/9; 
    return celcius;
}

int main() 
{
    int fahrenait;
    scanf("%d",&fahrenait);
    int celcius = fahrenaitToCelcius(fahrenait);
    printTemp(celcius);
    return 0;
}
