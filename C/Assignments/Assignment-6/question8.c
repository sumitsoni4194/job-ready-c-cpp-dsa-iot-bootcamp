#include<stdio.h>

int main() {
    int x, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(x < 2) {
        printf("%d is not a prime number", x);
        return 0;
    }

    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime) {
        printf("%d is a prime number", x);
    }
    else {
        printf("%d is not a prime number", x);
    }

    return 0;
}