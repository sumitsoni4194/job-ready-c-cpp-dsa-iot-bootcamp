#include<stdio.h>
int main() {
    int hour, minute;
    printf("Enter time (HH:MM): ");
    scanf("%d:%d", &hour, &minute);
    printf("%02d hour and %02d minute", hour, minute);
    return 0;
}