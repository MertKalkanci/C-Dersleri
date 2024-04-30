#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void scanInt(int *input,int *squareroot){
    printf("Enter a number: ");
    scanf("%d", input);
    *squareroot = (int)sqrt(*input); 
}

int main() {
    int a;  // değer atanamamış bir değişken
    int *pointer_a; // memery addres atanmamış bir pointer değişkeni

    a = 5; // a değişkenine değer atanıyor
    pointer_a = &a; // pointer_a değişkenine a değişkeninin memory adresi atanıyor
    
    printf("a değişkeninin memory adresi: 0x%x\n", &a); // a değişkeninin memory adresi yazdırılıyor
    printf("pointer_a gösterdiği memory adresi: 0x%x\n", pointer_a); // a değişkeninin memory adresi yazdırılıyor
    
    printf("a değişkeninin değeri: %d\n", a); // a değişkeninin değeri yazdırılıyor
    printf("pointer_a gösterdiği değer: %d\n", *pointer_a); // pointer_a değişkeninin gösterdiği değer yazdırılıyor

    *pointer_a = 10; // pointer_a değişkeninin gösterdiği değer değiştiriliyor

    printf("a değişkeninin değeri: %d\n", a); // a değişkeninin değeri yazdırılıyor
    printf("pointer_a gösterdiği değer: %d\n", *pointer_a); // pointer_a değişkeninin gösterdiği değer yazdırılıyor

    //scanf("%d", &a); // a değişkenine değer atanıyor

    int input,squareroot;
    scanInt(&input,&squareroot);
    printf("The square root of %d is %d\n", input, squareroot);
}


