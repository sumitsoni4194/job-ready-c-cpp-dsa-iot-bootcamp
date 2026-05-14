#include<stdio.h>
int main() {
    int a, b, isPrime;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    for(int i = min; i <= max; i++) {
        if(i < 2) {
            continue;
        }
        isPrime = 1;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
    return 0;
}