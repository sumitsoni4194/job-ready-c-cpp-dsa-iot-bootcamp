#include<stdio.h>
int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(int i = N; i >= 1; i--) {
        printf("%d\n", i * 2 - 1);
    }
    return 0;
}