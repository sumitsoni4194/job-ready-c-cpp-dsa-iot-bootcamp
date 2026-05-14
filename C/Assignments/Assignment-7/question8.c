#include<stdio.h>
int main() {
    int num, nextPrime, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 1) {
        nextPrime = 2;
    }
    else {
        nextPrime = num + 1;
    }
    while (1)
    {
        for(i = 2; i < nextPrime; i++) {
            if(nextPrime % i == 0) {
                break;
            }
        }
        if(i == nextPrime) {
            break;
        }
        nextPrime++;
    }
    printf("Next prime number is %d", nextPrime);
    return 0;
}