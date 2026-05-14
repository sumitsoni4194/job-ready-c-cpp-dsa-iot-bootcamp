#include<stdio.h>

int main() {
    int a, b, HCF;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a == 0 && b == 0) {
        printf("HCF is undefined");
        return 0;
    }

    if(a == 0) {
        printf("HCF of %d and %d is %d", a, b, b);
        return 0;
    }

    if(b == 0) {
        printf("HCF of %d and %d is %d", a, b, a);
        return 0;
    }

    int min = a < b ? a : b;

    for(int i = min; i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            HCF = i;
            break;
        }
    }

    printf("HCF of %d and %d is %d", a, b, HCF);

    return 0;
}