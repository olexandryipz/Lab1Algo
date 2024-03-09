#include <stdio.h>
#include <stdint.h>
#include <time.h>

struct CompactDateTime {
    uint8_t seconds;
    uint8_t minutes;
    uint8_t hours;
    uint8_t day;
    uint8_t month;
    uint16_t year;
};

void printCompactDateTime(struct CompactDateTime datetime) {
    printf("%02d:%02d:%02d %02d.%02d.%04d\n", datetime.hours, datetime.minutes, datetime.seconds, datetime.day, datetime.month, datetime.year);
}

int main() {
    printf("Розмір структури CompactDateTime: %zu байт\n", sizeof(struct CompactDateTime));
    printf("Розмір структури tm: %zu байт\n", sizeof(struct tm));
    printf("\n");

    time_t rawtime;
    struct tm timeinfo;
    time(&rawtime);
    localtime_s(&timeinfo, &rawtime);

    struct CompactDateTime currentDateTime = { timeinfo.tm_sec, timeinfo.tm_min, timeinfo.tm_hour, timeinfo.tm_mday, timeinfo.tm_mon + 1, timeinfo.tm_year + 1900 };

    printf("Поточний час і дата: ");
    printCompactDateTime(currentDateTime);

    return 0;
}
