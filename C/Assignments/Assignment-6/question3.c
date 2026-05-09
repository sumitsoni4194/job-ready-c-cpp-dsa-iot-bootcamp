#include<stdio.h>
int main() {
    int N, so = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    if(N <= 0) {
        printf("Number must be greater than 0");
        return 0;
    }
    for(int i = 1; i <= N; i++) {
        so = (so + (i * 2 - 1));
    }
    printf("Sum of first %d odd natural numbers is %d", N, so);
    return 0;
}