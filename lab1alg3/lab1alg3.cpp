#include <stdio.h>

int main() {
    signed char a = 5, b = 127, c = -120, d = -5;
    signed char result;

    result = a + b;
    printf("a) Результат: %d\n", result);

    result = 2 - 3;
    printf("б) Результат: %d\n", result);

    result = c - 34;
    printf("в) Результат: %d\n", result);

    result = (unsigned char)(d);
    printf("г) Результат: %d\n", result);

    result = 56 & 38;
    printf("д) Результат: %d\n", result);

    result = 56 | 38;
    printf("е) Результат: %d\n", result);

    return 0;
}
