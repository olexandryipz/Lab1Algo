#include <stdio.h>

union SignedShort {
    signed short value;
    struct {
        unsigned short sign : 1;
        unsigned short magnitude : 15;
    } parts;
};

int main() {
    union SignedShort num;

    printf("Введіть ціле число типу signed short: ");
    scanf_s("%hd", &num.value);

    printf("Знак: %d\n", num.parts.sign);
    printf("Значення: %d\n", num.parts.magnitude);

    return 0;
}
