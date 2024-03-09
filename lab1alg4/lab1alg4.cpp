#include <stdio.h>
#include <stdint.h>

union FloatRepresentation {
    float value;
    struct {
        uint32_t mantissa : 23;
        uint32_t exponent : 8;
        uint32_t sign : 1;
    } parts;
};

int main() {
    union FloatRepresentation num;

    printf("Введіть дійсне число типу float: ");
    scanf_s("%f", &num.value);

    printf("Побітове представлення: %08x\n", *((unsigned int*)&num.value));
    printf("Побайтове представлення: %02x %02x %02x %02x\n", *((unsigned char*)&num.value), *(((unsigned char*)&num.value) + 1), *(((unsigned char*)&num.value) + 2), *(((unsigned char*)&num.value) + 3));
    printf("Знак: %d, Мантиса: %u, Ступінь: %u\n", num.parts.sign, num.parts.mantissa, num.parts.exponent);

    return 0;
}
