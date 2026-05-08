#include<stdio.h>
int main() {
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("Number without last digit: %d", x / 10);
    return 0;
}