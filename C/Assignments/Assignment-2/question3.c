// Write a program to swap values of two int variables 

#include<stdio.h>
int main() {
    int x, y, t;
    printf("Enter two numbers:");
    scanf("%d%d", &x, &y);
    printf("Before Swapping: x=%d and y=%d", x, y);
    t = x;
    x = y;
    y = t;
    printf("\nAfter Swapping: x=%d and y=%d", x, y);
    return 0;
}