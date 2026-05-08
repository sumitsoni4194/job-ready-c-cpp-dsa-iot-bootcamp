#include<stdio.h>
int main() {
    int day, month, year;
    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Day - %02d, Month - %02d, Year - %04d", day, month, year);
    return 0;
}