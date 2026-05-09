#include<stdio.h>

int main() {
    int x, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x < 0) {
        printf("Factorial is not defined");
        return 0;
    }

    for(int i = 1; i <= x; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d", x, fact);

    return 0;
}