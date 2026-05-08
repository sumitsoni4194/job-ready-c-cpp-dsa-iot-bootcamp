#include<stdio.h>
int main() {
    int x, y;
    printf("Enter two numbers:");
    scanf("%d%d", &x, &y);
    printf("Before Swapping: x=%d and y=%d", x, y);
    y = y + x;
    x = y - x;
    y = y - x;
    printf("\nAfter Swapping: x=%d and y=%d", x, y);
    return 0;
}