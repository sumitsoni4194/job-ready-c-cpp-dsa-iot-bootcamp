#include<stdio.h>
int main() {
    int prev = -1, next = 1, curr, N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++) {
        curr = prev + next;
        prev = next;
        next = curr;
    }
    printf("%d term of fibonnacci series is %d ", N, curr);
    return 0;
}