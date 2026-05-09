#include<stdio.h>
int main() {
    int N, se = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    if(N <= 0) {
        printf("Number must be greater than 0");
        return 0;
    }
    for(int i = 1; i <= N; i++) {
        se = (se + (i * 2));
    }
    printf("Sum of first %d even natural numbers is %d", N, se);
    return 0;
}