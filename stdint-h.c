#include <stdio.h>
#include <stdint.h>


int main ()
{
    // 8 byte int
    int8_t a = 3, b = 4;

    printf("a = %d, b = %d\n", a, b);

    // 16 byte int
    int16_t c = 3, d = 4;

    printf("c = %d, d = %d\n", c, d);

    // 32 byte int
    int32_t e = 3, f = 4;

    printf("e = %d, f = %d\n", e, f);

    // 64 byte int
    int64_t g = 3, h = 4;

    printf("g = %d, h = %d\n", g, h);

    printf("sizeof(int8_t) = %d Bytes\n", sizeof(int8_t));
    printf("sizeof(int16_t) = %d Bytes\n", sizeof(int16_t));
    printf("sizeof(int32_t) = %d Bytes\n", sizeof(int32_t));
    printf("sizeof(int64_t) = %d Bytes\n", sizeof(int64_t));

    printf("Sum of a and h (3 + 4) = %d\n", a + h);

}