#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the length of three sides of triangle:");
    scanf("%d%d%d", &a, &b, &c);
    if((a > 0 && b > 0 && c > 0) && (a + b > c && b + c > a && c + a > b)) {
        printf("Valid Triangle");
    }
    else {
        printf("Not a valid triangle");
    }
    return 0;
}