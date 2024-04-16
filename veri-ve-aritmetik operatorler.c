#include <stdio.h>

int main() {

    int a; // virgülsüz sayı
    float b = 10.5; // virgüllü sayı
    char c = 'A'; // karakter
    char d[] = "Merhaba"; // karakter dizisi (String)
    a = 10;

    a++; // a = a + 1
    a += 5; // a = a + 5
    a--; // a = a - 1
    a -= 5; // a = a - 5
    --a; // a = a - 1
    ++a; // a = a + 1
    a *= 2; // a = a * 2
    a /= 2; // a = a / 2
    a = a / 2;
    a = a * 2;
    b++; // b = b + 1

    
    a = 10;


    a = a % 2; // a = a % 2 = 0
    a = 10;
    a = a % 3; // a = a % 3 = 1
    a = 10;
    printf("a++: %d\n", a++); // a: 10
    printf("a: %d\n", a); // a: 11
    printf("++a: %d\n", ++a); // a: 12
    printf("a: %d\n", a); // a: 12
    printf("10 % 2: %d\n", (10 % 2)); // a: 0
    printf("10 % 3: %d\n", (10 % 3)); // a: 1

    return 0;
}